#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    char arr2[50];
    int i,sum;
    cout << "�п�J�r��G";
    cin >> arr2;   //���o�ϥΪ̿�J���r��
    for (i=0;i<50;i++)
    {
        if (arr2[i]=='\0')
            break; //�p�G�O�ϥΪ̿�J�r�ꪺ�����N���_�j��
        sum=i;//�����Ŧr���e�@�Ӧr��������
    }
    for (i=sum;i>=0;i--)     //�N�ϥΪ̿�J�r��ϦV��X 
        cout << arr2[i]; 
    cout <<endl;	
   
    return 0;
}
