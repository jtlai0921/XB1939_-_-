#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
int main()
{
    int i;
    long int seed;
 
    seed = time(NULL);
    srand(seed);    //�]�w�üƺؤl 
    for(i = 0; i < 10; i++)
        cout<<rand()<<" ";
    cout<<endl;
 
    return 0;
 }
