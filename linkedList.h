# include<stdio.h> 
# include<stdlib.h>

//线性表数据类型
typedef int* E;

struct listNode {

	//该节点保存的元素
	E element;

	//指向下一个节点的指针
	struct listNode* nextNode;


};

//别名
typedef struct listNode* listNode;

//初始化链表
void initLinkedList(listNode head);

//插入元素
_Bool insertLinkedListElement(listNode head, E element, int index);

//删除元素
_Bool deleteLinkedListElement(listNode head, int index);

//访问元素
E* getLinkedListElement(listNode head, int index);

//查找元素对应的索引
int findLinkedListElement(listNode head, E element);

//求链表的长度
int caculateLinkedListSize(listNode head);

//打印链表信息
void printLinkedListInfo(listNode head);

