#include <iostream> 
#include <cstdlib>   
#include <cstring>  
using namespace std;  

int main()  
{  
    char* fruit[5] = {"apple","orange","watermelon","strawberry","pineapple"}; //水果名稱  
    int price[5] = {20,15,55,30,30};  //價格資料  
    char favo[20];  
    cout<<"歡迎光臨！上介讚水果專賣店"<<endl;  
    cout<<"==============================="<<endl;  
    cout<<"[apple], [orange], [watermelon]"<<endl;  
    cout<<"[strawberry], [pineapple]"<<endl<<endl; 
    cout<<"請問您想買哪一種水果？ ";  
    cin>>favo;     //取得使用者輸入的字串  
    for(int i=0;i<5;i++)  
    {  
        if(strcmp(fruit[i],favo) == 0)  //進行字串比較 ,如果字串相同就輸出  
        //相對應的價格資料  
   	    cout<<favo<<"一斤是"<<price[i]<<"元"<<endl;    
    }  

    return 0;
}
