#include <iostream>
#include <string>
using namespace std;

int i;
int main()
{
	for(i=31; i<=37; i++)
		{

		to_string( i );
		cout<<"\x1b["<<i<<"mHello\x1b[0m"<< endl;

		}
	return 0;
}
