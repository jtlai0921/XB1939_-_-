#include <iostream>  
#include <cstdlib> 
using namespace std;
  
class Circle  
{  
    private:  
        const static double PI;  
        int radius;  
    public:  
        static int counter;  
   
        Circle(int r)  
        {  
            radius = r; 
            counter++;  
        }  
        static int getCounter()
        { return counter; }//getCounter宣告為靜態成員函數。
};  
const double Circle::PI = 3.1415926535;  
int Circle::counter = 0;  
 
int main()  
{  
    Circle::counter = 5;
    cout<<Circle::getCounter()<<endl;  
    Circle::counter = 7;  
    cout<<Circle::getCounter()<<endl;  
    Circle c1(3);  
    cout<<c1.getCounter()<<endl; 
    
    return 0; 
}
