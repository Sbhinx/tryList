#include <stdio.h>
#include <stdlib.h>



typedef int* E;

//顺序表
struct List {

	//用数组作为存储媒介
	//E array[10];

	//直接用指针指向内存的方式
	E* array;

	//表容量
	int capacity;

	//当前表内的元素数量
	int size;

};

//arraylist是指向struct List的指针
typedef struct List* ArrayList;

_Bool initList(ArrayList list) {
	/*
		初始化list
		params:
			list: 指向实例化后的 struct List 的指针
		return:
			初始化结果
	
	*/

	//分配内存
	list->array = malloc(sizeof(E) * 10);

	//判断申请内存失败的情况
	if(list->array == NULL){
		return 0;
	}

	//初始化容量
	list->capacity = 10;

	//初始化元素数量
	list->size = 0;

	//正常情况
	return 1;
}



//主程序
int main() {

	struct List list;
	//ArrayList list;

	if (initList(&list)) {
		printf("表初始化成功\n");
	}
	else {
		printf("表初始化失败\n");
	}

	printf("%d\n", list.capacity);


}






