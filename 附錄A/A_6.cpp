#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    time_t now;
    struct tm *local,*gmt;//�ŧilocal���c�ܼ� 
    now = time(NULL);//���o�t�Υثe�ɶ�  
    
    cout<<now<<"��"<<endl;
    cout<<"�{�b�ɶ�:ctime():"<<ctime(&now)<<endl;//�ର�@��ɶ��榡 
    local = localtime(&now);
    cout<<"���a�ɶ�:asctime():"<<asctime(local)<<endl;//�ର�@��ɶ��榡 
    gmt = gmtime(&now);//���o��L�ªv�ɶ� 
    cout<<"��L�ªv�ɶ��G"<<asctime(gmt)<<endl;

    return 0;
}
