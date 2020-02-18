#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{	  
    int* m = new int;
    int p = 30;
    *m = 50;
    cout<<"*m = "<<*m<<endl;
    cout<<"執行delete m前，指標m所指向的記憶體位址 = "<<m<<endl;	
    delete m;	
    cout<<"執行delete m後，指標m所指向的記憶體位址 = "<<m<<endl;	
    m = &p;    
    //將指標m指向變數p	
    (*m)++;    //對指標m所指向的位址內的數值遞增1
    cout<<"p = "<<p<<endl;
  
    return 0;
}
