// 10001st prime

int prime_number(int serialNum = 10001)
{
	int count = 0;
	int num = 1;
	for ( ; count != serialNum; ++num)
	{
		int tmpCount = 0;
		for (int i = 1; i <=num; ++i)
		{
			if (num % i == 0)
			{
				++tmpCount;
			}
			
		}
		if (tmpCount == 2)
		{
			++count;
		}
	}

	return num - 1;
}
