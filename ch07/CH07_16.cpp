#include <iostream> 
#include <cstdlib>  
const int Rows = 3; 
const int Cols = 2;  
using namespace std;

int main() 
{  
    int no[Rows][Cols] = {{1,2}, {3,4}, {5,6}};  
    int* ptr = &no[0][0];    //�ŧi�@�ӫ���ptr�åB���V�}�Cno���_�l��} 
    int i,j;  
    for(i=0;i<Rows;i++) 
        for(j=0;j<Cols;j++)  
            cout<<*(ptr+i*Cols+j)<<endl;//�Q��ptr��X�}�C�U���� 
    
    return 0;
}
