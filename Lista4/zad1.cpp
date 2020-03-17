#include <iostream>
using namespace std;



void hello(){
    cout << "Hello!"<< endl;
}

void show_f(float x){
    cout << x << endl;
}

int suma(int i, int j){
    int sum = i + j;
    cout << sum << endl;
    return sum;
}

void iloczyn(int i, float j, float k){
    int x = static_cast<int>(j);
    int y = static_cast<int>(k);
    int ilo = (x*y)*i;
    cout << ilo << endl;
}

void iloczyn_tab(int t[]){
    int wynik = 1;
    for (int a=0; a < 9; a++){
        wynik += wynik * t[a];
    }
    cout << wynik << endl;
}

int main() {
    const int stala = 10;
    int Tablica[ stala ] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    hello();
    show_f(1.2);
    suma(2,2);
    iloczyn(2, 1.5, 5.2);
    iloczyn_tab(Tablica);
}