#include<iostream>
#include<cstdlib>
using namespace std;
	
	// �ŧi���OScore
class Score
{
	public:
		int var1;    // �w�q�ܼ�var1
		Score(int a) // �w�q���OScore���غc�l���
		{
			var1=a;
		}
};
	
// �ŧi�[�k�B��l�h��
int operator+(int x,Score s1)
{
    return (x+s1.var1);
}
	
int main()
{
    Score st1(20);  // �w�qScore������st1
    cout << "100 + 20 = " << (100+st1) << endl;  // ��ܬۥ[�᪺���G
		
    return 0;
}

