PROBLEM 2-----------------------------------------------
#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct RainCity 
{
	string city;
	int rainfall;
}stuff;
int type;
char cats(int type);
int main()
{
	cout << "What is your city name? ";
	cin >> stuff.city;
	cout << endl;
	cout << "What are the number of inches od rain? ";
	cin >> stuff.rainfall;
	cout << endl;
	cout << "Name of city" << setw(5)<< ' ' << "Rainfall (in)" << setw(5) << ' ' << "Water restrictions" << endl;
	cats(type);
	if (type == 1)
	{
		cout << setw(3) << ' ' << stuff.city << setw(15) << ' ' << stuff.rainfall << setw(17) << ' ' << "No" << endl;
	}
	else if (type == 0)
	{
		cout << setw(3) << ' ' << stuff.city << setw(15) << ' ' << stuff.rainfall << setw(17) << ' ' << "Yes" << endl;
	}


	return 0;

}
char cats(int type) 
{
	if (stuff.rainfall >= 4)
	{
		type = 1;
	}
	else
	{
		type = 0;
	}
	return type;
}