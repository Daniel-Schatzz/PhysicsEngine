#include "../Include/Object.h"
#include "Object.cpp"
#include "EulersMethod_ODE_Solver.cpp"

#include <iostream>

#include <stdio.h>

#include <ctime>

#include <windows.h>

using namespace PhysicsEngine;

Object *obj;
EulersMethod_ODE_Solver euler;

void printObject() {
        for (int i = 0; i < obj->n; ++i) {
                printf("Object[%i] Pos(%0.2f,%0.2f) Velocity(%0.2f,%0.2f))", i, obj->p_x[i], obj->p_y[i], obj->v_x[i], obj->v_y[i]);
        }
}

void ApplyForces() {
        for (int i = 0; i < obj->n; ++i) {
                obj->f_x[i] = 0;
                obj->f_y[i] = double(obj->m[i] * -9.81); 
                obj->a_x[i] = obj->f_x[i] / obj->m[i];
                obj->a_y[i] = obj->f_y[i] / obj->m[i];
        }
    
}

void initializeObject() {
        for (int i = 0; i < 2; ++i) {
                euler.start(obj, obj->dt);
                srand((unsigned)time(0));
                obj->p_x[i] = double(rand() % 200);
                obj->p_y[i] = double(rand() % 200);

                obj->v_x[i] = 0;
                obj->v_y[i] = 0;

                obj->m[i] = 1;
                obj->dt = 1;
                obj->n = 2;
        }
}

int main() {
    float currentTime = 0;
    float totalSimulationTime = 10;
    initializeObject();
    


    while (currentTime < totalSimulationTime) {
        for (int i = 0; i < obj->n; ++i) {
            ApplyForces();
            euler.solve(obj);

            if (obj->p_y[i] > 0) {
                printObject();
                printf("HEHE");
            } else {
                obj->p_y[i] = 0; 
                printObject();
                break;
            }

            euler.step(obj);
            currentTime += obj->dt;
        }
    euler.end();
        
    }
}