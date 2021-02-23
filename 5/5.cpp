#include <iostream>


__int64 euler_5(const __int64& prev, const __int64& val)
{

	for (__int64 x = prev; x <= val; ++x)
	{
		for (__int64 i = 1; i <= 20; )
		{
			if ((x % i) == 0)
			{
				if (i == 20)
				{
					return x;
				}
				++i;
			}
			else
			{
				break;
			}
		}
	}

	euler_5(val, val + val);
}

int main()
{
	std::cout << euler_5(1, 1) << '\n';
	return 0;
}