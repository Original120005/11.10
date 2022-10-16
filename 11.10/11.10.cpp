#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <iostream>

using namespace std;
using namespace FigureNamespace;
using namespace CircleNamespace;
using namespace RectangleNamespace;
using namespace TriangleNamespace;

int main() {
    Figure* ptr = nullptr;

    int choose;
    cout << "1. Circle\n2. Rectangle\n3.Triangle\n->";
    cin >> choose;

    switch (choose) {
    case 1:
        ptr = new Circle();
        break;

    case 2:
        ptr = new Rectangle();
        break;

    case 3:
        ptr = new Triangle();
        break;
    }
    ptr->SetDimension(5, 13);
    ptr->ShowArea();

    delete ptr;

}