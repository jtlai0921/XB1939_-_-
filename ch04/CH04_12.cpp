//²�����p���
 #include <iostream>
 #include <cstdlib>
 
 using namespace std;
 
 int main()
 {
    float a,b;
    char op_key;
    cout<<"�п�J��ӼƦr(�H�ť���Ϲj):";
    cin>>a>>b;
    cout<<"�п�J+,-,*,/��G";
    cin>>op_key;   //��J�r���æs�J�ܼ�op_key
     
    switch(op_key)
    {
        case '+':      //�p�Gop_key����'+'
            cout<<endl<<a<<" "<<op_key<<" "<<b<<"="<<a+b;
            break;      //���Xswitch
        case '-':  //�p�Gop_key����'-'
            cout<<endl<<a<<" "<<op_key<<" "<<b<<"="<<a-b;
            break;   //���Xswitch
        case '*':  //�p�Gop_key����'*'
            cout<<endl<<a<<" "<<op_key<<" "<<b<<"="<<a*b;
            break;           //���Xswitch
        case '/':      //�p�Gop_key����'/'
            cout<<endl<<a<<" "<<op_key<<" "<<b<<"="<<a/b;
            break;                   //���Xswitch
        default:       //�p�Gop_key������ + - * / ����@��
            cout<<"�B�⦡���~\n";     
  	}
    cout<<endl;
    
    return 0;	
  }

