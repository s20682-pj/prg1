#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> tab;
    int s = 0;
    int i;
    
    while(1){
        cin >> i; 
        if(i == 0){
        break;
        }
    
        tab.push_back(i);
    }
       
    for(int x=0; x< tab.size(); x++){
        s += tab[x];
    }
    cout << s/ tab.size() << endl;
    
 /*   for(int i=0;i<tab.size();i++){
        cout<<tab[i];
    } */
    return 0;
}
