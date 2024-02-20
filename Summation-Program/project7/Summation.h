#include <string>
#ifndef SUMMATION_H
#define SUMMATION_H


class Summation
{
private:
	int range;
	string magnitude;
	int resultant;

public:
	void calSum(int range, string , int );
	
	Summation(int , string mag, int );
	int operator++(int);
	int operator+(int );
	void display();
};



#endif