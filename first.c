#include<stdlib.h>
#include<limits.h>
#include<math.h>
#include<stdio.h>
////////////////////////////////////////////////////
struct node{
	int data;
	struct node *next;
};
void append(struct node **head,int d){
	struct node *temp=(struct node*)malloc(sizeof(struct node*));
	temp->data=d;
	temp->next=NULL;
	if(*head==NULL){
		*head=temp;
	}
	else{
		struct node *curr=*head;
		while(curr->next!=NULL){
			curr=curr->next;
		}
		curr->next=temp;
	}
}
void print(struct node **head){
	struct node *curr=*head;
	while(curr!=NULL){
		printf("%d->",curr->data);
		curr=curr->next;
	}
	printf("NULL\n");
}

void reverse(struct node *head1,struct node *head2){
	if(head2->next==NULL){
		head2->next=head1;
		return;
	}
	reverse(head1,head1->next);
	head2->next=head1;
}
int main()
{
	////////////////////////////////////////////////////
	{
	freopen("input-java.txt","r",stdin);
	freopen("output-java.txt","w",stdout);
	}
	////////////////////////////////////////////////
	int n;
	scanf("%d",&n);
	struct node **head= (struct node**)malloc(sizeof(struct node**));
	*head=NULL;
	while(n--){
		int d=0;
		scanf("%d",&d);
		append(head,d);
	}
	print(head);
	reverse(*head,(*head)->next);
	print(head);
	
	return 0;
}