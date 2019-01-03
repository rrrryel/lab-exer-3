#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char unangletra;
	char pangalawangletra;
	char pangatlongletra;
	
	int ekis, halaga;
	
	cout<< "Enter first character: ";
	cin>>unangletra;
	cout<< "Enter second character: ";
	cin>>pangalawangletra;
	
	ekis = int (pangalawangletra) - int (unangletra);
	halaga = int (unangletra) + 1;
	
	for(int mata = ekis ;mata != 1; mata--)
	{
		pangatlongletra = char(halaga);
		halaga = halaga + 1;
		cout<< pangatlongletra << " ";
	}
}
