#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;


int main()
{
    char name[10][10]={"Mary","John","Michael","Helen","Stephen",
                      "Kelly","Deep","Bush","Cherry","Andy"};
    //�ŧi�ó]�w�r��}�C  
    char *name1[10],*temp;//�ŧi�@�����а}�C�Φr������ܼ�  
    int i,j;
 
    cout<<"�Ƨǫe���}�C�G"<<endl;
    for ( i = 0; i < 10; i++ )
    {
        cout<<name[i]<<" ";
        name1[i]=name[i];//���а}�C�������V�r��}�C��}
    }

    for ( i = 0; i < 9; i++ )
        for ( j = i+1; j < 10; j++ )
            if(strcmp(name1[i],name1[j])>0)
            {
                temp=name1[j];
                name1[j]=name1[i];
                name1[i]=temp; //���а}�C����w�Ƨǥ洫�L�{ 
            }
    
    cout<<"\n�Ƨǫ᪺�}�C�G" <<endl;
    for ( i = 0; i < 10; i++ )
        cout<<name1[i]<<" "; //��X�@�����а}�C�����e 
    cout<<endl;
     
    return 0;
}
