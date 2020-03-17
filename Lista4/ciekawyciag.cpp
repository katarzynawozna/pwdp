#include <iostream>
#include <fstream>
using namespace std;

int suma(int n){
    if (n<1)
        return 0;

    return n+ suma(n-1);
}

int main(){
    int n;
    cout << "Podaj liczbę cyfr do zsumowania: " ;
    cin >> n;

    cout << "Suma " << n << " kolejnych liczb całkowitych wynosi " << suma(n) << endl;
    fstream plik;
    plik.open("ciekawy.dat", ios::out);
    for (int i=0; i<=n; i++){
        plik << i << "\t" << suma(i) << endl; 
    }
    plik.close();
    return 0;
}