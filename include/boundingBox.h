#pragma once
#include "boundingArea.h"
#include "raylib.h"

class BoundingBox : public BoundingArea
{
private:
    int x = 0;
    int y = 0;
    int width = 0;
    int height = 0;
    
public:
// Constructors
    BoundingBox() = default;
    BoundingBox(int x, int y, int width, int height)
        : x(x), y(y), width(width), height(height) {}

// Getters
    int x() const { return x; }
    int y() const { return y; }
    int width() const { return width; }
    int height() const { return height; }
    
// Setters
    void moveTo(int x, int y) { this->x = x; this->y = y; }     // Move to (x, y)
    void moveXTo(int x) { this->x = x; }
    void moveYTo(int y) { this->y = y; }
    void moveBy(int x, int y) { this->x += x; this->y += y; }   // Move by (x, y) pixels
    void moveXBy(int x) { this->x += x; }
    void moveYBy(int y) { this->y += y; }

    void expandUp(int px) { y -= px; height += px; }
    void expandRight(int px) { width += px; }
    void expandDown(int px) { height += px; }
    void expandLeft(int px) { x -= px; width += px; }
    void expandFromCenter(int x, int y) { this->x -= x/2; this->width += x; this->y -= y/2; this->height += y; }

// Other functions
    bool isInside(int x, int y) const override {
        return x >= this->x && x <= this->x + width && y >= this->y && y <= this->y + height;
    }
    Rectangle toRect() const { return { (float)x, (float)y, (float)width, (float)height }; }
};