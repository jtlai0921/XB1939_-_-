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
        cout<<"所佔空間："<<name[i+1]-name[i]<<endl;  //兩個位址相減會得到位移量 
    }
     
    return 0;
}
