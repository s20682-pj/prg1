#include <iostream>
using namespace std;

int main()
{
int tab1[5];
int tab2[5];
int tab3[5];
int tab4[5];
int tab5[5];
float wynik1,wynik2,wynik3,wynik4,wynik5;
for (int i=0;i<5;i++){
cin>>tab1[i];
wynik1+=tab1[i];
}
for (int i=0;i<5;i++){
cin>>tab2[i];
wynik2+=tab2[i];
}
for (int i=0;i<5;i++){
cin>>tab3[i];
wynik3+=tab3[i];
}
for (int i=0;i<5;i++){
cin>>tab4[i];
wynik4+=tab4[i];
}
for (int i=0;i<5;i++){
cin>>tab5[i];
wynik5+=tab5[i];
}

float srednia=(wynik1+wynik2+wynik3+wynik4+wynik5)/25;
cout<<srednia<<endl;

if(wynik1/5>srednia) cout <<"1"<<endl;
if(wynik2/5>srednia) cout <<"2"<<endl;
if(wynik3/5>srednia) cout <<"3"<<endl;
if(wynik4/5>srednia) cout <<"4"<<endl;
if(wynik5/5>srednia) cout <<"5"<<endl;      

return 0;
}
