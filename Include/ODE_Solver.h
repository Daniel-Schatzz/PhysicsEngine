#ifndef PHYSICSENGINE_ODE_SOLVER_H
#define PHYSICSENGINE_ODE_SOLVER_H

#include "Object.h"

namespace PhysicsEngine {
    class ODE_Solver {
        public:
            ODE_Solver();
            virtual ~ODE_Solver();

            virtual void start(Object *initial, double dt);
            virtual bool step(Object *obj);
            virtual void solve(Object *obj);
            virtual void end();
        protected:
            double m_dt;
    };  
} /* namespace PhysicsEngine */









#endif /* PHYSICSENGINE_ODE_SOLVER_H */