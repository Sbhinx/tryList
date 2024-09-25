#include <stdio.h>
#include <stdlib.h>
#include "SequenceList.h"
#include "linkedList.h"


//������
int main() {


	/*

	//��ʼ�����Ա�
	struct SequenceList list;

	if (initSequenceList(&list)) {
		for (int i = 1; i <= 20; ++i)
			insertSequenceListElement(&list, i, i);
		printSequenceListInfo(&list);
	}
	else {
		printf("˳����ʼ��ʧ�ܣ��޷���������");
	}

	//�������
	insertSequenceListElement(&list, 12365464, 5);
	printSequenceListInfo(&list);

	//ɾ������
	deleteSequenceListElement(&list, -1);
	printSequenceListInfo(&list);

	*/
	
	

	//��ʼ������ͷ�ڵ�
	struct listNode head;
	
	//��ʼ������
	initLinkedList(&head);

	//�������
	
	for (int i = 1; i <= 10; ++i) {
		insertLinkedListElement(&head, i*100, i);
	}
	printLinkedListInfo(&head);

	
	//ɾ������
	deleteLinkedListElement(&head, 5);
	printLinkedListInfo(&head);

	//����Ԫ��
	printf("���ʵ�Ԫ��Ϊ:%d\n",getLinkedListElement(&head, 5));

	//����ĳԪ���ڸ������һ�γ��ֵ�λ��
	E element = 200;
	printf("'%d'�ڸ������һ�γ��ֵ�λ����: %d\n", element,findLinkedListElement(&head, element));

	return 1;
	
}