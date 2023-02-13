#include<stdio.h>
#include<stdlib.h>
 
typedef struct Node {
	int value;
	struct Node* next;
} Node;
 
typedef struct{
	Node* Last;
	int size;
} Stack;
 
int top(Stack S){
	if(size == 0){
		return -1;
	}
	return S.Last->value;
}
 
void pop(Stack* S){
	if(S->size == 0){
		return;
	}
	Node* tmp = S->Last->next;
	free(S->Last);
	S->Last = tmp;
	S->size--;
}
 
void push(Stack* S, int value){
	Node* tmp = (Node*)malloc(8);
	tmp->value = value;
	if(S->size ==0){
		tmp->next = nullptr;
	}else{
		tmp->next = S->Last;	
	}
	S->Last = tmp;
	S->size++;
}
 
//code:
//pastebin.com/x8TEyE71 
//task:
//pastebin.com/cFm8ehQR 
 
 
