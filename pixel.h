#pragma once
#include <Imagine/Images.h>
#include <Imagine/Graphics.h>
#include <iostream>

using namespace Imagine;
using namespace std;

class pixel{
    int x,y;
public:
    int getx();
    int gety();
    void setx(int x0);
    void sety(int y0);
};
