#pragma once

class Element
{
public:
    virtual void Draw() = 0;
    virtual void Update() = 0;
    virtual ~Element() = default;
};