#pragma once
#include "pixel.h"

class frontiere{
    pixel* front;
    int taille;
public:
    bool empty();
    void add(pixel p);
    void del(int k);
    void voisins(pixel p, pixel voisin[]);
    void del_patch(pixel p);
};
