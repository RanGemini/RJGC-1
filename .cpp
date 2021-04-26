#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
struct node *create(int n)
{
	int i=0;
	struct node *head,*p,*p1;
	head=new node;
	head=NULL;
	p1=new node;
	for(int i=0;i<n;i++)
	{
		p=new node;
		scanf("%d",&p->data);
		p->next=head;
		head=p;
	}
	p1->next=head;
	return p1;
};

void mergelist_L(struct node *&la,struct node *&lb)
{
	struct node *pa,*pb,*pc,*lc;
	pa=la->next;pb=lb->next;
	lc=pc=la;
    while(pa&&pb)
	{
		if(pa->data<=pb->data)
		{
			pc->next=pa;
			pc=pa;
			pa=pa->next;
		}
		else
		{
			pc->next=pb;
			pc=pb;
			pb=pb->next;
		}
	}
	pc->next=pa?pa:pb;
	free(lb);
	printf("The current List is:\n");
	struct node *q;
	for(q=la->next;q->next!=NULL;q=q->next)
	{
	  printf("%d,",q->data);
	}
	printf("%d\n",q->data);
}

int main()
{
	struct node *head1,*head2;
	int n1,n2;
	scanf("%d",&n1);
	head1=create(n1);
	scanf("%d",&n2);
	head2=create(n2);
	mergelist_L(head1,head2);
	return 0;
}

