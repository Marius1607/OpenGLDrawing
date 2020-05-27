#include <iostream>
#include <unistd.h>
#include <math.h>
#include "EngineGlut.h"
#include <Point.h>
#include <Line.h>
#include <Triangle.h>
#include <Rectangle.h>
#include <Airplane.h>

#define PI 3.1415
void drawSinus()
{
    EngineGlut e;

    //x from (-400,+400)
    //y = 100*sin(x)
    for (float i=0; i<360; i+=1)
    {
	float x = 180-i;
	float y = 100*sin(i/180*PI);
	e.drawPoint(x, y);
    }
}

void drawLineAnimation()
{
    EngineGlut e;

    for (int i=-200; i<0; i+=10)
    {
	    e.drawClear();
	    e.drawLine(i,0,i+300,200);
	    usleep(500000);
    }
}

void testLine()
{
    Line line(0,0, 0, 290);
    line.draw();
}

void testTriangle()
{
    Triangle triangle(0,0,-10,-20,10,-20,false);
    triangle.draw();
}

void testPoint()
{
    Point point(500, 500);
    point.draw();
}

void testRectangle()
{
    Rectangle rectangle(200, 200, 50, 500, true);
    rectangle.draw();
}

int main(int argc, char ** argv)
{

    testRectangle();
    std::cin.ignore();
}
