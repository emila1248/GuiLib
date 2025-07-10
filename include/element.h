#pragma once
#include "boundingBox.h"

class Element
{
public:
    BoundingBox boundingBox;
    virtual void Draw() = 0;
    virtual void Update() = 0;
    virtual ~Element() = default;
};