#pragma once
#include "element.h"
#include "boundingArea.h"
#include "buttonStyle.h"

class ButtonBase : public Element
{
private:
    BoundingArea area;
    ButtonStyle style;
    bool isEnabled;
    bool isHovered;
    bool isPressed;
    bool isReleased;

public:
    virtual void OnClick() = 0;
    virtual ~ButtonBase() = default;
};