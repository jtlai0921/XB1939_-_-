#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int N1, N2, N3, max;      // 定義變數，max 用來存放最大值與輸出
    cout << "請輸入第一個數字：";    // 輸入欲作比較的 3 個數值
    cin >> N1;
    cout << "請輸入第二個數字：";
    cin >> N2;
    cout << "請輸入第三個數字：";
    cin >> N3;
    max=N1 > N2 ? N1 : N2;     // 使用 ?: 條件運算子作最大值的比較
    max=max > N3 ? max : N3;
    cout << endl;      // 換行    
    cout << N1 << ", " << N2 << ", " << N3 << "之中的最大數為：" << max;
    cout << endl;
    
    return 0;
}

