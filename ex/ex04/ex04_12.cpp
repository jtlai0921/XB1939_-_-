#include <iostream>
#include <cstdlib>

using namespace std;
		
int main()
{
	int year=0;	 
     //�ŧi����ܼ�
	cout<<"�п�J�褸�~:";
	cin>>year;  //��J�褸�~ 
	if(year % 4 !=0)	 //�p�Gyear���O4������
	   cout<<year<<"�~���O��~"<<endl; //�h���year���O��~
	else if(year % 100 ==0)  //�p�Gyear�O100������
        {
            if(year % 400 ==0)      //�Byear�O400������
	   			 cout<<year<<"�~�O��~"<<endl; 
               //���year�O��~
			else      
	   			 cout<<year<<"�~���O��~"<<endl;
            //�h���year���O��~
		}	
    else  
         cout<<year<<"�~�O��~"<<endl;//���year�O��~
    
    
    return 0;
}
