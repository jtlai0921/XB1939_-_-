#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    char a='0', a_Array[5]={'a','b','c','d','e'};     //�w�q�r�����A�ܼ� a �P�r���}�C a_Array 
    int b=100, b_Array[5]={5,4,3,2,1};    //�w�q��ƫ��A�ܼ� b �P��ư}�C b_Array 
    float c=120.5, c_Array[5]={44.54,23.88,1211.56,0.9,100.4};
    //�w�q�B�I�ƫ��A�ܼ� c �P�B�I�ư}�C c_Array 
    
    cout<<"�r�����A: "<<sizeof(a)<<" �줸�� a_Array�r���}�C:"<<sizeof(a_Array)
     <<" �줸�� "<<endl;
    //��� a_Array ���Ϊ��O����Ŷ� 
    cout<<"��ƫ��A: "<<sizeof(b)<<" �줸�� b_Array�r���}�C:"<<sizeof(b_Array)
     <<" �줸�� "<<endl;
    // ��� b_Array ���Ϊ��O����Ŷ� 
    cout<<"�B�I�Ƽƫ��A: "<<sizeof(c)<<" �줸�� c_Array�r���}�C:"<<sizeof(c_Array)
     <<" �줸�� "<<endl;
    // ��� c_Array ���Ϊ��O����Ŷ� 

    return 0; 
}
