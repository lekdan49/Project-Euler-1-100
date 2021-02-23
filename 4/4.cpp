#include <iostream>
#include <vector>
#include <string>

int check_palindrome(const std::string& s)
{
	std::string orig = s;

	std::string reversed;

	for (auto i = s.end() - 1;; --i)
	{
		if (i != s.begin())
			reversed.push_back(*i);
		else
		{
			reversed.push_back(*i);
			break;
		}
	}

	if (std::stoi(orig) == std::stoi(reversed))
	{
		return std::stoi(orig);
	}
	else
	{
		return 0;
	}

}


void euler_4()
{
	__int64 x = 0;

	__int64 largest = 0;

	for (__int64 i = 999; i >= 100; --i)
	{
		for (__int64 y = 999 ; y >= 100; --y)	// this is not good code!
		{
			x = i * y;

			if (x < largest)
				continue;

			std::string s = std::to_string(x);
			if ((s.length() % 2) == 0)
			{
				if (check_palindrome(s) > largest)
					largest = x;
			}
		}
	}
	std::cout << largest << '\n';
}

int main()
{
	euler_4();
	return 0;
}