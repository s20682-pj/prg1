#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <cstddef>



//since C++11
//#define NULL 0

using namespace std;

int main()
{ 
    
    vector<string> tab;
    vector<string> tab2;
    string klasa, imie;
    int n; //liczba ile ma byc
    cin >> n;
    for( int i=0; i<n; ++i )
    {
    
       cin >> klasa;
    
      tab.push_back(klasa);
    
    }
     for( int i=0; i<n; ++i )
    {

       cin >> imie;
    
      tab2.push_back(imie);
    }
    for(int i=0;i<tab.size();i++){
       
       
        int x,y;

        x= rand() % n;
        y= rand() % n;
        
        if (tab[x].empty()){
        break;
        }
        else{
            
         if (tab2[y].empty()){   
      break;
         }
         else{
        cout<<tab[x]<<"-"<<tab2[y]<<endl;
        tab.erase(tab.begin()+x);
        tab2.erase(tab2.begin()+y);
        
        n--;
}}}

    return 0;
}