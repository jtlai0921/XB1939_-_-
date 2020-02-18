#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char check;    // 定義字元變數 check，用來儲存 do...while 的判斷值
    int chinese, english, math;   // 定義三個整數變數，分別儲存國文、英文、數學的成積
    do
    {
        cout << "請輸入國文成績:";
        cin >> chinese;  // 讀取國文成績
        cout << "請輸入英文成績:";
        cin >> english;          // 讀取英文成績
        cout << "請輸入數學成績:";
        cin >> math;      // 讀取數學成績
        cout << "三科的平均成績=" << (chinese+english+math)/3 << endl;
        cout << "再計算下一位學生的平均成績(y/n):";
        cin >> check;    // 在變數 check 存入判斷值
    }
    while ( check == 'y' );   // 輸入 'y' 鍵則再計算下一位學生的平均成績
	
    return 0;	
}

