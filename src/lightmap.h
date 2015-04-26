#ifndef LIGHTMAP_H
#define LIGHTMAP_H

#define LIGHT_SOURCE_LOCAL  0.1f
#define LIGHT_SOURCE_BRIGHT 10

#define LIGHT_AMBIENT_LOW   3.5
#define LIGHT_AMBIENT_LIT   5.0

#define LIGHT_TRANSPARENCY_SOLID 0
// Calculated to run out at 60 squares.
#define LIGHT_TRANSPARENCY_OPEN_AIR 0.0383
#define LIGHT_TRANSPARENCY_CLEAR 1

#define LIGHT_RANGE(b) static_cast<int>( -log(LIGHT_AMBIENT_LOW / (float)b) * (1.0 / LIGHT_TRANSPARENCY_OPEN_AIR) )


enum lit_level {
    LL_DARK = 0,
    LL_LOW, // Hard to see
    LL_LIT,
    LL_BRIGHT_ONLY, // bright but indistinct
    LL_BRIGHT, // Probably only for light sources
    LL_BLANK // blank space, not an actual light level
};

#endif
