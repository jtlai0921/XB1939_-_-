#include <iostream>
#include <cstdlib>

using namespace std;
 
int main()
{
    int a=3,b=5,c=7;   //宣告a、b及c三個整數變數，並指定初始值
  
    cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl; 
    
    cout<<"a<b的比較結果是 "<<(a<b)<<endl; //比較a是否小於b，狀況成立，輸出1
    cout<<"a==c的比較結果是 "<<(a==c)<<endl; //比較a是否等於c，狀況不成立，輸出0
    cout<<"----------------------------------"<<endl;
    
    return 0;
}

