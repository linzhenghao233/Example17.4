/* films3.c -- ʹ�ó����������ͣ�ADT���������� */
/* ��list.cһ����� */
#include <stdio.h>
#include <stdlib.h>
#include "list.h"
void showmovies(Item item);
char* s_gets(char* st, int n);
int main(void) {
	list movies;
	Item temp;

	/* ��ʼ�� */
	InitializeList(&movies);
	if (ListIsFull(&movies)) {
		fprintf(stderr, "No memory available! Bye!\n");
		exit(1);
	}

	/* ��ȡ�û����벢���� */
	puts("Enter first movie title:");
}