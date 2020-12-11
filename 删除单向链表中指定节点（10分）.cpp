#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* create(void){
	struct node *p,*pre,*head;
	//head=new struct node;
	head=(struct node*)malloc(sizeof(struct node));
	head->next=NULL;
	pre=head;
	int x;
	scanf("%d",&x);
	while(x!=0){
		//p=new struct node;
		p=(struct node*)malloc(sizeof(struct node));
		p->data=x;
		p->next=NULL;
		pre->next=p;
		pre=p;
		scanf("%d",&x);
	}
	return head;
}
void deletekey(int a,struct node* p){
	while(p->next!=NULL){
		if(p->next->data==a)p->next=p->next->next;
			else p=p->next;
	}
}
int main(){
	struct node* L=create();
	int key;
	scanf("%d",&key);
	deletekey(key,L);
	L=L->next;
	while(L!=NULL){
		printf("%d",L->data);
		L=L->next;
	}
	return 0;
}
