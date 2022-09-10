#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

Individual *execute(Individual *indPtr, Mutator *mPtr, int k)
{
    Individual *ans = new Individual(1);
    *ans = mPtr->mutate(*indPtr, k);
    return ans;
}

int main()
{
    string binStr1, binStr2;
    BitFlip bitflip;
    Mutator *bfptr;
    Rearrange rearrange;
    Mutator *rptr;
    int k1, k2, temp;
    cin >> binStr1;
    cin >> k1;
    cin >> binStr2;
    cin >> k2;
    bfptr = &bitflip;
    rptr = &rearrange;
    Individual I1(binStr1);
    Individual *ptr1 = &I1;
    Individual I2(binStr2);
    Individual *ptr2 = &I2;
    Individual *answer1 = execute(ptr1, bfptr, k1);
    Individual *answer2 = execute(ptr2, rptr, k2);
    string ans1 = answer1->getString(), ans2 = answer2->getString();
    temp = answer2->getMaxOnes();
    cout << ans1 << " " << ans2 << " " << temp << endl;

    return 0;
}
