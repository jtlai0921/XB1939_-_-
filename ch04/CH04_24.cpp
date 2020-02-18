//continue練習
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a=1, b;
    
    for(a; a<=5; a++)	//外層for迴圈控制y軸輸出
    {
        for(b=1;b<=a; b++)	//內層for迴圈控制x軸輸出
        {
            if(b == 4)
                continue;	//回內層迴圈開始處繼續執行
            cout<<b;	//印出b的值  	
        }		
        cout<<endl;
    }
     
    return 0;
}

