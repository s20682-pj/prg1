#include <iostream>
using namespace std;

int main(){
int tab[5];
for (int i=0;i<5;i++){
cin>>tab[i];
}
float wynik;
for (int i=0;i<5;i++){
wynik+=tab[i];
}

    cout << wynik/5 << endl;


return 0;
}
