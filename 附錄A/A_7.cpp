#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
int main()
 {
    int i;

    for(i = 0; i < 10000000; i++);
        cout<<"����ɶ�:"<<clock()<<endl;
     
    return 0;
 }
