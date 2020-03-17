#include <iostream>
using namespace std;

int iloczyn(int i, int j){
    return i*j;
}

int main(){
    int suma =0;
    for (int i=1; i <= 10; i++){
        suma += iloczyn(i, i);
    }

    cout << suma << endl;
    return 0;
}