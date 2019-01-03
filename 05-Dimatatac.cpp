#include <iostream>
using namespace std;

void linechar(int ekis);
int linechar(int huway, int zey)
{
	for (int mata = 0 ;mata < 10; mata++)
	{
		cout << "*";
	}
	cout << endl;
	for (int mata = 0 ;mata < 15; mata++)
	{
		cout << "#";
	}
	cout << endl;
}
int main()
{
	int ekis, huway, zey;
	linechar(ekis);
	linechar(huway, zey);
	return 0;
}

void linechar(int ekis)
{
	for (int mata = 0 ;mata < 10; mata++)
	{
		cout << "*";
	}
	cout << endl;
	for (int mata = 0 ;mata < 15; mata++)
	{
		cout << "@";
	}
	cout << endl;
}
