#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    
    int i,array1[5]={100,200,300,400,500};
    int *p1;
      
    p1=&array1[4];  // ���V�}�C�Ĥ��Ӥ���
    i=0;
    for(i=0;i<5;i++)
    {
        cout << "�ثe�����ܼ�p1����}��:" << p1 << endl;
        cout << "�ثe�����ܼ�p1�ҫ��V���Ȭ��G" << *p1 << endl;
        cout << "=============================================" << endl;
		p1-=1; 
    }

    return 0;
}
