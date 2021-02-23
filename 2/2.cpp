#include <iostream>

using std::cout;

void euler_2(const int &lim)
{
	int x = 1;
	int y = 1;

	int sum = 0;

	while (x < lim)
	{
		x += y;
		y = x - y;

		if ((x % 2) == 0) // if even
		{
			sum += x;
		}
	}

	std::cout << sum << '\n';
}

int main()
{
	euler_2(4000000);
	return 0;
}