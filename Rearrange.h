#include "Mutator.h"
#ifndef REARRANGE_H
#define REARRANGE_H

class Rearrange : public Mutator
{
public:
    Rearrange();
    Individual mutate(Individual ind, int k);
};

#endif