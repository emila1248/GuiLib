#pragma once
#include <string>
#include "element.h"

class Button : public Element
{
private:
    int x;
    int y;
    int width;
    int height;
public:
    Button(int x, int y, int width, int height)
        : x(x), y(y), width(width), height(height) {}
    virtual void OnClick() = 0;
    virtual ~Button() = default;
};