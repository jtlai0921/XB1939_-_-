#include <iostream>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int *ptr[3];
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    int i, j;

    for(i = 0; i < 3; i++)
        ptr[i] = (int*)(arr+i);

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            cout<<*(*(ptr+i)+j)<<" ";
    cout<<endl;
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            cout<<ptr[i][j]<<" ";
    cout<<endl;

    
    return 0;
}
