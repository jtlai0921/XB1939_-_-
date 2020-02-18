#include <iostream>
#include <cstdlib>
using namespace std;

template <class Type>	 // �w�q�쵲��C�����`�I
struct Node
{
    Type data;	// �������
    Node* next;// �����U�@���`�I����}
};
template <class Type>
class LinkedList	// �쵲��C���O
{
    private:
        Node<Type>* first; // ����Ĥ@�Ӹ`�I������
    public:
        LinkedList()  // �غc�l
        {
            first = NULL;
        }
        void addNode(Type data);	// �[�J�`�I
        void display(); // ��ܩҦ����`�I23	
};
template<class Type>
void LinkedList<Type>::addNode(Type data)
{
    Node<Type>* newNode = new Node<Type>;	// �s�W�@�Ӹ`�I
    newNode->data = data;		// �������
    newNode->next = first;		// ����e�@�Ӹ`�I
    first = newNode;			// ����s���`�I
}
template<class Type>
void LinkedList<Type>::display()
{
    Node<Type>* currentNode = first; // �ѲĤ@�Ӹ`�I�}�l���
    while( currentNode != NULL )
    {
        cout << currentNode->data << " -> ";
	    currentNode = currentNode->next;
    }
}

int main()
{
    LinkedList<double> dblList;	    // �إߤ@���x�sdouble���A��ƪ��쵲��C
    double num;	// ������J�����
    char ch;	// �����ϥΪ̪����
    	do{
            cout << endl <<"�п�J�@�ӼƦr : ";
            cin >> num;
            dblList.addNode( num );
            cout << "�~���J(y / n)?";
            cin >> ch;
        }while( ch != 'n' );
    cout << endl;
    dblList.display(); // ��ܩҦ������
    cout << endl << endl;
      
    return 0;
}
