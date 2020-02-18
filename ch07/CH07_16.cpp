#include <iostream> 
#include <cstdlib>  
const int Rows = 3; 
const int Cols = 2;  
using namespace std;

int main() 
{  
    int no[Rows][Cols] = {{1,2}, {3,4}, {5,6}};  
    int* ptr = &no[0][0];    //宣告一個指標ptr並且指向陣列no的起始位址 
    int i,j;  
    for(i=0;i<Rows;i++) 
        for(j=0;j<Cols;j++)  
            cout<<*(ptr+i*Cols+j)<<endl;//利用ptr輸出陣列各元素 
    
    return 0;
}
