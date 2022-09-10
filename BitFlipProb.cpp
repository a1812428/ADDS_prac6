#include "BitFlipProb.h"

BitFlipProb::BitFlipProb()
{
	srand(time(NULL));
	p = ((double)rand() / (RAND_MAX));
}

BitFlipProb::BitFlipProb(double probability)
{
	p = probability;
}

Individual BitFlipProb::mutate(Individual ind, int k)
{
	string x = ind.getString();
	Individual y(x);
	for (int j = 1; j < y.getLength() + 1; j++)
	{
		double temp = ((double)rand() / (RAND_MAX));
		if (temp >= p)
			y.flipBit(j);
	}
	return y;
}
