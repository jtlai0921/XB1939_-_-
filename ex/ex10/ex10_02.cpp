 #include <iostream> 
 #include <cstdlib> 
 using namespace std;
 
 class Dollar   // �p��ײv�ഫ���ۭq���O  
 {  
       int NT_Dollar;   // NT_Dollar�N��֦����s�x��  
	   float Exchange_Rate;   // Exchange_Rate���1�����i�I�����x�����  
       public:  
   	     Dollar()            // Dollar���O���غc�l  
          {  
            NT_Dollar=1;  
            Exchange_Rate=40;  
           }  
           Dollar(int Money,float Rate)  // Dollar���O���غc�l  
           {  
            NT_Dollar=Money;  
            Exchange_Rate=Rate;  
           }  
       	friend istream& operator >> (istream& in, Dollar& Tmp_Money);  
      	// >>�B��l���h����ƭ쫬�ŧi�Ain�O��istram���O�ͦ�����J����  
        friend ostream& operator << (ostream& out, Dollar& Tmp_Money);  
        // <<�B��l���h����ƭ쫬�ŧi�Aout�O��ostream���O�ͦ�����X����  
        operator float();          // �h�����A�ഫ�B��Ÿ�����ƭ쫬�ŧi  
        float Get_Rate()  
        {  
         return (Exchange_Rate);  // �Ǧ^�ײv��  
         }  
         };  
         istream& operator >> (istream& in, Dollar& Tmp_Money)  
         {  
           cout << "�п�J1�����i�I�����x���ƶq:";  
           in >> Tmp_Money.Exchange_Rate;     // ���o�ײv��  
           cout << "�п�J�z�n�I�����x���ơG";  
           in >> Tmp_Money.NT_Dollar;        // ���o�n�I�����x�����B  
           return (in);                            // �Ǧ^��J����  
           }  
         ostream& operator << (ostream& out, Dollar& Tmp_Money)  
         {  
          out << Tmp_Money.NT_Dollar << " ��";  
          return (out);             // �Ǧ^��X����  
         }  
         Dollar::operator float () 
         {  
          float US_Dollar;  
          US_Dollar = (float)NT_Dollar / Exchange_Rate;  // �̾ڶײv��p��I�����B  
          return (US_Dollar);                         // �Ǧ^�p�⵲�G  
          }  
          int main()  
           {  
          	 Dollar TWD;  
               float USD;  
               cin >> TWD;       // �I�s�h���B��l>>�]�w���󤺮e  
               USD = (float)TWD;      // �I�s�h�����A�ഫ�B��Ÿ�  
               cout << endl;  
               cout << "�v�פ�(����:�x��) = 1 : " << TWD.Get_Rate() << endl;  
               cout << "�n�I�����x�����B�G" << TWD << endl; // �I�s�h���B��l<<��X���󤺮e  
               cout << "�i�I�������G" << USD << " ��" << endl;  
               
               
               return 0;
           }
