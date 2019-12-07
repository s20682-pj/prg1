#include <iostream>
using namespace std;

void uzupelnijGwiazdka(int x, int y, char tab[10][10]) {
	tab[x][y] = '*';
}

void wypisz(char tab[10][10]) {
	cout << " 0 1 2 3 4 5 6 7 8 9 " << endl;
	for (int i = 0; i < 10; i++) {
		cout << i;
		for (int j = 0; j < 10; j++) {
			cout << tab[i][j] << " ";
		}
		cout << endl;
	}	
}

int main()
{
	int n;
	cout << "Podaj liczbe n: " << endl;
	cin >> n;
	char tab[10][10] = {};

	for (int i=1; i<=n; i++){
		int x, y;
		cout << "Podaj " << i << "-ta pare liczb x,y, ktore sa >=0 oraz <=9: " << endl;
		cin >> x >> y;
		uzupelnijGwiazdka(x, y, tab);
	}

	// uzywalem tego aby szybko zapelnic tablice gwiazdkami
	//for (int i = 0; i < 10; i++) {
	//	for (int j = 0;  j < 10; j++) {
	//		uzupelnijGwiazdka(i, j, tab);
	//	}
	//}
	wypisz(tab);
}
