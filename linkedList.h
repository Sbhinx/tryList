# include<stdio.h> 
# include<stdlib.h>

//���Ա���������
typedef int* E;

struct listNode {

	//�ýڵ㱣���Ԫ��
	E element;

	//ָ����һ���ڵ��ָ��
	struct listNode* nextNode;


};

//����
typedef struct listNode* listNode;

//��ʼ������
void initLinkedList(listNode head);

//����Ԫ��
_Bool insertLinkedListElement(listNode head, E element, int index);

//ɾ��Ԫ��
_Bool deleteLinkedListElement(listNode head, int index);

//����Ԫ��
E* getLinkedListElement(listNode head, int index);

//����Ԫ�ض�Ӧ������
int findLinkedListElement(listNode head, E element);

//������ĳ���
int caculateLinkedListSize(listNode head);

//��ӡ������Ϣ
void printLinkedListInfo(listNode head);

