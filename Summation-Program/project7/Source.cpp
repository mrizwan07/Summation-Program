#include <iostream>
#include <string>
#include "Summation.h"
using namespace std;

void Summation::calSum(int range, string mag, int startRange)
{
	resultant = 0;
	if (mag == "i")
	{
		for (int i = startRange; i <= range; i++)
		{
			resultant = resultant + i;
		}
	}
	else if (mag == "2i")
	{
		for (int i = startRange; i <= range; i++)
		{
			resultant = resultant + 2 * i;
		}
	}
	else if (mag == "i^2")
	{
		for (int i = startRange; i <= range; i++)
		{
			resultant = resultant + i * i;
		}
	}
}
Summation::Summation(int ran, string mag, int startRange)
{
	range = ran;
	magnitude = mag;
	calSum(range, magnitude, startRange);
}
int Summation::operator++(int)
{
	int startRange = 0;
	range++;
	calSum(range, magnitude, startRange);
	return resultant;
}
int Summation::operator+(int val)
{
	resultant = resultant + val;
	return resultant;
}
void Summation::display()
{
	cout << "The answer is: " << resultant;
}