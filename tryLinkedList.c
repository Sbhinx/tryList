# include<stdio.h> 
# include<stdlib.h>
# include"linkedList.h"


void initLinkedList(listNode head) {
	/*
		��ʼ������
	*/
	head->nextNode = NULL;

}

_Bool insertLinkedListElement(listNode head, E element, int index) {
	/*
		����Ԫ�ص�����
		param:
			listNode head: �����ͷ�ڵ�
			E element: Ҫ�����Ԫ��
			int index: Ҫ�����λ��
		return:
			�Ƿ�Ԫ�ز���
	*/

	//�жϲ����λ���Ƿ�Ϸ�

	//�жϲ����λ���Ƿ���������֮ǰ
	if (index < 1) {
		printf("����Ԫ��ʱ:�����λ��̫С��\n");
		return 0;
	}
	//�жϲ����λ���Ƿ���֮��
	while (--index) {	//ͨ��--index�ķ�ʽ�������Ѱ��Ҫ����Ԫ��λ�õ�ǰһ���ڵ�

		//���Ѱ�ҽڵ�
		head = head->nextNode;
		
		
		if (head == NULL) {
			printf("����Ԫ��ʱ:�����λ�ù���\n");
			return 0;
		}
		
	}

	//����һ���µĽڵ�(���ڴ��Ҫ�����Ԫ��)
	listNode newNode = malloc(sizeof(struct listNode));
	
	//�ж��Ƿ�ɹ������ڴ�
	if (newNode == NULL) {
		printf("�����µĽڵ�ʱ:�����ڴ�ʧ��!\n");
		return 0;
	}

	//�������Ӹ��ڵ�

	//��Ԫ�ط���ڵ�newNode
	newNode->element = element;
	//��newNodeָ����һ���ڵ��ָ�룬����Ϊhead�ڵ�ԭ��ָ��Ľڵ�
	newNode->nextNode = head->nextNode;
	//��head�ڵ�ָ����һ���ڵ��ָ������Ϊָ��newNode
	head->nextNode = newNode;

	return 1;
	
}

_Bool deleteLinkedListElement(listNode head, int index) {
	/*
		ɾ�������е�Ԫ��
		param:
			listNode head: Ҫ�����������ͷ�ڵ�
			int index: Ҫ������Ԫ�ص�λ��
		return:
			�Ƿ�����ɹ�
	*/

	//�ж�index�Ƿ�Ϸ�
	if (index < 1) {
		
		printf("ɾ��Ԫ��ʱ:ɾ��Ԫ�ص�λ�ù�С!\n");
		return 0;

	}
	//�ҵ���ɾ���ڵ��ǰһ���ڵ�
	while (--index) {
		//�ƶ�
		head = head->nextNode;

		//�ж��Ƿ����
		if (head->nextNode == NULL) {
			printf("ɾ��Ԫ��ʱ:ɾ��Ԫ�ص�λ�ù���\n");
			return 0;
		}
	}

	//��ȡ��ɾ���Ľڵ�
	listNode tmp = head->nextNode;
	//��ָ����ȷ������
	head->nextNode = head->nextNode->nextNode;
	//�ͷ��ڴ�
	free(tmp);
	
	return 1;
}

E* getLinkedListElement(listNode head, int index) {
	/*
		��������ĳ��λ�õ�Ԫ��
		param:
			listNode head:�����������ͷ�ڵ�
			int index:�����������λ��
		return:
			ָ�򱻷���Ԫ�ص�ָ��
	*/

	//�жϷ��ʵ�λ���Ƿ�Ϸ�
	if (index < 1) {
		printf("��������ʱ:����λ�÷Ƿ���\n");
		return NULL;
	}
	
	//�ҵ����ʵĽڵ�
	do {

		//printf("%d", index);

		head = head->nextNode;

		//���head�Ƿ񳬳�����
		if (head == NULL) {
			printf("��������ʱ:����λ�ó�����\n");
			return NULL;
		}
		

	} while (--index);
	//���ؽڵ��Ӧ��ֵ
	return head->element;

}

int findLinkedListElement(listNode head, E element) {
	/*
		���������е�һ�γ���ĳԪ�ص�λ��
		param:
			listNode head:�����ҵ������ͷ�ڵ�
			E element;���ҵ�Ԫ��
		return:
			��Ԫ�ص�һ�γ���ʱ��λ��
	*/

	//���ƶ�����һ���ڵ�
	head = head->nextNode;
	//������
	int i = 1;
	//��ʼ����
	while (head) {

		
		//�ҵ��˼��ɷ���
		if (head->element == element) {
			return i;
		}
		head = head->nextNode;
		i++;
	}
	printf("δ���ҵ������а���ָ��Ԫ�أ�\n");
	return -1;
}

int caculateLinkedListSize(listNode head) {
	/*
		��������ĳ���
		param:
			listNode head
		return:
			����
	*/

	//������
	int lenth = 0;
	while (head!= NULL) { //Ҳ������NULLֹͣѭ��
		
		lenth++;
		head = *head->nextNode;
		
	}

	return lenth;
}



void printLinkedListInfo(listNode head) {

	//��ӡ����
	while (head->nextNode) {
		head = head->nextNode;

		printf("%d ", head->element);

	}
	printf("\n");
	//��ӡ������
	printf("������ĳ���Ϊ:%d", caculateLinkedListSize(&head));

}