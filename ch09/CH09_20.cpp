#include <iostream>  
#include <cstdlib>  
using namespace std;

class Share  
{  
    friend void GlobalFunc(Share& s);  
    private:  
        int a;  
        void printA(){ cout<<"�ϥ�Share��private��k"<<endl; }  
    protected:  
        int b;  
        void printB(){ cout<<"�ϥ�Share��protected��k"<<endl; }  
    public:  
        int c;  
        void printC(){ cout<<"�ϥ�Share��public��k"<<endl; }  
  };  
void GlobalFunc(Share& s)  
{  
    s.a = s.b = s.c = 1;  
    cout<<"[a,b,c] = ["<<s.a<<","<<s.b<<","<<s.c<<"]"<<endl;  
    s.printA();  
    s.printB();  
    s.printC();  
}  

int main() 
{  
  Share sh;  //�ŧi�@��Share���A������sh
  GlobalFunc(sh);  //�H����sh���ѼƶǤJGlobalFunc���

  return 0;
}
