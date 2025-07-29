#pragma once
#include "element.h"
#include "boundingArea.h"
#include "buttonStyle.h"

class Button : public Element
{
private:


public:
    virtual void OnClick() = 0;
    virtual ~Button() = default;
};