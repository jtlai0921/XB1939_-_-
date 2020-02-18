#include <iostream>  
#include <cstdlib>  
using namespace std;

class Share  
{  
    friend void GlobalFunc(Share& s);  
    private:  
        int a;  
        void printA(){ cout<<"使用Share的private方法"<<endl; }  
    protected:  
        int b;  
        void printB(){ cout<<"使用Share的protected方法"<<endl; }  
    public:  
        int c;  
        void printC(){ cout<<"使用Share的public方法"<<endl; }  
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
  Share sh;  //宣告一個Share型態的物件sh
  GlobalFunc(sh);  //以物件sh為參數傳入GlobalFunc函數

  return 0;
}
