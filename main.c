#include <stdio.h>
#include <stdlib.h>
#include "linearList.h"


//������
int main() {

	//��ʼ�����Ա�
	struct linearList list;

	if (initList(&list)) {
		for (int i = 0; i <= 20; ++i)
			insertListElement(&list, i, i);
		printListInfo(&list);
	}
	else {
		printf("˳����ʼ��ʧ�ܣ��޷���������");
	}

	//�������
	insertListElement(&list, 12365464, 5);
	printListInfo(&list);

	//ɾ������
	deleteListElement(&list, -1);
	printListInfo(&list);

}