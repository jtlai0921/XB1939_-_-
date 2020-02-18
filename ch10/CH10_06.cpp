#include <iostream>  
#include <cstdlib> 
using namespace std;
 
class Matrix     // �p��x�}�ۥ[���ۭq���O  
{  
    int Matrix_Num[2][2];  // �]�w2x2���x�}  
    public:  
        Matrix() 
        {  
            int i,j;  
            for (i=0; i<2; i++)  
                for(j=0; j<2; j++)  
                    Matrix_Num[i][j]=0; // Matrix�x�}���غc�l  
                // ������l�Ƭ�0  
        }  
        Matrix(int Tmp_a1, int Tmp_a2, int Tmp_b1, int Tmp_b2)  
        {  
            Matrix_Num[0][0]=Tmp_a1;         // Matrix�x�}���غc�l  
            Matrix_Num[0][1]=Tmp_a2;         // ��l�Ʈ榡��  
            Matrix_Num[1][0]=Tmp_b1;         // |a1  a2|  
            Matrix_Num[1][1]=Tmp_b2;         // |b1  b2|  
        }  
        Matrix operator +=(Matrix t2);       // �h�����w�B��l+=����ƭ쫬�ŧi  
        // �ó]�w�Ǧ^���A��Matrix���O���A  
        friend istream& operator >> (istream& in, Matrix& Tmp_Mat);  
        // >>�B��l���h����ƭ쫬�ŧi�Ain�O��istram���O�ͦ�����J����  
        friend ostream& operator << (ostream& out, Matrix& Tmp_Mat);  
        // <<�B��l���h����ƭ쫬�ŧi�Aout�O��ostream���O�ͦ�����X����  
};  
Matrix Matrix::operator +=(Matrix t2)  
{  
    int i,j;  
    for (i=0; i<2; i++)  
        for (j=0; j<2; j++)  
            Matrix_Num[i][j] += t2.Matrix_Num[i][j];  // �z�L�j��p��x�}�ۥ[�����G  
            // |a1 a2| |a3 a4| |a1+a3  a2+a4|  
            // |b1 b2|+|b3 b4|=|b1+b3  b2+b4|  
    return (*this);  
}  
istream& operator >> (istream& in, Matrix& Tmp_Mat)  
{  
    int i,j;  
    for (i=0; i<2; i++)  
        for (j=0; j<2; j++)  
            in >> Tmp_Mat.Matrix_Num[i][j];   // �z�L�j��]�w���O���������  
    return (in);                               // �Ǧ^��J����  
}  
ostream& operator << (ostream& out, Matrix& Tmp_Mat) 
{  
    int i,j; 
    for (i=0; i<2; i++)  
        for (j=0; j<2; j++)  
            out << Tmp_Mat.Matrix_Num[i][j] << " ";  // �z�L�j��]�w���O���������  
        cout << endl;  
    return (out);   // �Ǧ^��X����  
}  
int main()  
{  
    Matrix M1,M2;  
    cout << "�п�JM1�x�}���ȡG";  
    cin >> M1;  // �I�s�h���B��l>>�]�w���󤺮e  
    cout << "�п�JM2�x�}���ȡG";  
    cin >> M2;  // �I�s�h���B��l>>�]�w���󤺮e  
    M1 += M2;   // �I�s�h���B��l+=  
    cout << endl;  
    cout << "M1+=M2 �x�}�᪺M1�x�}���G���G" <<M1<< endl;   // �I�s�h���B��l<<��X���󤺮e  
 
    return 0;
}
