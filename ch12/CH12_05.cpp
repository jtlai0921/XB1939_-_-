#include <iostream>
#include <cstdlib>
using namespace std;
	
#include "CH12_05.h"  // 將我們所定義的類版樣版include進來
	
int main()
{
    Stack< int > intStack;  // 建立int型別的物件intStack
    int i = 1; // 設定第一個元素值
    cout << "\n----將元素放置在堆疊中------\n";
	
    while ( intStack.push( i ) )  // 若成功地將元素放置在堆疊中，傳回true
    { 
	    cout << i << ' '; // 顯示放置在堆疊中的元素值
	    ++i; // 將元素值加1
    }
	
    cout << "\nSorry!! 堆疊已滿"<< "\n堆疊內共有:"<<i-1<<"個\n";
    cout << "\n--現在開始將堆疊中的元素清除--\n";
	
    while ( intStack.pop( i ) )  // 若成功地自堆疊中取出元素，傳回true
        cout << i << ' ';  // 顯示被取出的元素值
	
    cout << "\n--堆疊現已清空--\n";
	
	
    Stack< double > doubleStack( 3 );  //  建立double型別的物件doubleStack
    int i1 = 0; // 用來計算元素個數
    double f = 2.3; // 設定第一個元素值
    cout << "\n\n\n-- 將元素放置在堆疊中 --\n";
	
    while ( doubleStack.push( f ) )  // 若成功地將元素放置在堆疊中，傳回true
    { 
        cout << f << ' ';   // 顯示放置堆疊中的元素值
        f += 1.2;        // 將元素值加1.2
        ++i1;
    }
	
    cout << "\nSorry!! 堆疊已滿"<< "\n堆疊內共有:"<<i1<<"個\n"; 
    cout << "\n--現在開始將堆疊中的元素清除--\n";
	
    while ( doubleStack.pop( f ) )  // 若成功地自堆疊中取出元素，傳回true
        cout << f << ' '; // 顯示被取出的元素值
	
    cout << "\n--堆疊現已清空--\n";
	   
    return 0;	 
}
