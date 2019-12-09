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
	ifstream myfile1("pyt500.txt");
	if (myfile1.is_open())
	{
		while (!myfile1.eof())
		{
			getline(myfile1, linia);
			pyt500[i] = linia;
			i++;
		}
		myfile1.close();
		i = 0;
	}
	string pyt1k[5];
	ifstream myfile2("pyt1k.txt");
	if (myfile2.is_open())
	{
		while (!myfile2.eof())
		{
			getline(myfile2, linia);
			pyt1k[i] = linia;
			i++;
		}
		myfile2.close();
		i = 0;
	}

	cout << "Witamy w programie Milionerzy! Jestem Hubert Urbański, wasz prowadzący. Witamy naszego nowego zawodnika. Jak masz na imię?" << endl;
	string imie;
	cin >> imie;
	cout << imie << ", wspaniale, witamy w programie! Zasady są proste, musisz odpowiedzieć poprawnie na 12 pytań, by wygrac milion złotych. Są dwa progi gwarantowane: 1000 oraz 40000 złotych. Zatem zacznijmy grę!" << endl;
	int x;
	x = rand() % 5;
	cout << "Pytanie za 500 złotych: " << endl << pyt500[x] << endl;
	string odp500;
	cin >> odp500;
	if (odp500 == "A" || odp500 == "a")
	{
		cout << "Gratulacje, to poprawna odpowiedź!"<<endl;
		x = 0;
		cout << "Świetny początek, " << imie << "! Przejdźmy dalej! Pytanie za gwarantowany 1000 złotych: " << endl;
		x = rand() % 5;
		cout << pyt1k[i] << endl;
		string odp1k;
		cin >> odp1k;
		if (odp1k == "D" || odp1k == "d") {
			cout << "Tak! To poprawna odpowiedź!" << endl;
		}
		else {
			cout << "Przykro mi, ale poprawna odpowiedź to D." << endl;
			cout << "Niestety, ale dziś odchodzisz z niczym. Mam nadzieję, że jeszcze keidyś spróbujesz swoich sił." << endl;
		}


	}
	else {
		cout << "Przykro mi, ale poprawna odpowiedź to A." << endl;
		cout << "Niestety, ale dziś odchodzisz z niczym. Mam nadzieję, że jeszcze keidyś spróbujesz swoich sił." << endl;
	}


	return 0;
}
