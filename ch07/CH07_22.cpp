#include <iostream> 
#include <cstdlib>   
#include <cstring>  
using namespace std;  

int main()  
{  
    char* fruit[5] = {"apple","orange","watermelon","strawberry","pineapple"}; //���G�W��  
    int price[5] = {20,15,55,30,30};  //������  
    char favo[20];  
    cout<<"�w����{�I�W���g���G�M�橱"<<endl;  
    cout<<"==============================="<<endl;  
    cout<<"[apple], [orange], [watermelon]"<<endl;  
    cout<<"[strawberry], [pineapple]"<<endl<<endl; 
    cout<<"�аݱz�Q�R���@�ؤ��G�H ";  
    cin>>favo;     //���o�ϥΪ̿�J���r��  
    for(int i=0;i<5;i++)  
    {  
        if(strcmp(fruit[i],favo) == 0)  //�i��r���� ,�p�G�r��ۦP�N��X  
        //�۹�����������  
   	    cout<<favo<<"�@��O"<<price[i]<<"��"<<endl;    
    }  

    return 0;
}
