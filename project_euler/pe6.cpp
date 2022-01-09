// sum square difference
// find the difference between the sum of squares of the first 100 natural numbers and the square of the sum

int do_some_magic(int range = 100)
{
	int dif = 0;
	int numSquare = 0;
	int numSum = 0;
	
	for (int i = 1; i <= range; ++i)
	{
		numSquare += i*i;
		numSum += i;
	}
	numSum *= numSum;
	dif = numSum - numSquare;

	return dif;
}
