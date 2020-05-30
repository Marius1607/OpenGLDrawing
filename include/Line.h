#ifndef LINE_H
#define LINE_H
#include <Point.h>

class Line
{
    public:
        Line();
        Line(Point x, Point y);
        Line(double a, double b, double c, double d);
        virtual ~Line();
        void draw();

    private:
        Point x;
        Point y;
};

#endif // LINE_H
