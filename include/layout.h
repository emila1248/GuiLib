#pragma once
#include "raylib.h"
#include "element.h"

#include <vector>
#include <memory>

//===== Base class that all "Layout" elements inherit from =====//

class Layout : public Element
{
private:
    std::vector<std::shared_ptr<Element>> elements;

public:
    void AddElement(std::shared_ptr<Element> element) {
        elements.push_back(element);
    }

    void Draw() override {
        for (auto& element : elements)
            element->Draw();
    }

    void Update() override {
        for (auto& element : elements)
            element->Update();
    }
};