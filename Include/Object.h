namespace PhysicsEngine {
    class Object {
        public:
            // Object();
            // ~Object();


            void destroy();
            void applyForce(double x_l, double y_l, double f_x, double f_y, int body);

            double a_sigma;
            double a_x;
            double a_y;


            double v_sigma;
            double v_x;
            double v_y;


            double sigma;

            double p_x;
            double p_y;

            double f_x;
            double f_y;
            double t;

            double m;

            int n;
            int n_c;
            double dt;

    };
}