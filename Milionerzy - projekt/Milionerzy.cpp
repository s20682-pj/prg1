#include <iostream>
#include <fstream> 
#include <string>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <cstddef>
#include <locale.h>
#include <sstream>
using namespace std;
// nie umiem zrobić, żeby w konsoli pokazywało polskie znaki z pliku
enum Choice
{
    GOODANSWER = 0,
    BADANSWER=1,
    PUBLIC=2,
    FRIEND=3,
    HALF =4,
    EXIT=5
};

Choice getChoiceFromStringA(string text){
    if(text=="a" || text=="A") return GOODANSWER;
    if(text=="jeden") return PUBLIC;
    if(text=="dwa") return FRIEND;
    if(text=="trzy") return HALF;
    if(text=="exit") return EXIT;
}

Choice getChoiceFromStringB(string text){
    if(text=="b" || text=="B") return GOODANSWER;
    if(text=="jeden") return PUBLIC;
    if(text=="dwa") return FRIEND;
    if(text=="trzy") return HALF;
    if(text=="exit") return EXIT;
}

Choice getChoiceFromStringC(string text){
    if(text=="c" || text=="C") return GOODANSWER;
    if(text=="jeden") return PUBLIC;
    if(text=="dwa") return FRIEND;
    if(text=="trzy") return HALF;
    if(text=="exit") return EXIT;
}

Choice getChoiceFromStringD(string text){
    if(text=="d" || text=="D") return GOODANSWER;
    if(text=="jeden") return PUBLIC;
    if(text=="dwa") return FRIEND;
    if(text=="trzy") return HALF;
    if(text=="exit") return EXIT;
}

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

	string pyt2k[5];
	ifstream myfile3("pyt2k.txt");
	if (myfile3.is_open())
	{
		while (!myfile3.eof())
		{
			getline(myfile3, linia);
			pyt2k[i] = linia;
			i++;
		}
		myfile3.close();
		i = 0;
	}
	
	
	string pyt5k[5];
	ifstream myfile4("pyt5k.txt");
	if (myfile4.is_open())
	{
		while (!myfile4.eof())
		{
			getline(myfile4, linia);
			pyt5k[i] = linia;
			i++;
		}
		myfile4.close();
		i = 0;
	}

	int wygrana=0;
	cout << "Witamy w programie Milionerzy! Jestem Hubert Urbański, wasz prowadzący. Witamy naszego nowego zawodnika. Jak masz na imię?" << endl;
	string imie;
	cin >> imie;
	cout << imie << ", wspaniale, witamy w programie! Zasady są proste, musisz odpowiedzieć poprawnie na 12 pytań, by wygrac milion złotych. Są dwa progi gwarantowane: 1000 oraz 40000 złotych. Możesz użyć także 3 kół ratunkowych, wpisz jeden, by wybrać Telefon do przyjaciela, dwa by zadać pytanie publiczności lub trzy, by wykluczyć 2 błędne odpowiedzi. Możesz także wpisać exit, by odejść z tym co masz. Zatem zacznijmy grę!" << endl;
	int x;
	x = rand() % 5;
	cout << "Pytanie za 500 złotych: " << endl << pyt500[x] << endl;
	
	while (true){
	
		string input;
	   	cin >> input;
	   	Choice choice = getChoiceFromStringA(input);
		
		switch (choice)
	    {
	    case FRIEND:
	        cout << "Został wybrany telefon do pzyjaciela. Witamy twojego przyjaciela Janusza! Januszu, jak myślisz, która odpowoedź jest prawidłowa?"<<endl;
			cout<< "Według mnie jest to odpowiedź A."<<endl;
			cout << "Dziękujemy ci bardzo. Mam nadzieję, że twój przyjaciel Ci dobrze podpowiedział."<<endl;
			continue;
	    case PUBLIC:
	        cout << "Wybrano pytanie do publiczności, zatem proszę naszą widownię o wskazanie poprawnej odpowiedzi!"<<endl;
			cout<< "74% dla odpowiedzi A, 2% dla odpowiedzi B, 10% dla odpowiedzi C i 14% dla odpowiedzi D."<<endl;
			continue;
	    case HALF:
	        cout<< "Wybrano pół na pół. Zatem odpada odpowiedź C i D." << endl;
	        continue;
		case GOODANSWER:
	        cout << "Gratulacje, to poprawna odpowiedź!"<<endl;
			wygrana=500;
	        break;	
		case EXIT:
	        cout << "Niestety, ale dziś odchodzisz z niczym. Mam nadzieję, że jeszcze keidyś spróbujesz swoich sił." << endl;
	        break;	
		default:
	        cout << "Przykro mi, ale poprawna odpowiedź to A." << endl;
			cout << "Niestety, ale dziś odchodzisz z niczym. Mam nadzieję, że jeszcze keidyś spróbujesz swoich sił." << endl;
	        break;
		}
	break;
}

	if (wygrana==500)
	{
		x = 0;
		cout << "Świetny początek, " << imie << "! Przejdźmy dalej! Pytanie za gwarantowany 1000 złotych: " << endl;
		x = rand() % 5;
		cout << pyt1k[i] << endl;
		
	while (true){
	
		string input;
	   	cin >> input;
	   	Choice choice = getChoiceFromStringD(input);
		
		switch (choice)
	    {
		    case FRIEND:
		        cout << "Został wybrany telefon do pzyjaciela. Witamy twojego przyjaciela Janusza! Januszu, jak myślisz, która odpowoedź jest prawidłowa?"<<endl;
				cout<< "Według mnie jest to odpowiedź D."<<endl;
				cout << "Dziękujemy ci bardzo. Mam nadzieję, że twój przyjaciel Ci dobrze podpowiedział."<<endl;
				continue;
		    case PUBLIC:
		        cout << "Wybrano pytanie do publiczności, zatem proszę naszą widownię o wskazanie poprawnej odpowiedzi!"<<endl;
				cout<< "14% dla odpowiedzi A, 12% dla odpowiedzi B, 10% dla odpowiedzi C i 64% dla odpowiedzi D."<<endl;
				continue;
		    case HALF:
		        cout<< "Wybrano pół na pół. Zatem odpada odpowiedź B i C." << endl;
		        continue;
			case GOODANSWER:
		        cout << "Gratulacje, to poprawna odpowiedź!"<<endl;
				wygrana=1000;
		        break;	
			case EXIT:
		        cout << "Wygrywasz "<<wygrana<<" złotych! Serdeczne gratulacje i zapraszamy ponownie!" << endl;
		        break;	
			default:
		        cout << "Przykro mi, ale poprawna odpowiedź to D." << endl;
				cout << "Niestety, ale dziś odchodzisz z niczym. Mam nadzieję, że jeszcze keidyś spróbujesz swoich sił." << endl;
		        break;
			}
	break;
}
}

if (wygrana==1000)
	{
		x = 0;
		cout << "Oby tak dalej! Kolejne pytanie, tym razem za 2000 złotych: " << endl;
		x = rand() % 5;
		cout << pyt2k[i] << endl;
		
	while (true){
	
		string input;
	   	cin >> input;
	   	Choice choice = getChoiceFromStringA(input);
		
		switch (choice)
	    {
		    case FRIEND:
		        cout << "Został wybrany telefon do pzyjaciela. Witamy twojego przyjaciela Janusza! Januszu, jak myślisz, która odpowoedź jest prawidłowa?"<<endl;
				cout<< "Według mnie jest to odpowiedź A."<<endl;
				cout << "Dziękujemy ci bardzo. Mam nadzieję, że twój przyjaciel Ci dobrze podpowiedział."<<endl;
				continue;
		    case PUBLIC:
		        cout << "Wybrano pytanie do publiczności, zatem proszę naszą widownię o wskazanie poprawnej odpowiedzi!"<<endl;
				cout<< "77% dla odpowiedzi A, 7% dla odpowiedzi B, 6% dla odpowiedzi C i 10% dla odpowiedzi D."<<endl;
				continue;
		    case HALF:
		        cout<< "Wybrano pół na pół. Zatem odpada odpowiedź B i C." << endl;
		        continue;
			case GOODANSWER:
		        cout << "Gratulacje, to poprawna odpowiedź!"<<endl;
				wygrana=2000;
		        break;	
			case EXIT:
		        cout << "Wygrywasz "<<wygrana<<" złotych! Serdeczne gratulacje i zapraszamy ponownie!" << endl;
		        break;	
			default:
		        cout << "Przykro mi, ale poprawna odpowiedź to A." << endl;
				cout << "Niestety, ale dziś odchodzisz z niczym. Mam nadzieję, że jeszcze keidyś spróbujesz swoich sił." << endl;
		        break;
			}
	break;
}
}

if (wygrana==2000)
	{
		x = 0;
		cout << "Idiesz jak burza! Oto pytanie za 5000 złotych: " << endl;
		x = rand() % 5;
		cout << pyt5k[i] << endl;
		
	while (true){
	
		string input;
	   	cin >> input;
	   	Choice choice = getChoiceFromStringA(input);
		
		switch (choice)
	    {
		    case FRIEND:
		        cout << "Został wybrany telefon do pzyjaciela. Witamy twojego przyjaciela Janusza! Januszu, jak myślisz, która odpowoedź jest prawidłowa?"<<endl;
				cout<< "Według mnie jest to odpowiedź A."<<endl;
				cout << "Dziękujemy ci bardzo. Mam nadzieję, że twój przyjaciel Ci dobrze podpowiedział."<<endl;
				continue;
		    case PUBLIC:
		        cout << "Wybrano pytanie do publiczności, zatem proszę naszą widownię o wskazanie poprawnej odpowiedzi!"<<endl;
				cout<< "77% dla odpowiedzi A, 7% dla odpowiedzi B, 6% dla odpowiedzi C i 10% dla odpowiedzi D."<<endl;
				continue;
		    case HALF:
		        cout<< "Wybrano pół na pół. Zatem odpada odpowiedź B i C." << endl;
		        continue;
			case GOODANSWER:
		        cout << "Gratulacje, to poprawna odpowiedź!"<<endl;
				wygrana=5000;
		        break;	
			case EXIT:
		        cout << "Wygrywasz "<<wygrana<<" złotych! Serdeczne gratulacje i zapraszamy ponownie!" << endl;
		        break;	
			default:
		        cout << "Przykro mi, ale poprawna odpowiedź to A." << endl;
				cout << "Niestety, ale dziś odchodzisz z niczym. Mam nadzieję, że jeszcze keidyś spróbujesz swoich sił." << endl;
		        break;
			}
	break;
}
}

	return 0;
}
