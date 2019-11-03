#include <iostream>

using namespace std;
int main(){
int x[10];
for (int i=0;i<10;i++){
cin>>x[i];
}
for (int i=10;i>0;i--){
cout<<x[i-1]<<endl;
}
return 0;
}
