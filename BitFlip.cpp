#include "BitFlip.h"

BitFlip::BitFlip()
{
}

Individual BitFlip::mutate(Individual ind, int k)
{
    string x = ind.getString();
    Individual y(x);
    k = k - 1;
    k = k % y.getLength();
    k = k + 1;
    y.flipBit(k);
    return y;
}
