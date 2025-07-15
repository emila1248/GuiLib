#pragma once
#include "element.h"
#include "boundingBox.h"
#include "buttonStyle.h"

class Button : public Element
{
private:
    BoundingBox area;
    ButtonStyle style;
    bool isEnabled;
    bool isHovered;
    bool isPressed;
    bool isReleased;

public:
    virtual void OnClick() {};
    virtual ~Button() = default;
};