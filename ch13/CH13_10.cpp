#include <iostream>  // ��X�J�����Y��
#include <cstdlib>
using namespace std;

const int MAX_STR = 80;		// �]�w�r����׳̪���80�Ӧr��
int main()
{
    int	year;
    char	name[MAX_STR];
    cout << "�п�J�z���~�� : ";
    cin >> year;				// �N��L��J����Ʃ���ܼƤ�
    cout << "�п�J�z���m�W : ";
    cin >> name;				// �N��L��J����Ʃ���ܼƤ�
    cout << endl;
    cout << "�z���~�֬O : " << year << endl;
    cout << "�z���m�W�O : " << name << endl;
    cout << endl;
  
    return 0;
}
