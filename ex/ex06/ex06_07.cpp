#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int i, face, number[7] = {0};

    srand(time(NULL));
    for(i = 1; i <= 10000; i++)
    {
        face = rand() % 6 + 1;
        number[face]++;
    }
    cout<<"點數\t次數\t機率\n";
    cout<<"------------------------\n";
    for(i = 1; i < 7; i++)
        cout<<i<<'\t'<<number[i]<<'\t'<<(float)number[i]/100<<'%'<<endl;

    
    return 0;
}
