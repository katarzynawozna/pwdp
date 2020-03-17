#include <iostream>
#include <stdlib.h>
using namespace std;

int i = 10;
int x = 50;
int j;
int liczba_prob = 0;
int y;

void zgadywanie(){
    i = rand() % x;
        cout << "Zgadnij liczbę od 1 do " << x << endl;
    do{
        cin >> j;
        liczba_prob += 1;
    if ( j == i) { cout << "Gratuluję! Zgadłeś za " << liczba_prob << " razem!" << endl; }
    if ( j < i ) { cout << "Za mało! Próbuj dalej!" << endl ;}
    if ( j > i ) { cout << "Za dużo! Próbuj dalej!" << endl ;}
    } while ( j != i );
    
}

int main() {
    zgadywanie();
    
    do {cout << "Jeżeli chcesz kontynouwać wybierz 1;" << "\n" <<  "Zwiększ zakres i graj dalej - wybierz 2;" << "\n" << "Wyjście - wybierz 0;";
    cin >> y;

    if (y == 1){
        zgadywanie();
    }
    if (y == 2){
        x += 10;
        zgadywanie();
    }} while ( y != 0);
   
    if (y == 0){
        cout << "Do zobaczenia!" << endl;
    }

    return 0;
}