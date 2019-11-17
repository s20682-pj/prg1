#include <iostream>  
using namespace std;  
int main()  
{  
    int a=3;
    int b=3;
int c[a][b],d[a][b],mul[a][b],i,j,k;    

for (int i=0;i<3;i++){

	for(int j=0;j<3;j++){



cin>>c[a][b];

}

}

for (int i=0;i<3;i++){

for (int j=0;j<3;j++){

cout<<c[a][b]<<" ";

}

cout<<endl;

}


for (int i=0;i<3;i++){

	for(int j=0;j<3;j++){



cin>>d[a][b];

}

}

for (int i=0;i<3;i++){

for (int j=0;j<3;j++){

cout<<d[a][b]<<" ";

}

cout<<endl;

}    
    
    

for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++) {
        for (int u = 0; u < 3; u++)
            mul[i][j] += c[i][u] * d[u][j];
    }



for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << mul[i][j] << ".";
    }
    cout << endl;
}
    return 0;
}
