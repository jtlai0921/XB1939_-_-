#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	float Num1;               // 宣告並設定float變數的值
	double Num2;              // 宣告並設定double變數的值
	long double Num3=3.144E10;     // 宣告並設定 long double變數的值
	Num1=1.742f;
	Num2=4.1592;

	cout << "Num1 的值：" << Num1 << endl   // 輸出變數內容及長度大小
		 << "長度大小：" << sizeof(Num1)  
		 << " Byte" << endl << endl;
	cout << "Num2 的值：" << Num2 << endl   // 輸出變數內容及長度大小
		 << "長度大小：" << sizeof(Num2) 
		 << " Byte" << endl << endl;
	cout << "Num3 的值：" << Num3 << endl   // 輸出變數內容及長度大小
		 << "長度大小：" << sizeof(Num3) 
		 << " Byte" << endl;
		 
    return 0;
}

