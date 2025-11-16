//
// Created by lionel liu on 16/11/2025.
//

#ifndef COLOUR_H
#define COLOUR_H

#include "vec3.h"
#include <iostream>

using colour = vec3;

void write_colour(std::ostream& out, const colour& c) {
    auto r = c.x();
    auto g = c.y();
    auto b = c.z();

    int rbyte = int(255.999 * r);
    int gbyte = int(255.999 * g);
    int bbyte = int(255.999 * b);

    out << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}
#endif //COLOUR_H
