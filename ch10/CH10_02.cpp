#include <iostream>  
#include <cstdlib>   
using namespace std;

class Matrix     // �p��x�}�ۥ[���ۭq���O  
{  
    int Matrix_Num[2][2];      // �]�w2x2���x�} 
    public:  
        Matrix() 
        {  
            int i,j; 
            for (i=0; i<2; i++) 
                for(j=0; j<2; j++)  
                    Matrix_Num[i][j]=0; // Matrix�x�}���غc
            // ������l�Ƭ�0  
        }  
        Matrix(int Tmp_a1, int Tmp_a2, int Tmp_b1, int Tmp_b2)  
        {  
            Matrix_Num[0][0]=Tmp_a1;    // Matrix�x�}���غc�l  
            Matrix_Num[0][1]=Tmp_a2;    // ��l�Ʈ榡��  
            Matrix_Num[1][0]=Tmp_b1;   // |a1  a2|  
            Matrix_Num[1][1]=Tmp_b2;   // |b1  b2|  
        }  
        void Set_Info(int Tmp_a1, int Tmp_a2, int Tmp_b1, int Tmp_b2)  
        {  
            Matrix_Num[0][0]=Tmp_a1;  // �]�wMatrix�x�}�����e  
            Matrix_Num[0][1]=Tmp_a2;  
            Matrix_Num[1][0]=Tmp_b1;  
            Matrix_Num[1][1]=Tmp_b2;  
        }  
        Matrix operator +(Matrix t2);  // �h�����w�B��l+����ƫŧi  
        // �ó]�w�Ǧ^���A��Matrix���O���A  
        void ShowInfo();         // �ŧi��ܯx�}���e����ƭ쫬�ŧi  
 };  
Matrix Matrix::operator +(Matrix t2)  
{  
    int i,j; 
    Matrix MatOut;  
    for (i=0; i<2; i++)  
        for (j=0; j<2; j++)  
            MatOut.Matrix_Num[i][j]=Matrix_Num[i][j]+t2.Matrix_Num[i][j]; // �z�L�j��p��x�}�ۥ[�����G 
        return (MatOut);  
}  
void Matrix::ShowInfo()  
{  
    int i,j;  
    for (i=0; i<2; i++) 
        for (j=0; j<2; j++)  
            cout << Matrix_Num[i][j] << "\t";  // �z�L�j��p��x�}�ۥ[�����G  
        cout << endl;  
}  
int main()  
{  
    Matrix M1,M2,M3; 
    int a1,a2,b1,b2;  
    cout << "�п�JM1�x�}���ȡG";  
    cin >> a1 >> a2 >> b1 >> b2; 
    M1.Set_Info(a1,a2,b1,b2);  // �I�sSet_Info()��Ƴ]�wM1�x�}  
    cout << "�п�JM2�x�}���ȡG";  
    cin >> a1 >> a2 >> b1 >> b2;    
    M2.Set_Info (a1,a2,b1,b2); // �I�sSet_Info()��Ƴ]�wM2�x�}  
    cout << endl;  
    cout << "M1�x�} + M2 �x�}�����G���G" << endl;  
    M3 = M1 + M2;   // �I�s�h���B��l+�p��x�}�ۥ[�����G  
    M3.ShowInfo();  // �I�sShowInfo()�����ܯx�}���e  
  
    return 0;
}
