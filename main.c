#include <stdio.h>
#include <stdlib.h>
#include "linearList.h"
#include "linkedList.h"


//主程序
int main() {


	/*
	//初始化线性表
	struct linearList list;

	if (initLinearList(&list)) {
		for (int i = 1; i <= 20; ++i)
			insertLinearListElement(&list, i, i);
		printLinearListInfo(&list);
	}
	else {
		printf("顺序表初始化失败，无法启动程序！");
	}

	//插入操作
	insertLinearListElement(&list, 12365464, 5);
	printLinearListInfo(&list);

	//删除操作
	deleteLinearListElement(&list, -1);
	printLinearListInfo(&list);

	*/

	//初始化链表头节点
	struct listNode head;
	
	//初始化链表
	initLinkedList(&head);

	//插入操作
	for (int i = 1; i <= 10; ++i) {
		insertLinkedListElement(&head, i*100, i);
	}
	printLinkedListInfo(&head);

	//删除操作
	deleteLinkedListElement(&head, 100);
	printLinkedListInfo(&head);
	return 1;
}