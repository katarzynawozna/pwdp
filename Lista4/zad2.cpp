#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int x;
float i;
float liczby;
float srednia_arytmetyczna;

void srednia(){
    srand(time(NULL));
    cout << "Podaj liczbę wyrazów do obliczenia średniej arytmetycznej: ";
    cin >> x;
    liczby = 0;
    for(int j=0; j<x; j++){
        i = (double)rand() / RAND_MAX;
        liczby += i;
    }
    fstream plik;
    plik.open("wynik.dat", ios::out);
    float srednia_arytmetyczna = liczby/x;
    cout << "Średnia arytmetyczna " << x << " wylosowanych liczb z przedziału 0 do 1.0 to " << srednia_arytmetyczna << endl;
    plik << srednia_arytmetyczna << "\t" << x << endl;
    plik.close();
}

int main(){
    
    srednia();
    
    return 0;
}