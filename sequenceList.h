# include<stdio.h> 
# include<stdlib.h>

//���Ա���������
typedef int* E;

//˳���
struct SequenceList {

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
typedef struct SequenceList* ArrayList;

//��ʼ�����Ա�
_Bool initSequenceList(ArrayList list);

//����Ԫ��
_Bool insertSequenceListElement(ArrayList list, E element, int index);

//ɾ��Ԫ��
_Bool deleteSequenceListElement(ArrayList list, int index);

//��ʾ���Ա���Ϣ
void printSequenceListInfo(ArrayList list);