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

Parula
![Parula](./test/parula.bmp)

Heat
![Heat](./test/heat.bmp)

Jet
![Jet](./test/jet.bmp)

Turbo
![Turbo](./test/turbo.bmp)

Hot
![Hot](./test/hot.bmp)

Gray
![Gray](./test/gray.bmp)

Magma
![Magma](./test/magma.bmp)

Plasma
![Plasma](./test/plasma.bmp)

Viridis
![Viridis](./test/viridis.bmp)

Cividis
![Cividis](./test/cividis.bmp)

Github
![Github](./test/github.bmp)

Cubehelix
![Cubehelix](./test/cubehelix.bmp)

HSV
![HSV](./test/hsv.bmp)


