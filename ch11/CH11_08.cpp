#include<iostream>
#include<cstdlib>
using namespace std;
	
// 宣告類別stclass
class stclass
{
	private:
		int item;
	public:
		void set_item(int v1)
		{
            this->item=v1;
		}
		int get_item()
		{
			return item;
      	}
};
	// 宣告類別score
class score
{
	private:
		int math;
		int lang;
	public:
		void set_math(int math)
		{
			this->math=math;
		}
		int get_math()
		{
			return math;
		}
		void set_lang(int lang)
		{
			this->lang=lang;
			
		}
		int get_lang()
		{
			return lang;
		}
};
	// 宣告類別student，並分別以public型別繼承類別stclass及score
class student : public stclass,public score
{
	private:
		int sum;
	public:
		student() // 建構子
		{
			int sum=0;
		}
		void show_no()
		{
			// 存取類別stclass的成員資料item
			cout << "班級為:第" << get_item() << "班" << endl;
		}
		void show_score()
		{
			// 存取類別score的成員資料lang及math
			cout << "國文成績為:" << get_lang() << endl;
			cout << "數學成績為:" << get_math() << endl;
		}
		void add1()
		{
			// 將成員資料sum的值指定為類別成員資料lang及math的加總後的值
			sum=get_lang()+get_math();
			cout << "總成績為:" << sum << endl;
		}
};
	// 主函數
int main()
{
    // 宣告物件st1;
	student st1;
	int s1,s2;
	// 呼叫類別stclass的成員函數set_item
	st1.set_item(2);
	cout << "請輸入國文成績:";
	cin >> s1;
	// 呼叫類別score的成員函數set_lang
	st1.set_lang(s1);
	cout << "請輸入數學成績:";
	cin >> s2;
	// 呼叫類別score的成員函數set_math
	st1.set_math(s2);
	cout << "===========================================" << endl;
	// 呼叫類別student的成員函數show_score
	st1.show_no();
	st1.show_score();
	// 呼叫類別student的成員函數add1
	st1.add1();
		
	return 0;
}
