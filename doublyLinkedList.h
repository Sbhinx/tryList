# include<stdio.h> 
# include<stdlib.h>

//���Ա���������
typedef int* E;

struct doublyListNode {

	//�ýڵ㱣���Ԫ��
	E element;

	//ָ����һ���ڵ��ָ��
	struct doublyListNode* nextNode;
	//ָ����һ���ڵ��ָ��
	struct doublyListNode* prevNode;


};

// ����
typedef struct doublyListNode* p_doublyListNode;

//��ʼ��˫������
void initDoublyList(p_doublyListNode node);

//�������
_Bool insertDoublyList(p_doublyListNode node, int index, E element);



