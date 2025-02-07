#pragma once

#include "point.h"
#include "shape.h"

#include <vector>
#include <numbers>

using namespace std;

class Circle : public AbstractShape {
private:
    Point center;
    int radius;
public:
    Circle(const Point& _center, int _radius);
    const vector<Point> getPoints() const;
    float getArea() const;
};
