// �\��G�N�^��r���ഫ�j�p�g
#include <iostream>
#include <cstdlib>
using namespace std;
void toUpper(char*);  // �r����j�g 
void toLower(char*);  // �r����p�g 
int main()
{
    char str[80];
    cout<<"�п�J�@�^��r��G";
    cin>>str;
    toUpper(str);
    cout<<"�r����j�g�G "<<str<<endl;
    toLower(str);
    cout<<"�r����p�g�G "<<str<<endl; 
	    
    return 0;
}
// �޼ơG�ǻ��r��  
// ���G�G�p�g��j�g 
void toUpper( char *str )
{
    int i = 0;
	int length;
	while ( str[i] != '\0' )
	    i++;
	length = i;
	for( i = 0; i < length; i++ )
	    if ( *(str+i) > 96 && *(str+i) < 123 )
	        *(str+i) = *(str+i) - 32;
}
// �޼ơG�ǻ��r�� 
// ���G�G�j�g��p�g 
void toLower( char *str )
{
    int i = 0;
    int length;
    // �p��}�C���� 
    while ( str[i] != '\0' )
        i++;
    length = i;
    for( i = 0; i < length; i++ )
        if ( *(str+i) > 64 && *(str+i) < 91 )
            *(str+i) = *(str+i) + 32;
}
