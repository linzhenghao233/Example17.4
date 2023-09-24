/* films3.c -- 使用抽象数据类型（ADT）风格的链表 */
/* 与list.c一起编译 */
#include <stdio.h>
#include <stdlib.h>
#include "list.h"
void showmovies(Item item);
char* s_gets(char* st, int n);
int main(void) {
	list movies;
	Item temp;

	/* 初始化 */
	InitializeList(&movies);
	if (ListIsFull(&movies)) {
		fprintf(stderr, "No memory available! Bye!\n");
		exit(1);
	}

	/* 获取用户输入并储存 */
	puts("Enter first movie title:");
}