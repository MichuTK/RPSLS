#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int wb, wynik_gracz, wynik_bot;
char choose;
string name;

void Easybot()
{
    srand(time(NULL));
    wb = rand()%5+1;
    switch (wb)
    {
        case 1:
            cout << "Komputer: ROCK" <<endl;
            break;
        case 2:
            cout << "Komputer: PAPER" <<endl;
            break;
        case 3:
            cout << "Komputer: SCISSORS" <<endl;
            break;
        case 4:
            cout << "Komputer: LIZARD" <<endl;
            break;
        case 5:
            cout << "Komputer: SPOCK" <<endl;
            break;
    }
}

void settings()
{
        system("cls");
        cout << "================================" << endl;
        cout << "           USTAWIENIA           " << endl;
        cout << "================================" << endl;
        cout << "[1]Zmien nick" <<endl;
        cout << "[2]Poziom trudnosci (wkrótce)" <<endl;
        cout << "[3]Zresetuj wynik" <<endl;
        cout << "================================" << endl;

        choose=getch();

        switch(choose)
        {
            case '1': cout << "Opcja jeszcze nie jest dostêpna" << endl; break;
            case '2': cout << "Opcja jeszcze nie jest dostêpna" << endl; break;
            case '3': cout << "Opcja jeszcze nie jest dostêpna" << endl; break;
        }
}

void sprawdzanie()
{
    switch(choose)
        {
            default:
                cout << "Nie ma takiej opcji. Sprobuj ponownie!" << endl;
                break;

            case '1':
                Easybot();
                cout << name << ": " << "ROCK" << endl;
                if (wb == 1)cout << "Remis" << endl;
                else if(wb == 2 || wb == 5)
                    {
                        cout << "Wygral komputer" << endl;
                        wynik_bot++;
                    }
                else if(wb == 3 || wb == 4)
                    {
                        cout << "Wygral/a " << name << endl;
                        wynik_gracz++;
                    }
                break;

            case '2':
                Easybot();
                cout << name << ": " << "PAPER" << endl;
                if (wb == 2)cout << "Remis" << endl;
                else if(wb == 3 || wb == 4)
                    {
                        cout << "Wygral komputer" << endl;
                        wynik_bot++;
                    }
                else if(wb == 1 || wb == 5)
                    {
                        cout << "Wygral/a " << name << endl;
                        wynik_gracz++;
                    }
                break;

            case '3':
                Easybot();
                cout << name << ": " << "SCISSORS" << endl;
                if (wb == 3)cout << "Remis" << endl;
                else if(wb == 1 || wb == 5)
                    {
                        cout << "Wygral komputer" << endl;
                        wynik_bot++;
                    }
                else if(wb == 2 || wb == 4)
                    {
                        cout << "Wygral/a " << name << endl;
                        wynik_gracz++;
                    }
                break;
            case '4':
                Easybot();
                cout << name << ": " << "LIZARD" << endl;
                if (wb == 4)cout << "Remis" << endl;
                else if(wb == 1 || wb == 3)
                    {
                        cout << "Wygral komputer" << endl;
                        wynik_bot++;
                    }
                else if(wb == 2 || wb == 5)
                    {
                        cout << "Wygral/a " << name << endl;
                        wynik_gracz++;
                    }
                break;
            case '5':
                Easybot();
                cout << name << ": " << "SPOCK" << endl;
                if (wb == 5)cout << "Remis" << endl;
                else if(wb == 2 || wb == 4)
                    {
                        cout << "Wygral komputer" << endl;
                        wynik_bot++;
                    }
                else if(wb == 1 || wb == 3)
                    {
                        cout << "Wygral/a " << name << endl;
                        wynik_gracz++;
                    }
                break;
            case '0': break;
        }
}

void game()
{
    for(;;)
    {
        system("cls");
        cout << "======================================" << endl;
        cout << "   ROCK PAPER SCISSORS LIZARD SPOCK   " << endl;
        cout << "======================================" << endl;
        cout << "[1]Rock" <<endl;
        cout << "[2]Paper" <<endl;
        cout << "[3]Scissors" <<endl;
        cout << "[4]Lizard" <<endl;
        cout << "[5]Spock" <<endl;
        cout << "[0]Powrot do menu" <<endl;
        cout << "======================================" << endl;
        cout << name << " " << wynik_gracz << " : " << wynik_bot << " Komputer" << endl;
        cout << "======================================" << endl << endl;


        choose=getch();
        sprawdzanie();
    }
}

int main()
{
    wynik_bot = 0;
    wynik_gracz = 0;
    system("cls");
    cout << "Podaj nick: ";
    cin >> name;

        getchar();
        system("cls");
        cout << "======================================" << endl;
        cout << "   ROCK PAPER SCISSORS LIZARD SPOCK   " << endl;
        cout << "======================================" << endl;
        cout << "[1]Graj" <<endl;
        cout << "[2]Scoreboard (wkrótce)" <<endl;
        cout << "[3]Ustawienia" <<endl;
        cout << "[0]Wyjscie" <<endl;
        cout << "======================================" << endl;



        choose=getch();

        switch(choose)
        {
            default: cout << "Nie ma takiej opcji. Spróbuj ponownie." << endl; break;
            case '0': exit(0); break;
            case '1': game(); break;
            case '2': cout << "Opcja jeszcze nie jest dostępna" << endl; break;
            case '3': settings(); break;
        }

        cout << endl;
        cout << "======================================" << endl;
        cout << "    Aby kontynuowac nacisnij ENTER    " <<endl;
        cout << "======================================" << endl;

    return 0;
}
