#ifndef MESHGEN_POINT_H
#define MESHGEN_POINT_H

#include <stdbool.h>
#include "map.h"

struct point {
    double x;
    double y;
    double z;
    char border;
};

void
init_point(struct point *point, double x, double y, struct map *map);

double
get_height(double x, double y, struct map *map);

double
get_height_wo_interpol(double lon, double lat, int corner, const struct map *map);

bool
point_equals(struct point *a, struct point *b);

double
get_coordinate(int coordinate, struct point *point);

struct point *
mul_by_scalar(double scalar, const struct point *point);

void
sort_points(int size, size_t indices[], int coordinate, struct point **points);

#endif // MESHGEN_POINT_H
