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
	
	string pyt10k[5];
	ifstream myfile5("pyt10k.txt");
	if (myfile5.is_open())
	{
		while (!myfile5.eof())
		{
			getline(myfile5, linia);
			pyt10k[i] = linia;
			i++;
		}
		myfile5.close();
		i = 0;
	}
	
	string pyt20k[5];
	ifstream myfile6("pyt20k.txt");
	if (myfile6.is_open())
	{
		while (!myfile6.eof())
		{
			getline(myfile6, linia);
			pyt20k[i] = linia;
			i++;
		}
		myfile6.close();
		i = 0;
	}
	
	string pyt40k[5];
	ifstream myfile7("pyt40k.txt");
	if (myfile7.is_open())
	{
		while (!myfile7.eof())
		{
			getline(myfile7, linia);
			pyt40k[i] = linia;
			i++;
		}
		myfile7.close();
		i = 0;
	}
	
	string pyt75k[5];
	ifstream myfile8("pyt75k.txt");
	if (myfile8.is_open())
	{
		while (!myfile8.eof())
		{
			getline(myfile8, linia);
			pyt75k[i] = linia;
			i++;
		}
		myfile8.close();
		i = 0;
	}
	
	string pyt125k[5];
	ifstream myfile9("pyt125k.txt");
	if (myfile9.is_open())
	{
		while (!myfile9.eof())
		{
			getline(myfile9, linia);
			pyt125k[i] = linia;
			i++;
		}
		myfile9.close();
		i = 0;
	}
	
	string pyt250k[5];
	ifstream myfile10("pyt250k.txt");
	if (myfile10.is_open())
	{
		while (!myfile10.eof())
		{
			getline(myfile10, linia);
			pyt250k[i] = linia;
			i++;
		}
		myfile10.close();
		i = 0;
	}
	
	string pyt500k[5];
	ifstream myfile11("pyt500k.txt");
	if (myfile11.is_open())
	{
		while (!myfile11.eof())
		{
			getline(myfile11, linia);
			pyt500k[i] = linia;
			i++;
		}
		myfile11.close();
		i = 0;
	}
	
	string pyt1m[5];
	ifstream myfile12("pyt1m.txt");
	if (myfile12.is_open())
	{
		while (!myfile12.eof())
		{
			getline(myfile12, linia);
			pyt1m[i] = linia;
			i++;
		}
		myfile12.close();
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
			cout << "Niestety, ale dziś odchodzisz z niczym. Mam nadzieję, że jeszcze kiedyś spróbujesz swoich sił." << endl;
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
				cout << "Niestety, ale dziś odchodzisz z niczym. Mam nadzieję, że jeszcze kiedyś spróbujesz swoich sił." << endl;
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
				cout << "Wygrywasz 1000 złotych! Mam nadzieję, że jeszcze kiedyś spróbujesz swoich sił." << endl;
		        break;
			}
	break;
}
}

if (wygrana==2000)
	{
		x = 0;
		cout << "Idziesz jak burza! Oto pytanie za 5000 złotych: " << endl;
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
				cout << "Wygrywasz 1000 złotych! Mam nadzieję, że jeszcze kiedyś spróbujesz swoich sił." << endl;
		        break;
			}
	break;
}
}

if (wygrana==5000)
	{
		x = 0;
		cout << "Cudownie! Dawno już nikt tak daleko nie zaszedł! Przejdźmy dalej, pytanie za 20000 złotych:" << endl;
		x = rand() % 5;
		cout << pyt20k[i] << endl;
		
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
				wygrana=20000;
		        break;	
			case EXIT:
		        cout << "Wygrywasz "<<wygrana<<" złotych! Serdeczne gratulacje i zapraszamy ponownie!" << endl;
		        break;	
			default:
		        cout << "Przykro mi, ale poprawna odpowiedź to A." << endl;
				cout << "Wygrywasz 1000 złotych! Mam nadzieję, że jeszcze kiedyś spróbujesz swoich sił." << endl;
		        break;
			}
	break;
}
}

if (wygrana==20000)
	{
		x = 0;
		cout << "Cóż za emocje! Czas na pytanie za gwarantowanie 40000 złotych: " << endl;
		x = rand() % 5;
		cout << pyt40k[i] << endl;
		
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
				wygrana=40000;
		        break;	
			case EXIT:
		        cout << "Wygrywasz "<<wygrana<<" złotych! Serdeczne gratulacje i zapraszamy ponownie!" << endl;
		        break;	
			default:
		        cout << "Przykro mi, ale poprawna odpowiedź to A." << endl;
				cout << "Wygrywasz 1000 złotych! Mam nadzieję, że jeszcze kiedyś spróbujesz swoich sił." << endl;
		        break;
			}
	break;
}
}

if (wygrana==40000)
	{
		x = 0;
		cout << "Publiczność szaleje! Czyżby był tu z nami kolejny milioner? Pytanie za 75000 złotych: " << endl;
		x = rand() % 5;
		cout << pyt75k[i] << endl;
		
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
				cout<< "7% dla odpowiedzi A, 7% dla odpowiedzi B, 6% dla odpowiedzi C i 80% dla odpowiedzi D."<<endl;
				continue;
		    case HALF:
		        cout<< "Wybrano pół na pół. Zatem odpada odpowiedź B i C." << endl;
		        continue;
			case GOODANSWER:
		        cout << "Gratulacje, to poprawna odpowiedź!"<<endl;
				wygrana=75000;
		        break;	
			case EXIT:
		        cout << "Wygrywasz "<<wygrana<<" złotych! Serdeczne gratulacje i zapraszamy ponownie!" << endl;
		        break;	
			default:
		        cout << "Przykro mi, ale poprawna odpowiedź to A." << endl;
				cout << "Wygrywasz 40000 złotych! Mam nadzieję, że jeszcze kiedyś spróbujesz swoich sił." << endl;
		        break;
			}
	break;
}
}

if (wygrana==75000)
	{
		x = 0;
		cout << "Już tak blisko! Chodźmy dalej, pytanie za 125000 złotych: " << endl;
		x = rand() % 5;
		cout << pyt125k[i] << endl;
		
	while (true){
	
		string input;
	   	cin >> input;
	   	Choice choice = getChoiceFromStringB(input);
		
		switch (choice)
	    {
		    case FRIEND:
		        cout << "Został wybrany telefon do pzyjaciela. Witamy twojego przyjaciela Janusza! Januszu, jak myślisz, która odpowoedź jest prawidłowa?"<<endl;
				cout<< "Według mnie jest to odpowiedź B."<<endl;
				cout << "Dziękujemy ci bardzo. Mam nadzieję, że twój przyjaciel Ci dobrze podpowiedział."<<endl;
				continue;
		    case PUBLIC:
		        cout << "Wybrano pytanie do publiczności, zatem proszę naszą widownię o wskazanie poprawnej odpowiedzi!"<<endl;
				cout<< "17% dla odpowiedzi A, 57% dla odpowiedzi B, 6% dla odpowiedzi C i 20% dla odpowiedzi D."<<endl;
				continue;
		    case HALF:
		        cout<< "Wybrano pół na pół. Zatem odpada odpowiedź A i C." << endl;
		        continue;
			case GOODANSWER:
		        cout << "Gratulacje, to poprawna odpowiedź!"<<endl;
				wygrana=125000;
		        break;	
			case EXIT:
		        cout << "Wygrywasz "<<wygrana<<" złotych! Serdeczne gratulacje i zapraszamy ponownie!" << endl;
		        break;	
			default:
		        cout << "Przykro mi, ale poprawna odpowiedź to A." << endl;
				cout << "Wygrywasz 40000 złotych! Mam nadzieję, że jeszcze kiedyś spróbujesz swoich sił." << endl;
		        break;
			}
	break;
}
}

if (wygrana==125000)
	{
		x = 0;
		cout << "Zdajesz sobie sprawę, że to prawie milion? Już tak blisko, ponieważ czas na pytanie za 250000 tysięcy: " << endl;
		x = rand() % 5;
		cout << pyt250k[i] << endl;
		
	while (true){
	
		string input;
	   	cin >> input;
	   	Choice choice = getChoiceFromStringC(input);
		
		switch (choice)
	    {
		    case FRIEND:
		        cout << "Został wybrany telefon do pzyjaciela. Witamy twojego przyjaciela Janusza! Januszu, jak myślisz, która odpowoedź jest prawidłowa?"<<endl;
				cout<< "Według mnie jest to odpowiedź C."<<endl;
				cout << "Dziękujemy ci bardzo. Mam nadzieję, że twój przyjaciel Ci dobrze podpowiedział."<<endl;
				continue;
		    case PUBLIC:
		        cout << "Wybrano pytanie do publiczności, zatem proszę naszą widownię o wskazanie poprawnej odpowiedzi!"<<endl;
				cout<< "14% dla odpowiedzi A, 11% dla odpowiedzi B, 67% dla odpowiedzi C i 8% dla odpowiedzi D."<<endl;
				continue;
		    case HALF:
		        cout<< "Wybrano pół na pół. Zatem odpada odpowiedź B i D." << endl;
		        continue;
			case GOODANSWER:
		        cout << "Gratulacje, to poprawna odpowiedź!"<<endl;
				wygrana=250000;
		        break;	
			case EXIT:
		        cout << "Wygrywasz "<<wygrana<<" złotych! Serdeczne gratulacje i zapraszamy ponownie!" << endl;
		        break;	
			default:
		        cout << "Przykro mi, ale poprawna odpowiedź to A." << endl;
				cout << "Wygrywasz 40000 złotych! Mam nadzieję, że jeszcze kiedyś spróbujesz swoich sił." << endl;
		        break;
			}
	break;
}
}

if (wygrana==250000)
	{
		x = 0;
		cout << "Pozostały tylko dwa! Pytanie za pół miliona złotych: " << endl;
		x = rand() % 5;
		cout << pyt500k[i] << endl;
		
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
				cout<< "21% dla odpowiedzi A, 1% dla odpowiedzi B, 32% dla odpowiedzi C i 66% dla odpowiedzi D."<<endl;
				continue;
		    case HALF:
		        cout<< "Wybrano pół na pół. Zatem odpada odpowiedź A i C." << endl;
		        continue;
			case GOODANSWER:
		        cout << "Gratulacje, to poprawna odpowiedź!"<<endl;
				wygrana=500000;
		        break;	
			case EXIT:
		        cout << "Wygrywasz "<<wygrana<<" złotych! Serdeczne gratulacje i zapraszamy ponownie!" << endl;
		        break;	
			default:
		        cout << "Przykro mi, ale poprawna odpowiedź to A." << endl;
				cout << "Wygrywasz 40000 złotych! Mam nadzieję, że jeszcze kiedyś spróbujesz swoich sił." << endl;
		        break;
			}
	break;
}
}

if (wygrana==500000)
	{
		x = 0;
		cout << "Zdajesz sobie sprawę, że to prawie milion? Już tak blisko, ponieważ czas na pytanie za 250000 tysięcy: " << endl;
		x = rand() % 5;
		cout << pyt1m[i] << endl;
		
	while (true){
	
		string input;
	   	cin >> input;
	   	Choice choice = getChoiceFromStringB(input);
		
		switch (choice)
	    {
		    case FRIEND:
		        cout << "Został wybrany telefon do pzyjaciela. Witamy twojego przyjaciela Janusza! Januszu, jak myślisz, która odpowoedź jest prawidłowa?"<<endl;
				cout<< "Według mnie jest to odpowiedź B."<<endl;
				cout << "Dziękujemy ci bardzo. Mam nadzieję, że twój przyjaciel Ci dobrze podpowiedział."<<endl;
				continue;
		    case PUBLIC:
		        cout << "Wybrano pytanie do publiczności, zatem proszę naszą widownię o wskazanie poprawnej odpowiedzi!"<<endl;
				cout<< "34% dla odpowiedzi A, 41% dla odpowiedzi B, 12% dla odpowiedzi C i 13% dla odpowiedzi D."<<endl;
				continue;
		    case HALF:
		        cout<< "Wybrano pół na pół. Zatem odpada odpowiedź A i D." << endl;
		        continue;
			case GOODANSWER:
				wygrana=1000000;
		        cout << "Gratulacje, to poprawna odpowiedź! Mamy nowego milionera! Od teraz posiadasz okrągły "<<wygrana<<"złotych!"<<endl;
		        break;	
			case EXIT:
		        cout << "Wygrywasz "<<wygrana<<" złotych! Serdeczne gratulacje i zapraszamy ponownie!" << endl;
		        break;	
			default:
		        cout << "Przykro mi, ale poprawna odpowiedź to A." << endl;
				cout << "Wygrywasz 40000 złotych! Mam nadzieję, że jeszcze kiedyś spróbujesz swoich sił." << endl;
		        break;
			}
	break;
}
}

	return 0;
}
