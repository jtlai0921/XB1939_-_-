#include <iostream>                             
#include <cstdlib> 
using namespace std;

int main()
{
    bool error=true;
    char str[13]="Good Morning"; //�ŧi�@�Ӧr���}�C���x�s�r��
    cout<<"cout 1: "<<str<<endl; //��X�r��ܿù��e��
    if(error)
    {
        cerr<<"cerr 1: �{��������~�I"<<endl; //��X���~�T��
        cerr<<"cerr 2: �{��������~�I"<<endl; //��X���~�T��
        clog<<"clog 1: �{��������~�O���I\n"; //��X���~����O��
        clog<<"clog 2: �{��������~�O���I\n"; //��X���~����O��
    }
    cout<<"cout 2: �}�l�M���w�İ�..."<<endl;
    clog.flush(); //�M���w�İ�
    
    return 0;  //���`�����{��
}
