#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])//�R�O�C�޼ƶǻ��ŧi 
{
    int i;
    if( argc == 1 )//�u���{���W��,�S���Ѽ�  
        printf( "�����w�ѼơI" );
    else
    {
        cout<<"�ҿ�J�ȫȦW���`��:"<<argc-1<<"�H"<<endl; 
        cout<<"--------------------------------"<<endl;
        cout<<"�C�L�X�����Ȧ�Ϊ��ȫȦW��G"<<endl;
        cout<<"--------------------------------"<<endl;
        for( i = 1; i < argc; i++ )
             cout<<argv[i]<<endl;//�C�L argv�}�C�����e 
    }
    
    return 0;
}
