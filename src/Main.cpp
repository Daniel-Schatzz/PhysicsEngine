#include "../Include/Object.h"
#include "Object.cpp"

#include <iostream>

#include <stdio.h>

#include <ctime>

#include <windows.h>


#define NUM_OBJECTS 1


using namespace PhysicsEngine;

Object obj;

void printObject() {
        printf("Object Pos(%0.2f,%0.2f) Velocity(%0.2f,%0.2f))", obj.p_x[0], obj.p_y[0], obj.v_x[0], obj.v_y[0]);
}

void ApplyForces() {
        obj.f_x[0] = 0;
        obj.f_y[0] = double(obj.m[0] * -9.81); 
    
}

int main() {
    float currentTime = 0;
    float totalSimulationTime = 10;


    while (currentTime < totalSimulationTime) {
        Sleep(obj.dt);
            ApplyForces();

            if (obj.p_y > 0) {
                printObject();
            } else {
                obj.p_y = 0; 
                printObject();
                break;
            }
        
            currentTime += obj.dt;
        
    }

}