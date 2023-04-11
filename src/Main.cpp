#include "../Include/Object.h"

#include <iostream>

#include <stdio.h>

#include <ctime>

#include <windows.h>

#define NUM_OBJECTS 1


using namespace PhysicsEngine;

Object obj;

void printObject() {
        printf("Object Pos(%0.2f,%0.2f) Velocity(%0.2f,%0.2f))", obj.p_x, obj.p_y, obj.v_x, obj.v_y);
}

void initiazeObject() {
    
        srand((unsigned)time(0));
        obj.p_x = float(rand() % 200);
        obj.p_y = float(rand() % 200);

        obj.v_x = 0;
        obj.v_y = 0;

        obj.m = 1;
        obj.dt = 1;
}

void ApplyForces() {
        obj.f_x = 0;
        obj.f_y = double(obj.m * -9.81); 
    
}

void EulersMethod() {
        obj.a_x = obj.f_x / obj.m;
        obj.a_y = obj.f_y / obj.m;
        obj.v_x += obj.a_x * obj.dt;
        obj.v_y += obj.a_y * obj.dt;
        obj.p_x += obj.v_x * obj.dt;
        obj.p_y += obj.v_y * obj.dt;
    
}

int main() {
    float currentTime = 0;
    float totalSimulationTime = 10;

    initiazeObject();

    while (currentTime < totalSimulationTime) {
        Sleep(obj.dt);
            ApplyForces();
            EulersMethod();

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