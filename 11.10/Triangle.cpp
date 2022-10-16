#include <iostream>
#include "Triangle.h"
using namespace std;
using namespace TriangleNamespace;

void Triangle::ShowArea() const {
    cout << "Area of triangle: " << 0.5 * m_value1 * m_value2 << endl;
}