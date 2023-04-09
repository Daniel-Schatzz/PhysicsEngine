#include <stdio.h>

#include <stdlib.h>

#include <windows.h>

#include <iostream>

#define NUM_PARTICLES 1


typedef struct {
    float x;
    float y;
} Vector2;

typedef struct {
    Vector2 position;
    Vector2 velocity;
    float mass;
} Particle;

Particle particles[NUM_PARTICLES];

void PrintParticles() {
    for (int i = 0; i < NUM_PARTICLES; ++i) {
        Particle *particle = &particles[i];
        printf("particle[%i] (%.2f, %.2f)\n", i, particle->position.x, particle->position.y);
    }
}

void InitializeParticles() {
    for (int i = 0; i < NUM_PARTICLES; ++i) {
        particles[i].position = {float(rand() % 50), float(rand() % 50)};
        particles[i].velocity = {0,0};
        particles[i].mass = 1;
    }
}

Vector2 ComputeForce(Particle *particle) {
    return {0, float(particle->mass * -9.81)};
}

void RunSimulation() {
    float totalSimulationTime = 10;
    float currentTime = 0;
    float dt = 1;

    InitializeParticles();
    PrintParticles();

    while (currentTime < totalSimulationTime) {
        Sleep(dt);

        for (int i = 0; i < NUM_PARTICLES; ++i) {
            Particle *particle = &particles[i];
            Vector2 force = ComputeForce(particle);
            Vector2 acceleration = {force.x / particle->mass, force.y / particle->mass};
            particle->velocity.x += acceleration.x * dt;
            particle->velocity.y += acceleration.y * dt;
            particle->position.x += particle->velocity.x * dt;
            particle->position.y += particle->velocity.y * dt;
        }

        PrintParticles();
        currentTime += dt;
    }
}