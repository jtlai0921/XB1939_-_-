#include <iostream>    // ��X�J�����Y��
#include <cstdlib>  
using namespace std;
const int MAX_STR = 80;	// �]�w�r����׳̪���80�Ӧr��

int main()
{
    char	name[MAX_STR];
    char	weight[MAX_STR];
    char	height[MAX_STR];
    char	blood[MAX_STR];
    char	birthday[MAX_STR];
    char	ch;
    int		index = 0;
    cout << "�п�J�z���m�W : ";
          
    while(ch != '\n')
    {
        cin.get(ch);			// �ϥ�get(char)���
        name[index] = ch;
		index++;
    }
    name[index] = '\0';// �[�J�r�굲���r��'\0'
    cout << "�п�J�z������ : ";
    cin.get( height, MAX_STR );// �ϥ�get(str, size)���
    cin.ignore( MAX_STR, '\n');	// �M���Ȧs�Ϥ����r��
    cout << "�п�J�z���魫 : ";
    cin.get( weight, '\n' );	// �ϥ�get(str, delimiter)���
    cin.ignore( MAX_STR, '\n');	// �M���Ȧs�Ϥ����r��
    cout << "�п�J�z���嫬 : ";
    cin.get( blood, MAX_STR, '\n' );	// �ϥ�get(str, size, delimiter)���
    cin.ignore( MAX_STR, '\n');	// �M���Ȧs�Ϥ����r��
    cout << "�п�J�z���ͤ� : ";
    cin.getline( birthday, MAX_STR, '\n' );// �ϥ�getline(str, size, delimiter)���
	cout << "�z��J " << cin.gcount() << " �Ӧr��" << endl;	// �ϥ�gcount()���
	cout << endl;
    cout << "�z���m�W�O : " << name;
    cout << "�z�������O : " << height << endl;
    cout << "�z���魫�O : " << weight << endl;
    cout << "�z���嫬�O : " << blood << endl;
    cout << "�z���ͤ�O : "<<birthday<<endl; 
           	 
    return 0;   	 
  }
