#include <iostream>  
#include <cstdlib>  
using namespace std;

class Circle  
{  
    private:  
        const static double PI; 
        static int counter;  
        int radius; 
    public:  
    Circle(int r) 
    { 
        radius = r; 
        counter++;  
    }  
    double Area(){ return PI*radius*radius; }  
    int getCounter(){ return counter; }  
};  
const double Circle::PI = 3.1415926535;//�b���O�~���]�w�`��PI�����
int Circle::counter = 0;  //�b���O�~���]�w�R�A��Ʀ���counter�����

int main() 
{  
    Circle c1(3);  
    cout<<"[c1�����n] = "<<c1.Area()<<endl;  
    Circle c2(5);  
    cout<<"[c2�����n] = "<<c2.Area()<<endl;
    cout<<"[��c1���Xcounter���]�@�� "<<c1.getCounter()<<" �Ӷ�"<<endl;  
    cout<<"[��c2���Xcounter���]�@�� "<<c2.getCounter()<<" �Ӷ�"<<endl; 
  
    return 0;
}
