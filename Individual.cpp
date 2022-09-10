#include "Individual.h"

string Individual::getString()
{
    return binaryString;
}

int Individual::getBit(int pos)
{
    if (pos > binaryString.length())
        return -1;
    return binaryString[pos] - '0';
}

void Individual::flipBit(int pos)
{
    if (pos <= binaryString.size())
    {
        if (binaryString[pos - 1] == '0')
            binaryString[pos - 1] = '1';
        else if (binaryString[pos - 1] == '1')
            binaryString[pos - 1] = '0';
    }
}

int Individual::getMaxOnes()
{
    int ans = 0;
    for (int i = 0; i < binaryString.size(); i++)
    {
        int bit = binaryString[i] - '0';
        if (bit == 1)
        {
            int cnt = 1;
            int condition = i < binaryString.size() - 1;
            if (condition)
            {
                int j = i + 1;
                while (j < binaryString.size() && (binaryString[j] - '0' == 1))
                {
                    cnt++;
                    j++;
                    i++;
                }
            }
            if (cnt > ans)
                ans = cnt;
        }
        if (binaryString[i] == '1')
            int temp = 1;
    }
    return ans;
}

int Individual::getLength()
{
    return binaryString.size();
}

Individual::Individual(int length)
{
    for (int i = 0; i < length; i++)
        this->binaryString.push_back('0');
}

Individual::Individual(string binString)
{
    this->binaryString = binString;
}
