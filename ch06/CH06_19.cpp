#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    char Name[5][10]={"John",  
 					"Mary",    
 					"Wilson",
 					"Candy",
  					"Allen"};//�r��}�C���ŧi 
    int i,j;
   
    for(i=0;i<5;i++)	
    {
        j=0;
        while	(Name[i][j]!='\0')
            j++;
        cout<<"Name["<<i<<"]="<<Name[i]<<" ���׬�:"<<j<<"�줸"<<endl;    //�L�X�r��}�C���e 
    }
   
    cout<<endl;
   
    return 0;
}

