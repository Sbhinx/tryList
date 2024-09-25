# include<stdio.h> 
# include<stdlib.h>
# include"linkedList.h"


void initLinkedList(listNode head) {
	/*
		初始化链表
	*/
	head->nextNode = NULL;

}

_Bool insertLinkedListElement(listNode head, E element, int index) {
	/*
		插入元素到链表
		param:
			listNode head: 链表表头节点
			E element: 要插入的元素
			int index: 要插入的位置
		return:
			是否将元素插入
	*/

	//判断插入的位置是否合法

	//判断插入的位置是否在链表长度之前
	if (index < 1) {
		printf("插入元素时:插入的位置太小！\n");
		return 0;
	}
	//判断插入的位置是否在之后
	while (--index) {	//通过--index的方式不断向后寻找要插入元素位置的前一个节点

		//向后寻找节点
		head = head->nextNode;
		
		
		if (head == NULL) {
			printf("插入元素时:插入的位置过大！\n");
			return 0;
		}
		
	}

	//创建一个新的节点(用于存放要插入的元素)
	listNode newNode = malloc(sizeof(struct listNode));
	
	//判断是否成功申请内存
	if (newNode == NULL) {
		printf("创建新的节点时:申请内存失败!\n");
		return 0;
	}

	//重新链接各节点

	//将元素放入节点newNode
	newNode->element = element;
	//将newNode指向下一个节点的指针，设置为head节点原有指向的节点
	newNode->nextNode = head->nextNode;
	//将head节点指向下一个节点的指针设置为指向newNode
	head->nextNode = newNode;

	return 1;
	
}

_Bool deleteLinkedListElement(listNode head, int index) {
	/*
		删除链表中的元素
		param:
			listNode head: 要操作的链表的头节点
			int index: 要操作的元素的位置
		return:
			是否操作成功
	*/

	//判断index是否合法
	if (index < 1) {
		
		printf("删除元素时:删除元素的位置过小!\n");
		return 0;

	}
	//找到待删除节点的前一个节点
	while (--index) {
		//移动
		head = head->nextNode;

		//判断是否过大
		if (head->nextNode == NULL) {
			printf("删除元素时:删除元素的位置过大！\n");
			return 0;
		}
	}

	//获取待删除的节点
	listNode tmp = head->nextNode;
	//将指针正确的链接
	head->nextNode = head->nextNode->nextNode;
	//释放内存
	free(tmp);
	
	return 1;
}

E* getLinkedListElement(listNode head, int index) {
	/*
		访问链表某个位置的元素
		param:
			listNode head:被访问链表的头节点
			int index:被访问链表的位置
		return:
			指向被访问元素的指针
	*/

	//判断访问的位置是否合法
	if (index < 1) {
		printf("访问链表时:访问位置非法！\n");
		return NULL;
	}
	
	//找到访问的节点
	do {

		//printf("%d", index);

		head = head->nextNode;

		//检查head是否超出链表
		if (head == NULL) {
			printf("访问链表时:访问位置超出！\n");
			return NULL;
		}
		

	} while (--index);
	//返回节点对应的值
	return head->element;

}

int findLinkedListElement(listNode head, E element) {
	/*
		查找链表中第一次出现某元素的位置
		param:
			listNode head:被查找的链表的头节点
			E element;查找的元素
		return:
			该元素第一次出现时的位置
	*/

	//先移动到第一个节点
	head = head->nextNode;
	//计数器
	int i = 1;
	//开始查找
	while (head) {

		
		//找到了即可返回
		if (head->element == element) {
			return i;
		}
		head = head->nextNode;
		i++;
	}
	printf("未查找到链表中包含指定元素！\n");
	return -1;
}

int caculateLinkedListSize(listNode head) {
	/*
		计算链表的长度
		param:
			listNode head
		return:
			长度
	*/

	//计数器
	int lenth = 0;
	while (head!= NULL) { //也是利用NULL停止循环
		
		lenth++;
		head = *head->nextNode;
		
	}

	return lenth;
}



void printLinkedListInfo(listNode head) {

	//打印链表
	while (head->nextNode) {
		head = head->nextNode;

		printf("%d ", head->element);

	}
	printf("\n");
	//打印链表长度
	printf("该链表的长度为:%d", caculateLinkedListSize(&head));

}