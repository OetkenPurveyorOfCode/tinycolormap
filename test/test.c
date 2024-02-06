#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define TINYCOLORMAP_IMPLEMENTATION
#include "../tinycolormap.h"
#include "bmp.h"


void run(char* filename, tcm_ColormapType colormap) {
    FILE* f = fopen(filename, "wb+");
    if (!f) {
        perror("Could not open file\n");
        exit(EXIT_FAILURE);
    }
    const size_t width = 800;
    const size_t height = 100;
    const size_t size = bmp_size(width, height);
    if (!size) {
        fprintf(stderr, "Incorrect Dimensions");
        exit(EXIT_FAILURE);
    }
    void* membuf = malloc(size);
    if (!membuf) {
        fprintf(stderr, "Allocation failure");
        exit(EXIT_FAILURE);
    }
    bmp_init(membuf, width, height);
    for (size_t y = 0; y < height; y++) {
        for (uint32_t x = 0; x < width; x++) {
            tcm_Color color = tcm_color((double)x/width, colormap);
            bmp_set(membuf, x, y, bmp_encode(color.r, color.g, color.b));
        }
    }
    if (fwrite(membuf, 1, size, f) != size) {
        fprintf(stderr, "Write failed %s\n", filename);
        //exit(EXIT_FAILURE);
    }
    if(fclose(f) != 0) {
        fprintf(stderr, "Failed to close");
        exit(EXIT_FAILURE);
    }
}

int main(void) {
    run("parula.bmp", TCM_Parula);
    run("heat.bmp", TCM_Heat);
    run("jet.bmp", TCM_Jet);
    run("turbo.bmp", TCM_Turbo);
    run("hot.bmp", TCM_Hot);
    run("gray.bmp", TCM_Gray);
    run("magma.bmp", TCM_Magma);
    run("inferno.bmp", TCM_Inferno);
    run("plasma.bmp", TCM_Plasma);
    run("viridis.bmp", TCM_Viridis);
    run("cividis.bmp",TCM_Cividis);
    run("github.bmp", TCM_Github);
    run("cubehelix.bmp", TCM_Cubehelix);
    run("hsv.bmp", TCM_HSV);
    return 0;
}
