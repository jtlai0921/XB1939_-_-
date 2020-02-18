#include <iostream>
#include <cstdlib>
using namespace std;
void strCat(char*, char*);

int main()
{
    char str1[80], str2[80];
    cout<<"¿é¤J¦r¦ê1¡G";
    cin>>str1;
    cout<<"¿é¤J¦r¦ê2¡G";
    cin>>str2;
    cout<<"str1 = "<<str1<<endl;
    cout<<"str2 = "<<str2<<endl;
    strCat(str1, str2);
    cout<<"str1 = "<<str1<<endl;
    cout<<"str2 = "<<str2<<endl;

    
    return 0;
}

void strCat(char* str1, char* str2)
{
    int i, j;
    for(i = 0; str1[i] != '\0'; i++);

    for(j = 0; str2[j] != '\0'; j++)
        str1[i+j] = str2[j];
    str1[i+j] = '\0';
}
