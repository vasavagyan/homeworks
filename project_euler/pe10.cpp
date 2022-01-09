// sum of primes
// find the sum of all the primes below 2 mln
// bad solution, please go make coffee and enjoy it while this code is running

long sum_of_primes_below(int below = 2'000'000)
{
	long sum = 0;

	for (int val = 1; val < below; ++val)
	{
		int tmpCount = 0;
		for (int i = 1; i <= val; ++i)
		{
			if (val % i == 0)
			{
				++tmpCount;
			}
		}
		if (tmpCount == 2)
		{
			sum += val;
		}
	}

	return sum;
}
