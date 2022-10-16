#pragma once
#include "Figure.h"
using namespace FigureNamespace;

namespace RectangleNamespace {
    class Rectangle : public Figure {

    public:
        void ShowArea() const;
    };
}