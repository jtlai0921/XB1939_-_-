#include <iostream>
#include <cstdlib>
using namespace std;

void swap(int *i, int *j)// 指標變數  
{
    int temp;
 
    temp = *i;
    *i = *j;
    *j = temp;
}
 
 //作用：氣泡排序法       
 //引數：arr為陣列位址    
 //      length為陣列長度 
void BubbleSort(int *arr, int length)
{
    int i, j;
    for ( i = 0; i < length; i++ )
    {
        for ( j = 0; j < length; j++ )
        {
            if ( arr[j] > arr[j+1] )
                swap(&arr[j],&arr[j+1]);//傳址呼叫  
        }
    }
}
 
int main()
{
    int num[] = { 213, 424, 56, 16,54, 612, 46, 5, 475, 151 };
    int i;
 
    puts( "排序前的陣列：" );
    for ( i = 0; i < 10; i++ )
        cout<<num[i]<<" ";
 
    BubbleSort(num,10); //氣泡排序法 
 
    cout<<endl<<"排序後的陣列：" ;
    for ( i = 0; i < 10; i++ )
        cout<<num[i]<<" "; 
    cout<<endl;
     
    return 0;
}
