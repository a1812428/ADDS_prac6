#include "Rearrange.h"

Rearrange::Rearrange()
{
}

Individual Rearrange::mutate(Individual ind, int k)
{
	string y = ind.getString(), start, back, x;
	if (k > y.size())
		k = k - y.size();
	if (k == y.size())
	{
		char t = y.back();
		y.pop_back();
		x = t + y;
	}
	if (k == 0)
		x = y;
	if (k > 0 && k < y.size())
	{
		for (int i = 0; i < k - 1; i++)
		{
			char a = y[i];
			start.push_back(a);
		}
		for (int i = k - 1; i < y.size(); i++)
		{
			char a = y[i];
			back.push_back(a);
		}
		x = back + start;
	}
	Individual ans(x);
	return ans;
}
