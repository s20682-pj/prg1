#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> tab;
    int n;
    cin >> n;
    for( int i=0; i<n; ++i )
    {
    
       int element;
       cin >> element;
       if (element == 0)
       {
           break;
       }
       else
       {
       tab.push_back(element);
       
       }
    }
    for(int i=0;i<tab.size();i++){
        cout<<tab[i]<<endl;
    }
    return 0;
}
