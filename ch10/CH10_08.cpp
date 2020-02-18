#include <iostream>  
#include <cstdlib> 
#include <cmath>          // ���Jcmath���Y��  
using namespace std;
 
class Coordinate              // Coordinate���O�A�Ψӭp�⥭���y�Э��n 
{  
    int X1,X2,Y1,Y2;            // X1,X2,Y1,Y2���O�N�����y���I  
    public:  
        Coordinate(){X1=X2=Y1=Y2=0;} // Coordinate���O���غc�l  
        // �N���O������l�Ƭ� 0 
        Coordinate(int Tmp_X1,int Tmp_X2,int Tmp_Y1,int Tmp_Y2) 
        {  
            X1=Tmp_X1;  // Coordinate���O���غc�l  
            X2=Tmp_X2;  // �̾ڶǤJ�Ȫ�l�����O������  
            Y1=Tmp_Y1;  
            Y2=Tmp_Y2;  
        } 
       bool operator > (Coordinate t3);      // �h���j��(>)���Y�B��l���  
       void Display()                     // ������O���������e  
       { 
            cout << "(" << X1 << ", " << X2
            << ", " << Y1 << ", " << Y2<< ")" << endl;  
   	   }  
};  

bool Coordinate::operator > (Coordinate Tmp) 
{     
    double Area1,Area2;  
    Area1=fabs((X1-X2)*(Y1-Y2));   // �p��I�s���󥻨������n  
    Area2=fabs((Tmp.X1-Tmp.X2)*(Tmp.Y1-Tmp.Y2));  // �p��Tmp���󪺭��n  
    if (Area1 > Area2)  
        return (true);  
    else  
        return (false);  
}  

int main()  
{  
    Coordinate Area1(10,-2,14,20);  
    Coordinate Area2(5,18,3,-9);  
    cout << "Area1���y��(X1,X2,Y1,Y2)�p�U�G" << endl; 
    Area1.Display();                  // ���Area1�����e  
    cout << "Area2���y��(X1,X2,Y1,Y2)�p�U�G" << endl;  
    Area2.Display();                  // ���Area1�����e  
    cout << endl << "���n������G�G" << endl;  
    if (Area1 > Area2)                // �I�s�j��h���B��l���  
     	cout << "Area1�����n�j��Area2" << endl;  
    else  
        cout << "Area1�����n�p��Area2" << endl; 
        
    return 0; 
}
