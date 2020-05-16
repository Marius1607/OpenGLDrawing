#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <Point.h>
#

class Triangle
{
    public:
        Triangle();
        Triangle(Point a, Point b, Point c, bool full);
        Triangle(double a, double b, double c, double d, double e, double f, bool full);
        virtual ~Triangle();
        void draw();

    private:
        Point a;
        Point b;
        Point c;
        bool fullDraw;
};

#endif // TRIANGLE_H
