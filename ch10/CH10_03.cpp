#include<iostream>
#include<cstdlib>
using namespace std;
	
// �ŧi���OScore
class Score
{
	public:
		int var1;    // �w�q�ܼ�var1
	};
	
	// �ŧi>>�B��l�h��
	istream& operator>>(istream& inputvar,Score& s1)
	{
	    cout << "�п�J�@�ӼƭȡG";
		inputvar >> s1.var1;
		return inputvar;
	}
	
	// �ŧi<<�B��l�h��
	ostream& operator<<(ostream& outputvar,Score& s1)
	{
		cout << "��J���Ȭ��G";
		outputvar << s1.var1 << endl;
		return outputvar;
	}
	
int main()
{
    Score st1;   // �w�qScore������st1
    cin >> st1;  // �ϥΦh��>>�B��l�ӿ�J�@���ܼƭ�
    cout << st1; // �ϥΦh��<<�B��l����ܤ@���ܼƭ�
		
    return 0;
}
