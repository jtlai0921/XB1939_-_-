#include <iostream>
#include <cstdlib>
using namespace std;

void swap(int *i, int *j)// �����ܼ�  
{
    int temp;
 
    temp = *i;
    *i = *j;
    *j = temp;
}
 
 //�@�ΡG��w�ƧǪk       
 //�޼ơGarr���}�C��}    
 //      length���}�C���� 
void BubbleSort(int *arr, int length)
{
    int i, j;
    for ( i = 0; i < length; i++ )
    {
        for ( j = 0; j < length; j++ )
        {
            if ( arr[j] > arr[j+1] )
                swap(&arr[j],&arr[j+1]);//�ǧ}�I�s  
        }
    }
}
 
int main()
{
    int num[] = { 213, 424, 56, 16,54, 612, 46, 5, 475, 151 };
    int i;
 
    puts( "�Ƨǫe���}�C�G" );
    for ( i = 0; i < 10; i++ )
        cout<<num[i]<<" ";
 
    BubbleSort(num,10); //��w�ƧǪk 
 
    cout<<endl<<"�Ƨǫ᪺�}�C�G" ;
    for ( i = 0; i < 10; i++ )
        cout<<num[i]<<" "; 
    cout<<endl;
     
    return 0;
}
