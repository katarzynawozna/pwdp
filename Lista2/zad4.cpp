#include <iostream>
 
using namespace std;
 
int main()
{
 
    for (int i=1; i<=5; i++)
    {
        for (int j=-5; j<=0; j++)
        {
            cout<<i<<" * "<<j<<" = ";
            cout<<"|"<<"\x1b[46m"<<i*j<<"\x1b[0m"<<"|"<<"\t";
        }
        cout<<endl;
 
    }
 
    return 0;
}
