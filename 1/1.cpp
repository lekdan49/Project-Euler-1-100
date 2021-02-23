#include <iostream>

using std::cout;

void euler_1()
{
	int x = 1;
	int y = 0;

	do
	{
		if ((x % 3) == 0 || (x % 5) == 0)
		{
			y += x;
		}
		x++;

	} while (x < 1000);

	std::cout << y << '\n';

}

int main()
{
	euler_1();
	return 0;
}