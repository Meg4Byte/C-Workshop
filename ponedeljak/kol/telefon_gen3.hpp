#ifndef CIRCLE_HPP_INCLUDED
#define CIRCLE_HPP_INCLUDED
#include <iostream>

class Circle
{
    private:
        double radius;

    public:
        Circle() : radius(1) {}
        Circle(double rad) : radius(rad) {}
        Circle(const Circle &r) : radius(r.radius) {}

        double getRadius() const
        {
            return radius;
        }  

        void setRadius(double r)
        {
            radius = r;
        } 

        double getArea() const
        {
            return 3.141*radius*radius;
        }

        double getCirc() const
        {
            return 2*3.141*radius;
        }

        void drawCircle() const
        {
            std::cout << "Drawing a circle with raiuds " << radius << std::endl;
        }

        friend void draw(const Circle& c) 
        {
            std::cout << "Radius of circle is " << c.radius << std::endl;
        }

};

#endif 