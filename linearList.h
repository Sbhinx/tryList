# include<stdio.h> 
# include<stdlib.h>

//���Ա���������
typedef int* E;

//˳���
struct linearList {

	//��������Ϊ�洢ý��
	//E array[10];

	//ֱ����ָ��ָ���ڴ�ķ�ʽ
	E* array;

	//������
	int capacity;

	//��ǰ���ڵ�Ԫ������
	int size;



};

//arraylist��ָ��struct List��ָ��
typedef struct linearList* ArrayList;

//��ʼ�����Ա�
_Bool initList(ArrayList list);

//����Ԫ��
_Bool insertListElement(ArrayList list, E element, int index);

//ɾ��Ԫ��
_Bool deleteListElement(ArrayList list, int index);

//��ʾ���Ա���Ϣ
void printListInfo(ArrayList list);