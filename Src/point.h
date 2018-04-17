#ifndef MESHGEN_POINT_H
#define MESHGEN_POINT_H

#include <stdbool.h>

struct point {
    double x;
    double y;
    double z;
};

void
init_point(struct point *point, double x, double y, const short **map);

double
get_height(double x, double y, const short **map);

bool
point_equals(struct point *a, struct point *b);

#endif // MESHGEN_POINT_H