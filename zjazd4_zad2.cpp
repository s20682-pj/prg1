#include <iostream>  
using namespace std;  
int main()  
{  

int c[3][3],d[3][3];
int mul[3][3]={0,0,0,0,0,0,0,0,0};

for (int i=0;i<3;i++){

	for(int j=0;j<3;j++){



cin>>c[i][j];

}

}

for (int i=0;i<3;i++){

for (int j=0;j<3;j++){

cout<<c[i][j]<<" ";

}

cout<<endl;

}


for (int i=0;i<3;i++){

	for(int j=0;j<3;j++){



cin>>d[i][j];

}

}

for (int i=0;i<3;i++){

for (int j=0;j<3;j++){

cout<<d[i][j]<<" ";

}

cout<<endl;

}    
    
    

for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++) {
        for (int u = 0; u < 3; u++)
            mul[i][j] += c[i][u] * d[u][j];
    }

}

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << mul[i][j] << " ";
    }
    cout << endl;
}
    return 0;
}