#include "../include/utilities.h"

void PhysicsEngine::freeArray(double *&data) {
    delete[] data;
    data = nullptr;
}

void PhysicsEngine::freeArray(int *&data) {
    delete[] data;
    data = nullptr;
}