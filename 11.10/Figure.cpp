#include <iostream>
#include "Figure.h"
using namespace std;
using namespace FigureNamespace;

void Figure::SetDimension(const double value1)
{
    SetDimension(value1, value1);
}

void Figure::SetDimension(const double value1, const double value2)
{
    m_value1 = value1;
    m_value2 = value2;
}

void Figure::ShowArea() const
{
    cout << "Value is undefined" << endl;
}