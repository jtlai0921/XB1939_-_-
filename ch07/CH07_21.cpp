#include <iostream>
#include <cstdlib> 
using namespace std;

int main()
{
    char *name[5] =  { "apple", "watermelon", "Banana", "orange","" };
    int i;
 
    for ( i = 0; i < 4; i++ )
    {
        cout<<"name["<<i<<"] ="<<name[i]<<endl;
        cout<<"�Ҧ��Ŷ��G"<<name[i+1]-name[i]<<endl;  //��Ӧ�}�۴�|�o��첾�q 
    }
     
    return 0;
}
