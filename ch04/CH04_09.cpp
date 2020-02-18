#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int Score;      // 定義整數變數 Score，儲存學生成績
    cout << "輸入學生的分數:";
    cin >> Score;       // 取得學生成績
    if ( (Score > 100) || (Score < 0) )   // 判斷是否介於 0 到 100 之間
        cout << "輸入的分數不在0到100分之間!!";    // 超出範圍則顯示錯誤訊息
    else if ( Score == 100 )             // 判斷是否滿分(100)
        cout << "居然考到滿分，真是優秀!";
    else if ( Score >= 90 )	      // 判斷是否高於 90 分
        cout << "真可惜，只差一點就滿分了!";
    else if ( Score >= 80 )       // 判斷是否高於 80 分
        cout << "分數還滿不錯的，再稍微用點心!";
    else if ( Score >= 70 )      // 判斷是否高於 70 分
        cout << "成績不是很理想，加油點!";
    else if ( Score >= 60 )             // 判斷是否高於 60 分
        cout << "真糟，快要不及格囉!";
    else              // 低於60分
        cout << "哇塞.... 連 60 分都考不到喔!";
        cout << endl;        // 換行
    
    return 0;
}

