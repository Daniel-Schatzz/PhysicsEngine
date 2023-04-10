#include "../include/Object.h"
#include "../include/utilities.h"

#include <cstring>
#include <cmath>

PhysicsEngine::Object::Object() {

    a_sigma = nullptr;
    v_sigma = nullptr;
    sigma = nullptr;

    a_x = nullptr;
    a_y = nullptr;
    v_x = nullptr;
    v_y = nullptr;
    p_x = nullptr;
    p_y = nullptr;

    f_x = nullptr;
    f_y = nullptr;
    t = nullptr;

    m = nullptr;

    n = 0;
    dt = 0.0;
}

void PhysicsEngine::Object::destroy() {
    if (n > 0) {
        freeArray(a_sigma);
        freeArray(v_sigma);
        freeArray(sigma);

        freeArray(a_x);
        freeArray(a_y);
        freeArray(v_x);
        freeArray(v_y);
        freeArray(p_x);
        freeArray(p_y);

        freeArray(f_x);
        freeArray(f_y);
        freeArray(t);

        freeArray(m);
    }

    n = 0;
}

void PhysicsEngine::Object::applyForce(double x_l, double y_l, double f_x, double f_y, int body)
{
    
}