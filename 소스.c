#define _CRT_SECURE_NO_WARNINGS
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
	int data;
	struct NODE* next;
}NODE;

NODE* head = NULL;
NODE* tail = NULL;

void enqueue(int n) {
	NODE* list = (NODE*)malloc(sizeof(NODE));
	list->data = n;
	list->next = NULL;

	if (head == NULL)
		head = list;
	else
		tail -> next = list;

	tail = list;

}

void dequeue() {
	if (head == NULL) {
		printf("Queue is empty\n");
		return;
	}
	NODE* delete = head;

	head = head->next;

	free(delete);

	printf("complete\n");
}

void print() {
	if (head == NULL) {
		printf("Queue is empty\n");
		return;
	}
	NODE* print = head;
	while (print != NULL) {
		printf("%d ", print->data);
		print = print->next;
	}

	printf("\n");
}

void clear() {
	if (head == NULL) {
		printf("Queue is empty\n");
		return;
	}
	NODE* next = head;
	NODE* delete = next;
	while (next != NULL) {
		next = next->next;
		free(delete);
		delete = next;
	}

	head = NULL;
	printf("complete\n");
}

void end() {
	if (head == NULL) {

	}
	else {
		NODE* next = head;
		NODE* delete = next;
		while (next != NULL) {
			next = next->next;
			free(delete);
			delete = next;
		}
	}

	printf("system over");
	return;
}

int main() {

	int choice, num;

	while (1) {
		printf("1. enqueue, 2. dequeue, 3. print, 4. clear, 0. terminate: ");
		scanf("%d", &choice);
		

		switch (choice) {

		case 1:
			printf("num: ");
			scanf("%d", &num);	
			
			enqueue(num);
			break;
		case 2:
			dequeue();
			break;
		case 3:
			print();
			break;
		case 4:
			clear();
			break;
		case 0:
			end();
			exit(0);
		}
	}
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
	int data;
	struct NODE* next;
}NODE;

NODE* head = NULL;
NODE* tail = NULL;

void push(int n) {
	NODE* list=(NODE*)malloc(sizeof(NODE));
	list->data = n;
	list->next = NULL;
	if (head == NULL) {
		head = list;
	}
	else {
		list->next = head;
		head = list;
	}
}

void pop() {
	if (head == NULL) {
		printf("Stack is empty\n");
		return;
	}
	NODE* delete=head;
	head = head->next;

	free(delete);
	printf("complete\n");
}

void print() {
	if (head == NULL) {
		printf("Stack is empty\n");
		return;
	}
	NODE* list = head;
	while (list != NULL) {
		printf("%d\n", list->data);
		list = list->next;
	}
}

void clear() {
	if (head == NULL) {
		printf("Stack is empty\n");
		return;
	}

	NODE* delete = head;
	NODE* next = delete;

	while (delete != NULL) {
		next = delete->next;
		free(delete);
		delete = next;
	}
	head = NULL;

	printf("complete\n");
}

void end() {
	NODE* delete = head;
	NODE* next = delete;

	while (delete != NULL) {
		next = delete->next;
		free(delete);
		delete = next;
	}

	printf("system over");
}

int main() {
	int choice;
	int num;

	while (1) {
		printf("1. push, 2. pop, 3. print, 4. clear, 0. terminate: ");
		scanf("%d", &choice);

		switch (choice) {

		case 1:
			printf("num: ");
			scanf("%d", &num);

			push(num);
			break;
		case 2:
			pop();
			break;
		case 3:
			print();
			break;
		case 4:
			clear();
			break;
		case 0:
			end();
			exit(0);
		}
	}
}
*/