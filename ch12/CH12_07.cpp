#include <iostream>
#include <cstdlib>
using namespace std;

template <class Type> // �w�q�쵲��C�����`�I
struct Node
{
    Type data;	// �������
    Node* next;// �����U�@���`�I����}
};
template <class Type>
class LinkedList	// �쵲��C���O
{
    private:
        Node<Type>* first;	    // ����Ĥ@�Ӹ`�I������
    public:
        LinkedList()	// �غc�l
        {
            first = NULL;
        }
        void addNode(Type data); // �[�J�`�I
        void display();	// ��ܩҦ����`�I23	
};
template<class Type>
void LinkedList<Type>::addNode(Type data)
{
    Node<Type>* newNode = new Node<Type>;	// �s�W�@�Ӹ`�I
    newNode->data = data;			// �������
    newNode->next = first;		// ����e�@�Ӹ`�I
    first = newNode;			// ����s���`�I
}
template<class Type>
void LinkedList<Type>::display()
{
    Node<Type>* currentNode = first;    // �ѲĤ@�Ӹ`�I�}�l���
    while( currentNode != NULL )
    {
        cout << currentNode->data << " -> ";
	    currentNode = currentNode->next;
    }
}

class person	// �w�qperson���O
{
    protected:
        char name[10];			// �����m�W
        int height;				// ��������
        int weight;				// �����魫
    public:	// �h���^���B��l >>,�ëŧi���B�ͨ��
        friend istream& operator >> (istream& is, person& p);
        // �h�����J�B��l <<,�ëŧi���B�ͨ��
        friend ostream & operator << (ostream& os, const person& p);
};
istream& operator >> (istream& is, person& p) // �w�q�h���^���B��l
{	// �N��ƿ�J��person����
    cout << "�п�J�m�W : ";
    cin >> p.name;
    cout << "�п�J���� : ";
    cin >> p.height;
    cout << "�п�J�魫 : ";
    cin >> p.weight;
    return is;
}
ostream & operator << (ostream& os, const person& p) // �w�q�h�����J�B��l <<
{	// ��Xperson���󤤪����
    cout << endl << "�m�W : " << p.name;
    cout << endl << "���� : " << p.height;
    cout << endl << "�魫 : " << p.weight;
    cout << endl; 
    return os;
}

int main()
{
    LinkedList<person> psnList;	// �إߤ@���x�sperson���O���A��ƪ��쵲��C
    person psn;	// �ŧiperson����
    char ch;	// �����ϥΪ̪����
    do{
        cin >> psn;	// �ϥΦh���B��l>>��Jperson���O���
        psnList.addNode( psn );	// �Nperson����[�J�쵲��C��
        cout << "�~���J(y / n)?";
        cin >> ch;
        cout << endl;
    }while( ch != 'n' );
    cout << endl;
    psnList.display();	// ��ܦ�C���Ҧ������
    cout << endl << endl;
      
    return 0;
}
