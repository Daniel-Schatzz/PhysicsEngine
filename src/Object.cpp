#include "../include/Object.h"
#include "../include/utilities.h"

#include <cstring>
#include <assert.h>
#include <cmath>

PhysicsEngine::Object::Object() {

    a_sigma = 0;
    v_sigma = 0;
    sigma = 0;

    a_x = 0;
    a_y = 0;
    v_x = 0;
    v_y = 0;
    p_x = 0;
    p_y = 0;

    f_x = 0;
    f_y = 0;
    t = 0;

    m = 0;

    n = 0;
    dt = 1;
}

PhysicsEngine::Object::~Object() {
    assert(n == 0);
}

void PhysicsEngine::Object::destroy() {
    if (n > 0) {
        a_sigma = 0;
        v_sigma = 0;
        sigma = 0;

        a_x = 0;
        a_y = 0;
        v_x = 0;
        v_y = 0;
        p_x = 0;
        p_y = 0;

        f_x = 0;
        f_y = 0;
        t = 0;

        m = 0;
    }

    n = 0;
}

void PhysicsEngine::Object::applyForce(double x_l, double y_l, double f_x, double f_y, int body)
{
    
}