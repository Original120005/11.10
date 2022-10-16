#include <iostream>
#include "Rectangle.h"
using namespace std;
using namespace RectangleNamespace;

void Rectangle::ShowArea() const {
    cout << "Area of rectangle: " << m_value1 * m_value2 << endl;
}