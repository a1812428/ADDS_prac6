#include "Mutator.h"
#ifndef BIT_FLIP_H
#define BIT_FLIP_H

class BitFlip : public Mutator
{
public:
    BitFlip();
    Individual mutate(Individual ind, int k);
};

#endif