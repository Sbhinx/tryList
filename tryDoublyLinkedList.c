# include<stdio.h> 
# include<stdlib.h>
# include"doublyLinkedList.h"


void initDoublyList(p_doublyListNode node) {

	//初始化，不然给你个野指针
	node->nextNode = node->prevNode = NULL;

}

_Bool insertDoublyList(p_doublyListNode node, int index, E element) {
	/*
		插入操作
		params：
			p_doublyListNode node
			int index
			E element
		return
			是否成功

	*/

	//判断索引长度是否合法

	//判断插入的位置是否在链表长度之前
	if (index < 1) {
		printf("插入元素时:插入的位置太小！\n");
		return 0;
	}
	//判断插入的位置是否在之后
	while (--index) {	//通过--index的方式不断向后寻找要插入元素位置的前一个节点

		//向后寻找节点
		node = node->nextNode;


		if (node == NULL) {
			printf("插入元素时:插入的位置过大！\n");
			return 0;
		}

	}
	//创建新的节点
	p_doublyListNode newNode = malloc(sizeof(struct doublyListNode));

	//判断是否成功申请内存
	if (newNode == NULL) {
		printf("创建新的节点时:申请内存失败!\n");
		return 0;
	}

	//给节点赋值
	newNode->element = element;

	newNode->nextNode = node;

	newNode->prevNode = node->prevNode;


	//判断其不存在
	if (node->nextNode) {
		node->nextNode->prevNode = newNode;

	}
	else {
		//printf("链接节点时:后继节点不存在,采用另一种方式插入。\n");
	}
	node->nextNode = newNode;



	return 1;

}


