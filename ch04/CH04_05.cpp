#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int Select, Result=77;  // 定義整數變數 Select, Result
    // Result 儲存答案 
    cout << "猜猜今晚樂透號碼(2位數):";
    cin >> Select;
    cout << "不知您猜中了沒!!";
    cout << endl << endl;
    if (Select-Result)  // if多行條件敘述
    {
        cout << "猜錯了....";
        cout << endl;    // 換行
    }
     
    return 0;
}

