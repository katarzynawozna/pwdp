#include <iostream>
#include <ctime>
#include <string.h>
#include <unistd.h>
#include <cstdio>
#include <cctype>
using namespace std;

char plansza[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char gracz;
char komputer;
int a;
char wybor;
string imie_gracza;
int punkty_gracza = 0;
int punkty_komputera = 0;



void Ekran_powitalny(){
cout<<"\x1b[5;30;46m  _     _  _______  ___      _______  _______  __   __  _______    _______  _______ \x1b[0m"<<endl; usleep(100000);
cout<<"\x1b[5;30;46m | | _ | ||       ||   |    |       ||       ||  |_|  ||       |  |       ||       |\x1b[0m"<<endl; usleep(100000);
cout<<"\x1b[5;30;46m | || || ||    ___||   |    |       ||   _   ||       ||    ___|  |_     _||   _   |\x1b[0m"<<endl; usleep(100000);
cout<<"\x1b[5;30;46m |       ||   |___ |   |    |       ||  | |  ||       ||   |___     |   |  |  | |  |\x1b[0m"<<endl; usleep(100000);
cout<<"\x1b[5;30;46m |       ||    ___||   |___ |      _||  |_|  ||       ||    ___|    |   |  |  |_|  |\x1b[0m"<<endl; usleep(100000);
cout<<"\x1b[5;30;46m |   _   ||   |___ |       ||     |_ |       || ||_|| ||   |___     |   |  |       |\x1b[0m"<<endl; usleep(100000);
cout<<"\x1b[5;30;46m |__| |__||_______||_______||_______||_______||_|   |_||_______|    |___|  |_______|\x1b[0m"<<endl; usleep(100000);
cout<<"\x1b[5;30;46m _______  ___   _______    _______  _______  _______    _______  _______  _______   \x1b[0m"<<endl; usleep(100000);
cout<<"\x1b[5;30;46m |       ||   | |       |  |       ||   _   ||       |  |       ||       ||       | \x1b[0m"<<endl; usleep(100000);
cout<<"\x1b[5;30;46m |_     _||   | |       |  |_     _||  |_|  ||       |  |_     _||   _   ||    ___| \x1b[0m"<<endl; usleep(100000);
cout<<"\x1b[5;30;46m   |   |  |   | |       |    |   |  |       ||       |    |   |  |  | |  ||   |___  \x1b[0m"<<endl; usleep(100000);
cout<<"\x1b[5;30;46m   |   |  |   | |      _|    |   |  |       ||      _|    |   |  |  |_|  ||    ___| \x1b[0m"<<endl; usleep(100000);
cout<<"\x1b[5;30;46m   |   |  |   | |     |_     |   |  |   _   ||     |_     |   |  |       ||   |___  \x1b[0m"<<endl; usleep(100000);
cout<<"\x1b[5;30;46m   |___|  |___| |_______|    |___|  |__| |__||_______|    |___|  |_______||_______| \x1b[0m"<<endl; usleep(100000);
cout<<"\x1b[5;30;46m                        _______  _______  __   __  _______                          \x1b[0m"<<endl; usleep(100000);
cout<<"\x1b[5;30;46m                       |       ||   _   ||  |_|  ||       |                         \x1b[0m"<<endl; usleep(100000);
cout<<"\x1b[5;30;46m                       |    ___||  |_|  ||       ||    ___|                         \x1b[0m"<<endl; usleep(100000);
cout<<"\x1b[5;30;46m                       |   | __ |       ||       ||   |___                          \x1b[0m"<<endl; usleep(100000);
cout<<"\x1b[5;30;46m                       |   ||  ||       ||       ||    ___|                         \x1b[0m"<<endl; usleep(100000);
cout<<"\x1b[5;30;46m                       |   |_| ||   _   || ||_|| ||   |___                          \x1b[0m"<<endl; usleep(100000);
cout<<"\x1b[5;30;46m                       |_______||__| |__||_|   |_||_______|                         \x1b[0m"<<endl; usleep(100000);
}


void Rysujplansze()
{
	cout <<"\x1b[30;42m ------------- \x1b[0m" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "\x1b[30;42m | \x1b[0m" << "\x1b[30;42m" << plansza[i][j] << "\x1b[0m" ;
		}
		cout << "\x1b[30;42m | \x1b[0m"  << endl << "\x1b[30;42m ------------- \x1b[0m" << endl;
	}
    cout << endl;
    cout << "                 " << endl;
    
}

void Ruch_gracza()
{
	cout << "Wybierz pole (nie możesz nadpisywać pola komputera!): ";
	char pozycja;

	do {
	cin >> a; 
    if (a == 1)
		pozycja = plansza[0][0];
	else if (a == 2)
		pozycja = plansza[0][1];
	else if (a == 3)
		pozycja = plansza[0][2];
	else if (a == 4)
		pozycja = plansza[1][0];
	else if (a == 5)
		pozycja = plansza[1][1];
	else if (a == 6)
		pozycja = plansza[1][2];
	else if (a == 7)
		pozycja = plansza[2][0];
	else if (a == 8)
		pozycja = plansza[2][1];
	else if (a == 9)
		pozycja = plansza[2][2];

	} while (pozycja == komputer);

	if (a == 1)
		plansza[0][0] = gracz;
	else if (a == 2)
		plansza[0][1] = gracz;
	else if (a == 3)
		plansza[0][2] = gracz;
	else if (a == 4)
		plansza[1][0] = gracz;
	else if (a == 5)
		plansza[1][1] = gracz;
	else if (a == 6)
		plansza[1][2] = gracz;
	else if (a == 7)
		plansza[2][0] = gracz;
	else if (a == 8)
		plansza[2][1] = gracz;
	else if (a == 9)
		plansza[2][2] = gracz;
}

void Ruch_komputera(){
    int ruch_komputera;
    char pozycja;
    do { 
    ruch_komputera = ( rand() % 9 ) + 1; 

    if (ruch_komputera == 1)
		pozycja = plansza[0][0];
	else if (ruch_komputera == 2)
		pozycja = plansza[0][1];
	else if (ruch_komputera == 3)
		pozycja = plansza[0][2];
	else if (ruch_komputera == 4)
		pozycja = plansza[1][0];
	else if (ruch_komputera == 5)
		pozycja = plansza[1][1];
	else if (ruch_komputera == 6)
		pozycja = plansza[1][2];
	else if (ruch_komputera == 7)
		pozycja = plansza[2][0];
	else if (ruch_komputera == 8)
		pozycja = plansza[2][1];
	else if (ruch_komputera == 9)
		pozycja = plansza[2][2];

	} while (pozycja == gracz);
    

    if (ruch_komputera == 1)
		plansza[0][0] = komputer;
	else if (ruch_komputera == 2)
		plansza[0][1] = komputer;
	else if (ruch_komputera == 3)
		plansza[0][2] = komputer;
	else if (ruch_komputera == 4)
		plansza[1][0] = komputer;
	else if (ruch_komputera == 5)
		plansza[1][1] = komputer;
	else if (ruch_komputera == 6)
		plansza[1][2] = komputer;
	else if (ruch_komputera == 7)
		plansza[2][0] = komputer;
	else if (ruch_komputera == 8)
		plansza[2][1] = komputer;
	else if (ruch_komputera == 9)
		plansza[2][2] = komputer;
}

char Wygrana( char y )
{
	if (plansza[0][0] == y && plansza[0][1] == y && plansza[0][2] == y)
		return y;
	if (plansza[1][0] == y && plansza[1][1] == y && plansza[1][2] == y)
		return y;
	if (plansza[2][0] == y && plansza[2][1] == y && plansza[2][2] == y)
		return y;

	if (plansza[0][0] == y && plansza[1][0] == y && plansza[2][0] == y)
		return y;
	if (plansza[0][1] == y && plansza[1][1] == y && plansza[2][1] == y)
		return y;
	if (plansza[0][2] == y && plansza[1][2] == y && plansza[2][2] == y)
		return y;

	if (plansza[0][0] == y && plansza[1][1] == y && plansza[2][2] == y)
		return y;
	if (plansza[2][0] == y && plansza[1][1] == y && plansza[0][2] == y)
		return y;

//	if (plansza[0][0] == 'O' && plansza[0][1] == 'O' && plansza[0][2] == 'O')
//		return 'O';
//	if (plansza[1][0] == 'O' && plansza[1][1] == 'O' && plansza[1][2] == 'O')
//		return 'O';
//	if (plansza[2][0] == 'O' && plansza[2][1] == 'O' && plansza[2][2] == 'O')
//		return 'O';
//
//	if (plansza[0][0] == 'O' && plansza[1][0] == 'O' && plansza[2][0] == 'O')
//		return 'O';
//	if (plansza[0][1] == 'O' && plansza[1][1] == 'O' && plansza[2][1] == 'O')
//		return 'O';
//	if (plansza[0][2] == 'O' && plansza[1][2] == 'O' && plansza[2][2] == 'O')
//		return 'O';
//
//	if (plansza[0][0] == 'O' && plansza[1][1] == 'O' && plansza[2][2] == 'O')
//		return 'O';
//	if (plansza[2][0] == 'O' && plansza[1][1] == 'O' && plansza[0][2] == 'O')
//		return 'O';
//
//	return '/';
}

void Czyszczenie_planszy(){ 

		plansza[0][0] = '1';
		plansza[0][1] = '2';
		plansza[0][2] = '3';
		plansza[1][0] = '4';
		plansza[1][1] = '5';
		plansza[1][2] = '6';
		plansza[2][0] = '7';
		plansza[2][1] = '8';
		plansza[2][2] = '9';
}

void Menu(){
    cout << "Wybierz figurę do gry: X lub O " ;
    cin >> gracz;
    gracz = toupper(gracz);
    if (gracz == 'X') { komputer = 'O' ; }
    else if (gracz != 'X' && gracz != 'O' || gracz == 'O') { komputer = 'X'; } ;
    cout << "Grasz jako " << gracz << ". POWODZENIA!" << endl;
}

void Gra(){
	int k;
    do {
        Rysujplansze();
        Ruch_komputera();
        Ruch_gracza();
	    system("clear");
        if (Wygrana(gracz) == gracz){
            cout << "Wygrałeś/aś "<< imie_gracza << "! GRATULACJĘ!" << endl;
            cout << "Dzięki za grę!" << endl;
            punkty_gracza += 1;
            k = 0; }
        else if ( Wygrana(komputer) == komputer) {
                cout << "Niestety, przegrałaś/eś! :(" << endl;
                punkty_komputera += 1;
                k = 0;
            }
		else { k; }
        } while (k != 0 );
    }

void Nowa_gra(){
    do {
        cout << "Chcesz kontynuować grę? T/N " ;
        cin >> wybor;
        wybor = toupper(wybor);
        if (wybor == 'T') {
        Czyszczenie_planszy();
        Rysujplansze();
        Menu();
        Gra();
        cout << "PUNKTACJA:   " << imie_gracza << " : " << punkty_gracza << "\t" << "KOPMUTER : " << punkty_komputera << endl;
        }
		else { wybor = 'N'; }
    } while ( wybor != 'N');
	cout << "Do zobaczenia!" << endl;
}

int main(){

    srand(time(NULL));

    Ekran_powitalny();
    cout << "Cześć! Witam w grze w Kółko i Krzyżyk! Jak masz na imię? ";
    cin >> imie_gracza;
    cout << "Baw się dobrze," << imie_gracza << "!" << endl;
        Rysujplansze();
        Menu();
        Gra();
        cout << "PUNKTACJA:   " << imie_gracza << " : " << punkty_gracza << "   KOPMUTER : " << punkty_komputera << endl;
        Nowa_gra();
    return 0;
}