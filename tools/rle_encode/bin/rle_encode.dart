import 'package:image/image.dart' as img;

void main(List<String> arguments) async {
  // check argument count
  if (arguments.isEmpty) {
    print('Usage: rle_encode <image file>');
    return;
  }

  // decode the image
  img.Image? image = await img.decodeImageFile(arguments.first);
  if (image == null) {
    print('Could not decode image.');
    return;
  }

  // output the image size
  print('Width: ${image.width} ; height: ${image.height}');

  // build a list of contained colors
  List<int> colors = [];
  for (img.Pixel pixel in image) {
    int color =
        (pixel.r.toInt() << 16) + (pixel.g.toInt() << 8) + pixel.b.toInt();
    if (!colors.contains(color)) {
      colors.add(color);
    }
  }

  // output the colors
  for (int i = 0; i < colors.length; i++) {
    // calculate 16 bit color
    int r = (colors[i] >> 16) & 0xff;
    int g = (colors[i] >> 8) & 0xff;
    int b = colors[i] & 0xff;
    int color16 = ((r >> 3) << 11) + ((g >> 2) << 5) + (b >> 3);
    print('Color $i: 0x${colors[i].toRadixString(16).padLeft(6, '0')}'
    ' -> 0x${color16.toRadixString(16).padLeft(4, '0')} (16 bits)');
  }

  // find out how many bits to use for the color index
  int colorBits = 1;
  while ((1 << colorBits) < colors.length) {
    colorBits++;
  }
  print('Using $colorBits bits for the color index.');
  int maxRunLength = 255 >> colorBits;
  print('Maximum run length: $maxRunLength');
  if (maxRunLength < 1) {
    print('It should be obvious that this cannot work.');
    return;
  }

  // do the run length encoding of the image
  int runLength = 0;
  int currentColor = -1;
  String bytes = '';
  int byteCount = 0;
  for (img.Pixel pixel in image) {
    // get the pixel's color
    int color =
        (pixel.r.toInt() << 16) + (pixel.g.toInt() << 8) + pixel.b.toInt();

    // find out if the current run continues
    bool runDone = false;
    if (color == currentColor) {
      if (runLength == maxRunLength) {
        runDone = true;
      } else {
        runLength++;
      }
    } else {
      runDone = true;
    }
    if (runDone) {
      // get the byte
      if (currentColor >= 0) {
        int byte = (runLength << colorBits) + colors.indexOf(currentColor);
        bytes += '0x${byte.toRadixString(16).padLeft(2, '0')}, ';
        if (bytes.length >= 96) {
          print(bytes);
          bytes = '';
        }
        byteCount++;
      }

      // start the next run
      currentColor = color;
      runLength = 1;
    }
  }

  // finish the current run
  if ((runLength > 0) && (currentColor >= 0)) {
    int byte = (runLength << colorBits) + colors.indexOf(currentColor);
    bytes += '0x${byte.toRadixString(16).padLeft(2, '0')}, ';
    byteCount++;
  }
  if (bytes.isNotEmpty) {
    print(bytes);
  }
  print('Total RLE bytes: $byteCount');
}
