#include<iostream>
#include<cstdlib>
#include<cmath>//引用cmatn表頭檔
using namespace std;

int main()
{
	double number;
	cout<<"請輸入一個double資料型態的數字:";
    cin>>number;
    //輸出結果
   	cout<<number<<"的絕對值="<<fabs(number)<<endl;
   	cout<<number<<"無條件進入後="<<ceil(number)<<endl;
   	cout<<number<<"無條件捨去後="<<floor(number)<<endl;
      	
    return 0;
}
