#include <bits/stdc++.h>
using namespace std;
#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

class Individual
{
private:
    string binaryString;

public:
    string getString();
    int getBit(int pos);
    void flipBit(int pos);
    int getMaxOnes();
    int getLength();
    Individual(string binString);
    Individual(int length);
};

#endif