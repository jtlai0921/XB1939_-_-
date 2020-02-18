#include <iostream>  
#include <cstdlib>

using namespace std; 
   
int main()  
{  
    extern float PI; //宣告 PI 為extern變數 
    float radius,area;
   
    cout<<"請輸入圓半徑為:";
    cin>>radius; 
   
    area=radius*radius*PI;
    cout<<"圓面積為:"<<area<<endl; 

    return 0;
}
   
float PI=3.14159;//外部宣告變數 
