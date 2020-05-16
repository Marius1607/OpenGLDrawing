#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point();
        Point(double x, double y);
        virtual ~Point();
        float getX();
        float getY();
        void setX(double x);
        void setY(double y);
        void draw();

    private:
        double x;
        double y;
};

#endif // POINT_H
