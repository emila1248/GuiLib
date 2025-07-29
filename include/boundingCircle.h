#pragma once
#include "boundingArea.h"

class BoundingCircle : public BoundingArea
{
private:
    int x = 0;
    int y = 0;
    float radius = 0.0f;

public:
// Constructors
    BoundingCircle() = default;
    BoundingCircle(int x, int y, float radius)
        : x(x), y(y), radius(radius) {}

// Getters
    int x() const { return x; }
    int y() const { return y; }
    float radius() const { return radius; }
    
// Setters
    void moveTo(int x, int y) { this->x = x; this->y = y; }     // Move to (x, y)
    void moveXTo(int x) { this->x = x; }
    void moveYTo(int y) { this->y = y; }
    void moveBy(int x, int y) { this->x += x; this->y += y; }   // Move by (x, y) pixels
    void moveXBy(int x) { this->x += x; }
    void moveYBy(int y) { this->y += y; }

    void setRadius(float radius) { this->radius = radius; }
    void growBy(float px) { radius += px; }

// Other functions    
    bool isInside(int x, int y) const override {
        return (x - this->x)*(x - this->x) + (y - this->y)*(y - this->y) < radius*radius;
    }
};