#include <iostream>
#include <cstdlib> 
using namespace std;

int Factorial( int );  //階層運算，使用遞迴，並計算遞迴次數 
 
int main()
{
    int number, answer;
 
    cout<<"請輸入數值求階乘：" ;
    cin>>number;
    answer = Factorial(number);
    cout<<number<<"!="<<answer;

    return 0;
}

 //引數：number指定數值進行階乘運算 
 //傳回值：階乘運算結果 
 int Factorial( int number )
 {
    static int count = 1;//宣告為static變數  
    if ( number > 1 )
    {
        count++;
        return number*Factorial(number-1);
    }
    else
    {
        cout<<"遞迴次數："<<count<<endl;
        return 1;
    }
 }
