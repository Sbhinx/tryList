# include<stdio.h> 
# include<stdlib.h>
# include"doublyLinkedList.h"


void initDoublyList(p_doublyListNode node) {

	//��ʼ������Ȼ�����Ұָ��
	node->nextNode = node->prevNode = NULL;

}

_Bool insertDoublyList(p_doublyListNode node, int index, E element) {
	/*
		�������
		params��
			p_doublyListNode node
			int index
			E element
		return
			�Ƿ�ɹ�

	*/

	//�ж����������Ƿ�Ϸ�

	//�жϲ����λ���Ƿ���������֮ǰ
	if (index < 1) {
		printf("����Ԫ��ʱ:�����λ��̫С��\n");
		return 0;
	}
	//�жϲ����λ���Ƿ���֮��
	while (--index) {	//ͨ��--index�ķ�ʽ�������Ѱ��Ҫ����Ԫ��λ�õ�ǰһ���ڵ�

		//���Ѱ�ҽڵ�
		node = node->nextNode;


		if (node == NULL) {
			printf("����Ԫ��ʱ:�����λ�ù���\n");
			return 0;
		}

	}
	//�����µĽڵ�
	p_doublyListNode newNode = malloc(sizeof(struct doublyListNode));

	//�ж��Ƿ�ɹ������ڴ�
	if (newNode == NULL) {
		printf("�����µĽڵ�ʱ:�����ڴ�ʧ��!\n");
		return 0;
	}

	//���ڵ㸳ֵ
	newNode->element = element;

	newNode->nextNode = node;

	newNode->prevNode = node->prevNode;


	//�ж��䲻����
	if (node->nextNode) {
		node->nextNode->prevNode = newNode;

	}
	else {
		//printf("���ӽڵ�ʱ:��̽ڵ㲻����,������һ�ַ�ʽ���롣\n");
	}
	node->nextNode = newNode;



	return 1;

}


