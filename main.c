#include <stdio.h>
#include <stdlib.h>
#include "linearList.h"
#include "linkedList.h"


//������
int main() {


	/*
	//��ʼ�����Ա�
	struct linearList list;

	if (initLinearList(&list)) {
		for (int i = 1; i <= 20; ++i)
			insertLinearListElement(&list, i, i);
		printLinearListInfo(&list);
	}
	else {
		printf("˳����ʼ��ʧ�ܣ��޷���������");
	}

	//�������
	insertLinearListElement(&list, 12365464, 5);
	printLinearListInfo(&list);

	//ɾ������
	deleteLinearListElement(&list, -1);
	printLinearListInfo(&list);

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
	deleteLinkedListElement(&head, 100);
	printLinkedListInfo(&head);
	return 1;
}