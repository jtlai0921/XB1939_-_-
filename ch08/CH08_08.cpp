#include <iostream>  
#include <cstdlib> 
using namespace std;

struct Test       // �w�q���c  
{ 
    int Age; 
    char Name[20];
};   // �ŧi�@�ӵ��c�}�C  
 
int main()  
{  
    Test T1[3]={ {20,"���q�H"},{32,"�i���C"},{33,"�L�ؤ@"}}; 
    Test *pt2=T1;      // �ŧi���VT1�����c���� 
    int i;  
  
    for(i=0;i<3;i++)
    {
        cout<<pt2->Age<<'\t';
        cout<<pt2->Name;
        cout<<endl;
        pt2++;
    }
  
    return 0;
}
