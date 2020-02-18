#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    
    int i,array1[5]={100,200,300,400,500};
    int *p1;
      
    p1=&array1[4];  // 指向陣列第五個元素
    i=0;
    for(i=0;i<5;i++)
    {
        cout << "目前指標變數p1的位址為:" << p1 << endl;
        cout << "目前指標變數p1所指向的值為：" << *p1 << endl;
        cout << "=============================================" << endl;
		p1-=1; 
    }

    return 0;
}
