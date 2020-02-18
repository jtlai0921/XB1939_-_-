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
		};
};
	// 以public型別自類別student來繼承
class s1:public student
{
	public:
		// 覆寫基礎類別show_data成員函數
		void show_data()
		{
			cout << "覆寫基礎類別成員函數" << endl;
		}
};
	// 主函數
int main()
{
    // 宣告物件st1
    s1 st1;
    // 呼叫類別s1的成員函數show_data，而不是類別student的成員函數show_data
    st1.show_data();
		
    return 0;
}
