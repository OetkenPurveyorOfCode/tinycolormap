# Tinycolormap

## About

A C99 header only colormap library.

## Usage

```C
#define TINYCOLORMAP_IMPLEMENTATION
#include "tinycolormap.h"
#include <stdio.h>

int main(void) {
    tcm_Color color = tcm_color(0.5, TCM_Viridis);
    printf("r=%f, g=%f, b=%f", color.r, color.g, color.b);
    return 0;
}
```

## Available Colormaps

Parula <br>
![Parula](./test/parula.bmp)

Heat <br>
![Heat](./test/heat.bmp)

Jet <br>
![Jet](./test/jet.bmp)

Turbo <br>
![Turbo](./test/turbo.bmp)

Hot <br>
![Hot](./test/hot.bmp)

Gray <br>
![Gray](./test/gray.bmp)

Magma <br>
![Magma](./test/magma.bmp)

Plasma <br>
![Plasma](./test/plasma.bmp)

Viridis <br>
![Viridis](./test/viridis.bmp)

Cividis <br>
![Cividis](./test/cividis.bmp)

Github <br>
![Github](./test/github.bmp)

Cubehelix <br>
![Cubehelix](./test/cubehelix.bmp)

HSV <br>
![HSV](./test/hsv.bmp)

# License

 MIT License

 Copyright (c) 2024 Alexander Oetken <br>
 Copyright (c) 2018-2020 Yuki Koyama

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 SOFTWARE.


