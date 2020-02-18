#include <iostream>  
#include <cstdlib>
using namespace std;
  
class Friend1;  //�ŧi���O�쫬 
class Firend2;  

class Share  
{  
    friend class Friend1;  
    friend class Friend2;  
    private:  
        int data;  
    public:  
        Share(){ data = 5; }  
        void setData(int d){ data = d; }  
 };  

class Friend1  
{  
    public:  
        void setShareData1(Share& s,int n){ s.data = n; }  
        int getShareData1(Share& s) const { return s.data; } 
};  
 
class Friend2  
{
    public:  
        void setShareData2(Share& s,int n){ s.data = n; }  
        int getShareData2(Share& s) const { return s.data; }  
};  
int main()  
{  
    Share sh;  //�ŧiShare���A������sh
    Friend1 fd1;  
    Friend2 fd2; //�ŧi��ӪB�����O������fd1�Mfd2
    sh.setData(50);  
    cout<<"data = "<<fd1.getShareData1(sh)<<endl;  
    cout<<"data = "<<fd2.getShareData2(sh)<<endl;  
    fd1.setShareData1(sh,30);  
    cout<<"data = "<<fd2.getShareData2(sh)<<endl;  
    fd2.setShareData2(sh,10);  
    cout<<"data = "<<fd1.getShareData1(sh)<<endl;  
  
    return 0;
}
