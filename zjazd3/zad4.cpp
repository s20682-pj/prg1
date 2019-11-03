#include <iostream>
using namespace std;
int main(){


string x;
cin >> x;
int l=0;
while(x[l]!=0) l++;


char zmiana;
for( int i = 0; i <= 99; i++ ) {
    if((int) x[i] >= 65 &&(int) x[i] <= 90) {
        zmiana =(int) x[i] + 32;}
        x[i] = zmiana;
    }
cout<<x<<endl;
return 0;
}
