#include <iostream>  
#include <cstdlib> 
using namespace std;

struct Test       // 定義結構  
{ 
    int Age; 
    char Name[20];
};   // 宣告一個結構陣列  
 
int main()  
{  
    Test T1[3]={ {20,"王義信"},{32,"張明青"},{33,"林華一"}}; 
    Test *pt2=T1;      // 宣告指向T1的結構指標 
    int i;  
  
    for(i=0;i<3;i++)
    {
        cout<<pt2->Age<<'\t';
        cout<<pt2->Name;
        cout<<endl;
        pt2++;
    }
  
    return 0;
}
