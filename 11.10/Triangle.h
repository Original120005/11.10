#pragma once
#include "Figure.h"
using namespace FigureNamespace;

namespace TriangleNamespace {
    class Triangle : public Figure {

    public:
        void ShowArea() const;
    };
}
