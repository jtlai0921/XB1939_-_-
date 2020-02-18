template<typename T >
class Stack 
{  // �w�q�@�ӦW��Stack�����O
	public:
	   Stack( int = 5 );    // �w�q�غc�l�A�ë��w�j�p��5
	   ~Stack() { delete [] stackPtr; } // �w�q�Ѻc�l
	   bool push( const T& ); // �ΨӱN�@�Ӥ�����b�襤
	   bool pop( T& );        // �ΨӦ۰��|�����X�@�Ӥ���
	private:
	   int size;             // �w�q���|���������Ӽ�
	   int top;              // �ΨӥN���ݤ�������m
	   T *stackPtr;          // �ΨӥN����|������
	
	   bool isEmpty() const; // �ΨӧP�_�O���|�O�_�Ū�
	   bool isFull() const;  // �ΨӧP�_���|�O�_����
};
	
	// �w�]���|���j�p��5
template< typename T >
Stack< T >::Stack( int s ) // �N������ƪ��w�q�P���O�˪����d�򵲦X�_��
{
    size = s > 0 ? s : 5;  
    top = -1;               // �w�]���|�O�Ū�
    stackPtr = new T[ size ]; // �w�露���ӼƨӰt�m�Ŷ�
}
	
	// �w�q�������push
	// �\��G�N������b���|��
	// ���p�i�H���\�a�N������m�b���|���A�h�Ǧ^true
	// ���p�L�k���\�a�N������m�b���|���A�h�Ǧ^flase
template< typename T >
bool Stack< T >::push( const T &pushValue )
{
	    if ( !isFull() )  // �P�_���|�����Ŷ��O�_�w��
	    {
	       stackPtr[ ++top ] = pushValue; // �N������m�b���|��
	       return true;  // ���\��m�b���|���A�Ǧ^true
        }
	return false;     // �L�k���\��m�b���|���A�Ǧ^flase
}
	
	// �w�q�������pop
	// �\��G�۰��|�����X����
	// ���p�i�H���\�a�۰��|�����X�A�h�Ǧ^true
	// ���p�L�k���\�a�۰��|�����X�����A�h�Ǧ^flase
template< typename T > 
bool Stack< T >::pop( T &popValue )
{
	if ( !isEmpty() ) {
        popValue = stackPtr[ top-- ];  // �۰��|�����X����
	    return true;  // ���\�۰��|�����X�����A�Ǧ^true
    }
	return false;     // �L�k�۰��|�����X�����A�Ǧ^false
}
	
	// �w�q�������isEmpty
	// �\��G�ΨӧP�_���|�O�_����
template< typename T > 
bool Stack< T >::isEmpty() const
{
	return top == -1;	// �Y���šA�Ǧ^��-1
}
	
	
	// �w�q�������isFull
	// �\��G�ΨӧP�_���|�O�_����
template< typename T > 
bool Stack< T >::isFull() const
{
	return top == size - 1;	
}
