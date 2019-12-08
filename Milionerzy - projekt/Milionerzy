#include <iostream>
#include <fstream> 
#include <string>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <cstddef>
#include <locale.h>
using namespace std;
// nie umiem zrobić, żeby w konsoli pokazywało polskie znaki z pliku
int main()
{
	setlocale(LC_CTYPE, "Polish");
	string pyt500[5]; 
	int i = 0; 
	string linia; 
	ifstream myfile("pyt500.txt"); 
	if (myfile.is_open()) 
	{
		while (!myfile.eof()) 
		{
			getline(myfile, linia); 
			pyt500[i] = linia; 
			i++; 
		}
		myfile.close(); 
	}

	cout << "Witamy w programie Milionerzy! Jestem Hubert Urbański, wasz prowadzący. Witamy naszego nowego zawodnika. Jak masz na imię?"<<endl;
	string imie;
	cin >> imie;
	cout << imie << ", wspaniale, witamy w programie! Zasady są proste, musisz odpowiedzieć poprawnie na 12 pytań, by wygrac milion złotych. Są dwa progi gwarantowane: 1000 oraz 40000 złotych. Zatem zacznijmy grę!" << endl;
	int x;
	x = rand() % 5;
	cout << "Pytanie za 500 złotych: " << pyt500[x] << endl;
	string odp500;
	cin >> odp500;
	if (odp500 == "A" || odp500=="a")
	{
		cout << "Gratulacje, to poprawna odpowiedź!";
		x = 0;
		
	}
	else {
		cout << "Przykro mi, ale poprawna odpowiedź to A." << endl;
		cout << "Niestety, ale dziś odchodzisz z niczym. Mam nadzieję, że jeszcze keidyś spróbujesz swoich sił." << endl;
	}


	return 0;
}
