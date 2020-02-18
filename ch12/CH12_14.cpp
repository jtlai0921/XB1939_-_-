#include<iostream>
#include<cstdlib>
using namespace std;

void throwex()
{
    try  // 外層的try區塊
    {
        cout<<"目前在函數throwex第一層的try區塊中\n";
        try {  // 內層的try區
            cout<<"目前在函數throwex第二層的try區塊中\n";
            throw exception(); //丟出一個例外
        }
        catch(exception e)  //捕捉例外
        {
            cout<<"目前例外控制權是在函數throwex的第二層try區塊中\n";
            throw; //重新丟出一個例外
        }
        cout<<"第一層try區塊執行完畢\n";
    }
    catch(...) //捕捉所有的例外
    {
        cout<<"捕捉所有的例外\n";
    }
}

int main()
{
    try {
        throwex();  //呼叫函數throwex
        cout<<"在函數main內的try區塊\n";  
    }
    catch(exception e)  //捕捉例外
    {
        cout<<"目前例外控制權是在主函數main中\n";
    }
    cout<<"在捕捉例外並處理之後，其控制權又回到主程式中\n";
    
    return 0;
}
