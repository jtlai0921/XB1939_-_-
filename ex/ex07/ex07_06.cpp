#include <iostream>
#include <cstdlib>
using namespace std;

 int main()
 {
     int *no[3];//�ŧi���а}�C,��no[0],no[1],no[2]����ƫ���  
     int num1[]={ 15,23,31 };
     int num2[]={ 114,225,336 };
     int num3[]={ 1237,3358,9271 };
     int i,j;
     
     no[0]=num1; // ���Vnum1�}�C 
     no[1]=num2;//���Vnum2�}�C 
     no[2]=num3;// ���Vnum3�}�C  
     
     for(i=0;i<3;i++)
     {
      printf("num%d�}�C�������e=",i+1); 
      for(j=0;j<3;j++)
       {
       cout<<*(no[i]+j)<<'\t';//�Q�Ϋ��а}�C�ӿ�X 
       }
      cout<<endl;
      cout<<"-------------------------------------"<<endl;
      }
            
     
     return 0;
}
