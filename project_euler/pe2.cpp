// even fibonacci numbers

#include <vector>

long sum_of_even_fibnums(int maxVal = 4'000'000)
{
	long sum = 1;
	std::vector<int> fibNums {1, 2};

	for (int next = fibNums[0] + fibNums[1]; next <= maxVal; next = fibNums[fibNums.size()-1] + fibNums[fibNums.size()-2])
	{
		fibNums.push_back(next);
		
		if (next % 2 != 0)
		{
			sum += next;
		}
	}

	return sum;
}
