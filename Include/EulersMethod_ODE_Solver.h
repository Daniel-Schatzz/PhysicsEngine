#ifndef PHYSICSENGINE_EULERS_METHOD_ODE_SOLVER_H
#define PHYSICSENGINE_EULERS_METHOD_ODE_SOLVER_H

#include "ODE_Solver.h"

namespace PhysicsEngine {
    class EulersMethod_ODE_Solver : public ODE_Solver {
        public:
            EulersMethod_ODE_Solver();
            virtual ~EulersMethod_ODE_Solver();

            virtual void start(Object *initial, double dt);
            virtual bool step(Object *obj);
            virtual void solve(Object *obj);
            virtual void end();

    };
} /* namespace PhysicsEngine */


#endif /* PHYSICSENGINE_EULERS_METHOD_ODE_SOLVER_H */