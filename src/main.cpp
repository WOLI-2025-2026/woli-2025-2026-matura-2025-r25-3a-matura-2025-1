//dawid szarwas
/*
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


string z3_1_path_symbole_txt = "../zalaczniki-2025/symbole.txt";
*/

/*
bool czy_palindrom(string slowo)
{
    int dlugosc = slowo.length();
    for(int i = 0; i < dlugosc / 2; i++)
    {
        if(slowo[i] != slowo[dlugosc - i - 1])
        {
            return false;
        }
    }
    return true;
}



void zadanie2_1()
{
    ifstream plik(z3_1_path_symbole_txt);
    if(!plik.is_open())
    {
        cerr << "nie mozna otworzyc pliku" << endl;
    }

    ofstream wynik("wynik_2_1.txt");

    string linia;
    while(plik >> linia)
    {
        if (czy_palindrom(linia))
        {
            cout << linia << endl;
            wynik << linia << endl;
        }
    }

    wynik.close();
    plik.close();

}
*/


/*
void zadanie2_2()
{
    ifstream plik(z3_1_path_symbole_txt);
    if(!plik.is_open())
    {
        cerr << "nie mozna otworzyc pliku" << endl;
        return;
    }

<<<<<<< HEAD
    string odp;
=======

>>>>>>> 5561c7b (2_3/4)
    vector<string> tekst;
    string linia;
    while(getline(plik, linia))
    {
        tekst.push_back(linia);
    }

    plik.close();

    ofstream wynik("wynik_2_2.txt");

    int wiersze = tekst.size();
    int ilosc = 0; 
    string odp = "";

<<<<<<< HEAD

    for(int w = 1; w <= wiersze - 3; w++)
    {
        for(int k = 1; k <= kolumny - 3; k++)
=======
    for(int w = 1; w < wiersze - 1; w++)
    {
        int kolumny = tekst[w].length();
        for(int k = 1; k < kolumny - 1; k++)
>>>>>>> 5561c7b (2_3/4)
        {
            char symbol = tekst[w][k];

            bool czy_kwadrat = true;

            for(int i = -1; i <= 1 && czy_kwadrat; i++)
            {
                for(int j = -1; j <= 1; j++)
                {
                    if(tekst[w + i][k + j] != symbol)
                    {
                        czy_kwadrat = false;
                    }
                }
            }

            if(czy_kwadrat)
            {
                ilosc++;
                odp = odp + to_string(w+1) + " " + to_string(k+1) + " ";
<<<<<<< HEAD

=======
>>>>>>> 5561c7b (2_3/4)
            }
        }
    }

<<<<<<< HEAD
    odp = odp + ilosc + czy_kwadrat;
    wynik << odp;


    plik.close();
=======
    string odpowiedz = to_string(ilosc) + " " + odp;
    wynik << odpowiedz;
    cout << odpowiedz;



>>>>>>> 5561c7b (2_3/4)
    wynik.close();
}
*/
