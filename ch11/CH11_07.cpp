#include<iostream>
#include<cstdlib>
using namespace std;
	
// 宣告類別student
class student
{
	private:
		int math;
	public:
		// 成員函數set_math：指定成員資料math的值
		void set_math(int v1)
		{
			math=v1;
		}
		// 成員函數show_data：將成員資料math顯示在螢幕上
		void show_data()
		{
			cout << "math=" << math << endl;
		}
	};
	// 以public型別自類別student來繼承
class s1:public student
{
	public:
		double math;
		void set_math(double a1)
		{
			math=a1;
		}
		void show_math()
		{
			cout << "math=" << math << endl;
		}
};
	// 主函數
int main()
{
    // 宣告物件st1
    s1 st1;
    // 指定衍生類別內的成員資料math的值為12.35
    st1.set_math(12.35);
    // 呼叫基礎類別的成員函數show_data，將基礎類別的成員資料math顯示在螢幕上
    // 因為基礎類別的成員資料math並沒有指定初值，因此會顯示無法預期的值
    st1.show_data();
    // 呼叫衍生類別的成員函數show_data，將衍生類別的成員資料math顯示在螢幕上
    st1.show_math();
		
    return 0;
}
