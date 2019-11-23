#include<iostream>
using namespace std;

int main()
{
	const int a = 3, b = 3;
	int A[a][b], B[a][b], W[a][b];
	

		for(int i=0;i<a;i++) 
			for(int j=0;j<b;j++) 
				cin>>A[i][j];
			

		for(int i=0;i<a;i++)
			for(int j=0;j<b;j++)
			{
			    cin>>B[i][j];
				W[i][j] = A[i][j] + B[i][j];
			}
	


		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
				cout<<W[i][j]<<" ";
			cout<<endl; }
	
	return 0;
}