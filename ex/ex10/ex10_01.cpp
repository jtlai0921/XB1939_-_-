 #include <iostream>  
 #include <cstdlib>
 using namespace std;
 
 class IsZero         // �ŧi�@�� IsZero���O  
  // �D�n�@�άO�ΨӧP�_�����ȬO�_�j�󵥩�0  
  {   
      int Num;          // �ŧi���O��Ʀ��� 
      public:  
        IsZero(int n)        // �ŧi���O�غc�l  
       	{  
          Num=n;            // �Y�إߪ���ɦ����w��l��  
       	}                   // �N�N��l�ȫ��w������Num  
       	 IsZero()  
        {  
       	  Num=-1;         // �Y�إߪ���ɨS�����w��l��  
        }              // �N�۰ʱNNum�]�w��-1  
        bool operator !();         // �h���@���B��l !  
   };  
    bool IsZero::operator ! ()      // ��@�B��l���  
    {  
        if (Num >= 0)  
         return true;          // �p�G��Ʀ������Ȥj�󵥩�0�A�N�Ǧ^true  
        else  
         return false;          // �_�h�Ǧ^false  
    }  
    int main()  
     {  
        IsZero Num1(3);          // �إ�IsZero���O������  
       	if (!Num1)               // �I�s�h���B��l ! 	
               cout << "Num1 �j�󵥩� 0" << endl;  
        else  
               cout << "Num1 �p�� 0" << endl; 
         
         
         return 0; 
     }
               
               
               
               
               
               
