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

	int wygrana=0;
	cout << "Witamy w programie Milionerzy! Jestem Hubert Urbański, wasz prowadzący. Witamy naszego nowego zawodnika. Jak masz na imię?" << endl;
	string imie;
	cin >> imie;
	cout << imie << ", wspaniale, witamy w programie! Zasady są proste, musisz odpowiedzieć poprawnie na 12 pytań, by wygrac milion złotych. Są dwa progi gwarantowane: 1000 oraz 40000 złotych. Możesz użyć także 3 kół ratunkowych, wpisz 1, by wybrać Telefon do przyjaciela, 2 by zadać pytanie publiczności lub 3, by wykluczyć 2 błędne odpowiedzi. Możesz także wpisać rezygnuję, by odejść z tym co masz. Zatem zacznijmy grę!" << endl;
	int x;
	x = rand() % 5;
	cout << "Pytanie za 500 złotych: " << endl << pyt500[x] << endl;
	string odp500;
	cin >> odp500;
	
	switch( odp500 )
    {
    case 1:
        cout << "Został wyvbrany telefon do pzyjaciela. Witamy twojego przyjaciela Janusza! Januszu, jak myślisz, która odpowoedź jest prawidłowa?"<<endl;
		cout<< "Według mnie jest to odpowiedź A."<<endl;
		cout << "Dziękujemy ci bardzo. Mam nadzieję, że twój przyjaciel Ci dobrze podpowiedział."
        break;
    case 2:
        cout << "Wybrano pytanie do publiczności, zatem proszę naszą widownię o wskazanie poprawnej odpowiedzi!"<<endl;
		cout<< "74% dla odpowiedzi A, 2% dla odpowiedzi B, 10% dla odpowiedzi C i 14% dla odpowiedzi D."<<endl;
        break;
    case 3:
        cout<< "Wybrano pół na pół. Zatem odpada odpowiedź C i D." << endl;
        break;
	case 3:
        cout<< "Wybrano pół na pół. Zatem odpada odpowiedź C i D." << endl;
        break;
	case "A":
        cout << "Gratulacje, to poprawna odpowiedź!"<<endl;
		wygrana=500;
        break;		
	case "a":
        cout << "Gratulacje, to poprawna odpowiedź!"<<endl;
		wygrana=500;
        break;
	default:
        cout << "Przykro mi, ale poprawna odpowiedź to A." << endl;
		cout << "Niestety, ale dziś odchodzisz z niczym. Mam nadzieję, że jeszcze keidyś spróbujesz swoich sił." << endl;
        break;
	}

	if (wygrana==500)
	{
		x = 0;
		cout << "Świetny początek, " << imie << "! Przejdźmy dalej! Pytanie za gwarantowany 1000 złotych: " << endl;
		x = rand() % 5;
		cout << pyt1k[i] << endl;
		string odp1k;
		cin >> odp1k;
		
		switch( odp1k )
			{
			case 1:
				cout << "Został wyvbrany telefon do pzyjaciela. Witamy twojego przyjaciela Janusza! Januszu, jak myślisz, która odpowoedź jest prawidłowa?"<<endl;
				cout<< "Według mnie jest to odpowiedź D."<<endl;
				cout << "Dziękujemy ci bardzo. Mam nadzieję, że twój przyjaciel Ci dobrze podpowiedział."
				break;
			case 2:
				cout << "Wybrano pytanie do publiczności, zatem proszę naszą widownię o wskazanie poprawnej odpowiedzi!"<<endl;
				cout<< "14% dla odpowiedzi A, 12% dla odpowiedzi B, 10% dla odpowiedzi C i 64% dla odpowiedzi D."<<endl;
				break;
			case 3:
				cout<< "Wybrano pół na pół. Zatem odpada odpowiedź A i C." << endl;
				break;
			case 3:
				cout<< "Wybrano pół na pół. Zatem odpada odpowiedź A i C." << endl;
				break;
			case "D":
				cout << "Tak! To poprawna odpowiedź! Masz gwarantowany 1000 złotych!" << endl;
				wygrana=1000;
				break;		
			case "d":
				cout << "Tak! To poprawna odpowiedź! Masz gwarantowany 1000 złotych!" << endl;
				wygrana=1000;
				break;
			case "rezygnuję":
				cout << "Przykro mi to slyszeć, ale wygrywasz "<<wygrana<<"złotych, gratulację! Mam nadzieję, że jeszcze kiedyś się spotkamy." << endl;
				break;	
			default:
				cout << "Przykro mi, ale poprawna odpowiedź to D." << endl;
				cout << "Niestety, ale dziś odchodzisz z niczym. Mam nadzieję, że jeszcze keidyś spróbujesz swoich sił." << endl;
				break;
			}
		

	return 0;
}