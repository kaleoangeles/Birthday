#include "circle.h"

Circle::Circle(const Point& _center, int _radius) {
    center = _center;
    radius = _radius;
}

const vector<Point> Circle::getPoints() const {
    vector<Point> output;
    int x = 0;
    int y = radius;
    int error = 1 - radius;

    do {
        output.push_back(Point(center.getX() + x, center.getY() + y));
        output.push_back(Point(center.getX() + y, center.getY() + x));
        output.push_back(Point(center.getX() - x, center.getY() + y));
        output.push_back(Point(center.getX() - y, center.getY() + x));
        output.push_back(Point(center.getX() - x, center.getY() - y));
        output.push_back(Point(center.getX() - y, center.getY() - x));
        output.push_back(Point(center.getX() + x, center.getY() - y));
        output.push_back(Point(center.getX() + y, center.getY() - x));

        if (error < 0) {
            error += (2 * x) + 1;
        } else {
            y--;
            error += (2 * x) - (2 * y) + 1;
        }
        x++;
    } while (y > x);
}

float Circle::getArea() const {
    return (numbers::pi * radius * radius);
}
