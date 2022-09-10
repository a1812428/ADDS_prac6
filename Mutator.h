#include "Individual.h"
#ifndef MUTATOR_H
#define MUTATOR_H

class Mutator
{
public:
    virtual Individual mutate(Individual ind, int k) = 0;
};

#endif