#include "canvas.h"

Canvas::Canvas (int width, int height, std::string author) : 
    AbstractGrid{width, height}
{
}

void Canvas::draw() const{}

void addShape (const std::share_ptr<AbstractShape> shape)
{

}
