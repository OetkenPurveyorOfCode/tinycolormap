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


