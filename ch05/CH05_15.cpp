#include <iostream>  
#include <cstdlib>  
using namespace std;

void Increase_ByVal(int);  
void Increase_ByRef(int&);  

int main()  
{  
    int index =2;  
    cout << "���W�e�D�{���̪� index �ȡG" << index << endl;  
    Increase_ByVal(index); 
    cout << "�ǭȩI�s�л��W��D�{���̪� index �ȡG" << index << endl; 
    Increase_ByRef(index);  
    cout << "�ǰѦҩI�s�л��W��D�{���̪� index �ȡG" << index << endl; 
  
    return 0; 
}  
void Increase_ByVal(int index) 
{  
    index++;   
}  
void Increase_ByRef(int& index)  
{  
    index++;  
}
