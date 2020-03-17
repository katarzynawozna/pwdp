#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

float x;
int y;
int main()
{
	for(x=1; x<=5; x++)
	{
		y = pow(x,2);
		cout<<x<<"\t"<<cosf(x)<<"\t"<<y<< endl;
	}
	ofstream fout("wynik.dat");
	{
	fout<<x<<cosf(x)<<y<< endl;
	}
	
	return 0;
}
