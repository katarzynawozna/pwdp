#include <iostream>
#include <ctime>
using namespace std;

int i = 10;
int x = 50;
int j;
int liczba_prob = 0;
int y;

void zgadywanie(){
    srand(time(NULL));
    i = rand() % x;
        cout << "Zgadnij liczbę od 1 do " << x << endl;
    do{
        cin >> j;
        liczba_prob += 1;
    if ( j == i) { cout << "\033[1;35mGratuluję! Zgadłeś za " << liczba_prob << " razem!\033[0m" << endl; }
    if ( j < i ) { cout << "\033[1;31mZa mało! Próbuj dalej!\033[0m" << endl ;}
    if ( j > i ) { cout << "\033[1;31mZa dużo! Próbuj dalej!\033[0m" << endl ;}
    } while ( j != i );
    
}

void ekran_powitania(){
cout<<"\x1b[5;30;46m  _   _   U _____ u    _         _         U  ___ u   _    \x1b[0m"<<endl;
cout<<"\x1b[5;30;46m | | | |  \\| ___*|/   |*|       |*|         \\/*_ \\/ U|*|u  \x1b[0m"<<endl;
cout<<"\x1b[5;30;46m/| |_| |\\  |  _|*   U | | u   U | | u       | | | | \\| |/  \x1b[0m"<<endl;
cout<<"\x1b[5;30;46mU|  _  |u  | |___    \\| |/__   \\| |/__  .-,_| |_| |  |_|   \x1b[0m"<<endl;
cout<<"\x1b[5;30;46m |_| |_|   |_____|    |_____|   |_____|  \\_)-\\___/   (_)   \x1b[0m"<<endl;
cout<<"\x1b[5;30;46m //    ||   <<   >>   //  ||    //  ||        ||     |||_  \x1b[0m"<<endl;
cout<<"\x1b[5;30;46m(_*) (*_) (__) (__)  (_*)(*_)  (_*)(*_)      (__)    (__)_)\x1b[0m"<<endl;
}

void ekran_pozegnalny(){
cout<<"\x1b[30;42m.----------------.  .----------------.  .----------------.  .----------------. \x1b[0m"<<endl;
cout<<"\x1b[30;42m| .--------------. || .--------------. || .--------------. || .--------------. |\x1b[0m"<<endl;
cout<<"\x1b[30;42m| |   ______     | || |  ____  ____  | || |  _________   | || |              | |\x1b[0m"<<endl;
cout<<"\x1b[30;42m| |  |_   _ \\    | || | |_  _||_  _| | || | |_   ___  |  | || |      _       | |\x1b[0m"<<endl;
cout<<"\x1b[30;42m| |    | |_) |   | || |   \\ \\  / /   | || |   | |_  \\_|  | || |     | |      | |\x1b[0m"<<endl;
cout<<"\x1b[30;42m| |    |  __'.   | || |    \\ \\/ /    | || |   |  _|  _   | || |     | |      | |\x1b[0m"<<endl;
cout<<"\x1b[30;42m| |   _| |__) |  | || |    _|  |_    | || |  _| |___/ |  | || |     | |      | |\x1b[0m"<<endl;
cout<<"\x1b[30;42m| |  |_______/   | || |   |______|   | || | |_________|  | || |     |_|      | |\x1b[0m"<<endl;
cout<<"\x1b[30;42m| |              | || |              | || |              | || |     (_)      | |\x1b[0m"<<endl;
cout<<"\x1b[30;42m| '--------------' || '--------------' || '--------------' || '--------------' |\x1b[0m"<<endl;
 cout<<"\x1b[30;42m'----------------'  '----------------'  '----------------'  '----------------' \x1b[0m"<<endl;
}
int main() {
    ekran_powitania();
    zgadywanie();
    
    do {cout << "Jeżeli chcesz \033[4mkontynouwać\033[0m wybierz \033[1;31m1\033[0m;" << "\n" <<  "Zwiększ zakres i \033[4mgraj dalej\033[0m - wybierz \033[1;31m2\033[0m;" << "\n" << "\033[4mWyjście\033[0m - wybierz \033[1;31m0\033[0m;";
    while(! (cin>> y) )
    {
    cout << "Podaj liczbe!" << endl;
    cin.clear();
    cin.ignore(INT8_MAX,'\n');
    };

    if (y == 1){
        zgadywanie();
    }
    if (y == 2){
        x += 10;
        zgadywanie();
    }} while ( y != 0);
   
    if (y == 0){
        ekran_pozegnalny();
    }

    return 0;
}