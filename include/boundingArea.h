#pragma once

class BoundingArea
{
public:
    virtual bool isInside(int x, int y) const = 0;
    virtual ~BoundingArea() = default;
};