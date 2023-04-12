#include "../include/EulersMethod_ODE_Solver.h"
#include "ODE_Solver.cpp"

PhysicsEngine::EulersMethod_ODE_Solver::EulersMethod_ODE_Solver() {
    /* void */
}

PhysicsEngine::EulersMethod_ODE_Solver::~EulersMethod_ODE_Solver() {
    /* void */
}

void PhysicsEngine::EulersMethod_ODE_Solver::start(Object *initial, double dt) {
    ODE_Solver::start(initial, dt);
}

bool PhysicsEngine::EulersMethod_ODE_Solver::step(Object *obj) {
    obj->dt = m_dt;
    return true;
}

void PhysicsEngine::EulersMethod_ODE_Solver::solve(Object *obj) {
    obj->dt = m_dt;

    for (int i = 0; i < obj->n; i++) {

        obj->p_x[i] += obj->v_x[i] * m_dt;
        obj->p_y[i] += obj->v_y[i] * m_dt;
        obj->sigma[i] += obj->v_sigma[i] * m_dt;

        obj->v_x[i] += obj->a_x[i] * m_dt;
        obj->v_y[i] += obj->a_y[i] * m_dt;
        obj->v_sigma[i] += obj->a_sigma[i] *m_dt;
        
    }
}

void PhysicsEngine::EulersMethod_ODE_Solver::end() {
    /* void */
}

