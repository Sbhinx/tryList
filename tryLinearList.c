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
		printf("初始化线性表时:申请内存失败!\n");
		return 0;
	}

	//初始化容量
	list->capacity = 10;

	//初始化元素数量
	list->size = 0;

	//正常情况
	return 1;
}

_Bool insertListElement(ArrayList list, E element, int index) {

	/*

		线性表插入操作

		params: 
			ArrayList list:操作的线性表
			E element: 插入的元素
			int index: 插入的位置(这个是位序从1开始)(index:索引)

	*/

	//判断是否需要扩容
	if (list->size == list->capacity) {
		//扩容1.5倍数
		int newCapacity = list->capacity + (list->capacity >> 1);
		//重新分配
		E* newArray = realloc(list->array, (sizeof(E) * newCapacity));
		if (newArray == NULL) {
			printf("扩容线性表时:申请内存失败!\n");
			return 0;
		}
		
		//应用更改
		list->array = newArray;
		list->capacity = newCapacity;
		printf("线性表已扩容至:%d\n", newCapacity);

	}


	//判断插入的位置是否合法
	if (index < 1 || index > list->size + 1) {
		printf("插入线性表时:插入的位置无效！\n");
		return 0;
	}

	//把插入位置的元素以此后移，然后插入空位
	for (int i = list->size; i > index - 1; i--) {

		//把i位置的元素赋予i-1位置的值，即实现移动
		list->array[i] = list->array[i - 1];	
	}

	//把新的元素填进空位（他这里是数组的顺序从0开始)
	list->array[index - 1] = element;
	
	//元素数量自增
	list->size++;
	return 1;
}

_Bool deleteListElement(ArrayList list, int index) {
	/*
		删除线性表某个位置中的元素
		param：
			ArrayList list:线性表
			int index:要删除元素的位序
		return:
			是否操作成功

	*/

	//判断删除元素的位序是否合法(仅[1,size)有效)
	if (index < 1 || index > list->size) {
		printf("删除元素时:位序无效！\n");
		return 0;
	}

	//将需要的元素用后面的元素覆盖即可，后续依次进行删除
	for (int i = index - 1; i < list->size; i++) {
		
		list->array[i] = list->array[i + 1];

	}
	//对size进行更新
	list->size--;
	return 1;
}

void printListInfo(ArrayList list) {             //编写一个函数用于打印表当前的数据
	
	printf("当前线性表的内容为:\n");
	for (int i = 0; i < list->size; ++i) {   //表里面每个元素都拿出来打印一次
		
		printf("%d ", list->array[i]);

	}
	printf("\n");
	printf("当前线性表的元素量为:%d\n", list->size);
	printf("当前线性表的容量为:%d\n", list->capacity);

}


//主程序
int main() {

	struct List list;
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
	deleteListElement(&list, 5);
	printListInfo(&list);

}






