#include <iostream>    
#include <cstdlib>                             
#include <iomanip> 
using namespace std;                                   

int main()
{
    int num;
    while(1)
    {
        cout<<endl<<"�п�J����ơG";
        cin>>num;
        if(!cin)                                        //��J���O�r��
        {
            cout<<"��J���O�r���A��ƫ��A���šI"<<endl;
            break;
        }
        else if(num<1)                                  //��J�����O�����
        {
            cout<<"��J���O��ơA�����O����ơI"<<endl;
            cin.clear(ios::failbit);                    //�]�wfailbit
        }
        else if(cin.good())                             //��J���O�����
            cout<<"��J���O����ơI"<<endl;
        cin.clear();
    }
    return 0;                                           //���`�����{��
}
