# include<stdio.h> 
# include<stdlib.h>

//线性表数据类型
typedef int* E;

struct doublyListNode {

	//该节点保存的元素
	E element;

	//指向下一个节点的指针
	struct doublyListNode* nextNode;
	//指向上一个节点的指针
	struct doublyListNode* prevNode;


};

// 别名
typedef struct doublyListNode* p_doublyListNode;

//初始化双向链表
void initDoublyList(p_doublyListNode node);

//插入操作
_Bool insertDoublyList(p_doublyListNode node, int index, E element);



