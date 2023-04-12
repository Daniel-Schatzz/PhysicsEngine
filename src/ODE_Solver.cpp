#include "../include/ODE_Solver.h"

PhysicsEngine::ODE_Solver::ODE_Solver() {
    m_dt = 0.0;
}

PhysicsEngine::ODE_Solver::~ODE_Solver() {
    /* void */
}

void PhysicsEngine::ODE_Solver::start(Object *initial, double dt) {
    m_dt = dt;
}

bool PhysicsEngine::ODE_Solver::step(Object *obj) {
    return true;
}

void PhysicsEngine::ODE_Solver::solve(Object *obj) {
    /* void */
}

void PhysicsEngine::ODE_Solver::end() {
    /* void */
}
