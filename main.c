#include <stdio.h>
#include <stdlib.h>
#include "linearList.h"


//主程序
int main() {

	//初始化线性表
	struct linearList list;

	if (initList(&list)) {
		for (int i = 0; i <= 20; ++i)
			insertListElement(&list, i, i);
		printListInfo(&list);
	}
	else {
		printf("顺序表初始化失败，无法启动程序！");
	}

	//插入操作
	insertListElement(&list, 12365464, 5);
	printListInfo(&list);

	//删除操作
	deleteListElement(&list, -1);
	printListInfo(&list);

}