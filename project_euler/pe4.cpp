// largest palindrome made from product of two 2-digit numbers

#include <iostream>

bool is_palindrome(int x)
{
	if (x < 0) return false;

	int tmp = x;
	unsigned int sol = 0;

	while (tmp)
	{
		sol = sol * 10 + tmp % 10;
		tmp /= 10;
	}

	return sol == x ? true : false;
}

int largest_palindrome()
{
	int sol = 0;
	
	for (int num1 = 999; num1 > 99; --num1)
	{
		for (int num2 = num1; num2 > 99; --num2)
		{
			sol = num1 * num2;

			if (is_palindrome(sol))
			{
				std::cout << "num1 is " << num1 << "\nnum2 is " << num2 << std::endl;
				return sol;
			}
		}
	}

	return 0;
}
