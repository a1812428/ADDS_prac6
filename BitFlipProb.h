#include "Mutator.h"
#ifndef BIT_FLIP_PROB_H
#define BIT_FLIP_PROB_H

class BitFlipProb : public Mutator
{
private:
    double p;

public:
    BitFlipProb();
    BitFlipProb(double probability);
    Individual mutate(Individual ind, int k);
};

#endif