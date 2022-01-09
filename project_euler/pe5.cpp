// Smallest multiple
// this is a bad solution because it just runs a for loop until can find the solution,
// we may find an algorithm to detect the solution easier, for example collecting the devisors of each number from 1-20 in vectors,
// then finding the smallest number that has all the devisors

bool is_evenly_devisible(int num, int range = 20)
{
	for (int i = 1; i <= range; ++i)
	{
		if (num % i) return false;
	}

	return true;
}

int smallest_evenly_devisible()
{
	// 2520 is the smallest number that can be devided by each of the numbers from 1-10 without remainder
	
	for (int i = 2520; ; ++i)
	{
		if (is_evenly_devisible(i)) return i;
	}

	return -1;
}
