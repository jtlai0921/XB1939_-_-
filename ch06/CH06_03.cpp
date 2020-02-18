#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])//命令列引數傳遞宣告 
{
    int i;
    if( argc == 1 )//只有程式名稱,沒有參數  
        printf( "未指定參數！" );
    else
    {
        cout<<"所輸入旅客名單總數:"<<argc-1<<"人"<<endl; 
        cout<<"--------------------------------"<<endl;
        cout<<"列印出本次旅行團的旅客名單："<<endl;
        cout<<"--------------------------------"<<endl;
        for( i = 1; i < argc; i++ )
             cout<<argv[i]<<endl;//列印 argv陣列的內容 
    }
    
    return 0;
}
