#include <iostream>
#include <string>
#include "Summation.h"
using namespace std;


int main()
{
	int  startRange;
	cout << "Enter start range of summation  ";
	cin >> startRange;
	int range;
	cout << "Enter range of summation  ";
	cin >> range;
	string mag;
	cout << "Enter magnitude of summation  ";
	cin >> mag;

	Summation obj(range, mag, startRange);
	obj.display();
	cout << endl;
	cout << "After increasing ending range of the summation by 1\n ";
	obj++;
	obj.display();
	cout << endl << "Enter the number which you want to add in the summation of ending range ";
	int number;
	cin >> number;
	obj + number;
	obj.display();

	return 0;
}
