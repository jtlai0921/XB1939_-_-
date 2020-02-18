#include<iostream>
#include<cstdlib>
using namespace std;
	
// 宣告類別Score
class Score
{
	public:
		int var1;  // 定義變數var1
		Score()
		{
			var1=9;
		}
		Score(int a)
		{
			var1=a;
		}
		Score operator++(int);  // 必須定義為類別的成員函式
		Score operator--(int);	 // 必須定義為類別的成員函式
};
	
// 宣告++運算子多載
Score Score::operator++(int)
{
	return Score(var1++);
}
	
// 宣告--運算子多載
Score Score::operator--(int)
{
	return Score(var1--);
}
	
int main()
{
	Score st1(3);   // 定義Score的物件st1,有參數
	Score st2;      // 定義Score的物件st2,無參數
		
    cout << "st1=" << st1.var1  << endl;
	cout << "st2=" << st2.var1  << endl;
    st1++;          
	st2--;
	cout<<"--------------------------------------"<<endl;
	// 顯示結果
	cout << "st1=" << st1.var1  << endl;
	cout << "st2=" << st2.var1  << endl;
		
    return 0;
}
