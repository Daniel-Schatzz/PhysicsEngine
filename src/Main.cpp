#include "../Include/Object.h"

#include <stdio.h>

#include <stdlib.h>

using namespace PhysicsEngine;

int main() {
    Object obj;
    // obj.destroy();
    obj.a_sigma = (double *)20;
    printf((const char *)obj.a_sigma);
}