#include <iostream>
#include <fstream>
using namespace std;

int fibonacci(int n)
{
    if(n == 0) {
        return 0;
    }
    if(n == 1){
     return 1;
    }

    return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    int n;

    cout << "Podaj numer wyrazu ciagu fibonacciego do obliczenia:";
    cin >> n;

    cout << fibonacci(n) << endl;

    fstream plik;
    plik.open("fibonacci.dat", ios::out);
    for (int i = 0; i <= n; i++){
    plik << i << "\t" << fibonacci(i) << endl;
    }
    plik.close();

    return 0;
}