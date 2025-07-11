#pragma once

class BoundingBox
{
private:
    int x = 0;
    int y = 0;
    int width = 0;
    int height = 0;
    
public:
    BoundingBox() = default;
    BoundingBox(int x, int y, int width, int height)
        : x(x), y(y), width(width), height(height) {}
// Getters
    int x() { return x; }
    int y() { return y; }
    int width() { return width; }
    int height() { return height; }
    
// Setters
    void moveTo(int x, int y) { this->x = x; this->y = y; }     // Move box to (x, y)
    void moveBy(int x, int y) { this->x += x; this->y += y; }   // Move box by (x, y) pixels

    void expandUp(int px) { y -= px; height += px; }
    void expandRight(int px) { width += px; }
    void expandDown(int px) { height += px; }
    void expandLeft(int px) { x -= px; width += px; }
    void expandFromCenter(int x, int y) { this->x -= x/2; this->width += x; this->y -= y/2; this->height += y; }
};