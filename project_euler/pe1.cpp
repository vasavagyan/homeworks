//Multiplies of num1 or num2

int sum_of_multiplies(int num1, int num2, int range = 1000)
{
	int sum = 0;

	for (int i = num1, j = num2; i < range; i += num1, j += num2)
	{
		sum += i;
		if (j < range)
		{
			sum += j;
		}
	}

	return sum;
}
