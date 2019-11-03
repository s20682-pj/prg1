#include <iostream>
using namespace std;
int main(){
string x;
cin>>x;
int i;
int l=0;
while(x[l]!=0) l++;


for (i=l;i>0;i--){
cout<<x[i-1];
}
cout<<endl;



return 0;
}
