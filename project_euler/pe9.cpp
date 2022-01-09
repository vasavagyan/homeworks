// special Pythagorean triplet
// there exists only 1 Pythegorean triplet for which a + b + c = 1000, find the a*b*c

#include <iostream>

int special_triplet_prod()
{
	for (int c = 997; c >= 1; --c)
	{
		for (int b = c - 1; b >= 1; --b)
		{
			for (int a = b - 1; a >= 1; --a)
			{
				if (a*a + b*b == c*c)
				{
					if (a + b + c == 1000)
					{
						std::cout << "a: " << a << "\nb: " << b << "\nc: " << c << std::endl;
						return a * b * c;
					}
				}
			}
		}
	}
	return -1;
}
