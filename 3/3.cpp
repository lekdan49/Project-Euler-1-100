#include <iostream>
#include <vector>

using std::cout;

void euler_3(const __int64 &num)
{
	std::vector<__int64> ivec;
	bool stop = false;

	// first we find the prime factors of the number
	for (__int64 i = 2; i < num; ++i)
	{
		if ((num % i) == 0)
		{
			std::cout << i << '\n';
			ivec.push_back(i);
			__int64 ires = 1;

			// we then check if all the prime nums multiplied are >= to the num
			for (const auto& val : ivec)
			{
				ires *= val;
				if (ires >= num)
				{
					stop = true;
					break;
				}
			}

			if (stop)
			{
				break;
			}
		}
	}

	// finally we print our results
	for (const auto& val : ivec)
	{
		std::cout << val << " ";
	}
}

int main()
{
	euler_3(600851475143);
	return 0;
}