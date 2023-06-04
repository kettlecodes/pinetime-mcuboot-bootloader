# rle_encode

This Dart project can be used to encode (RLE) an image so that it
can be included in the PineTime bootloader project.

## Usage

First, prepare your image in your favorite image manipulation
program. Reduce the number of contained colors to 2, 4, 8 or 16.
This can usually be done by changing the image format from "RGB"
to "indexed" and specifying a maximum number of colors.

After that, run rle_encode to display the metadata (width, height,
etc.), the used colors and the RLE bytes, all of which can then be
included in the bootloader.

Example:

```
cd tools/rle_encode
dart run bin/rle_encode ../../img/kettle-3bit.png
```

