#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
	int coeff;
	int power;
	struct node*next;
};
typedef struct node*poly;
poly p,p1,p2,p3;

poly create(poly);
poly findlast (poly);
poly add_poly(poly ,poly);
poly add(poly,poly);
void display(poly);

poly create (poly p)
{
	poly newnode,q;
	int i, n, coeff, power;
	printf("Enter the no of terms: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("Enter coeff %d: ",i+1);
		scanf("%d",&coeff);
		printf("Enter power %d: ",i+1);
		scanf("%d",&power);
		newnode = (poly) malloc(sizeof(struct node));
		newnode->coeff=coeff;
		newnode->power=power;
		newnode->next=NULL;
		if(p==NULL)
		{
			newnode->next=p;
			p=newnode;
		}
		else
		{
			q= findlast(p);
			q->next = newnode;
		}
	}
	return p;
}

poly add_poly(poly p1, poly p2)
{
	poly ptr1, ptr2, ptr3, newnode;
	ptr3 = NULL;
	ptr1 = p1;
	ptr2 = p2;
	while(ptr1!=NULL && ptr2!=NULL)
	{
		newnode = (poly)malloc(sizeof(struct node));
		if(ptr1->power == ptr2->power)
		{
			newnode->coeff = ptr1->coeff+ptr2->coeff;
			newnode->power = ptr1->power;
			newnode->next = NULL;
			ptr1=ptr1->next;
			ptr2=ptr2->next;
		}
		else if(ptr1->power>ptr2->power)
		{
			newnode->coeff=ptr1->coeff;
			newnode->power=ptr1->power;
			newnode->next=NULL;
			ptr1=ptr1->next;
		}
		else
		{
			newnode->coeff=ptr2->coeff;
			newnode->power=ptr2->power;
			newnode->next=NULL;
			ptr2=ptr2->next;
		}
		ptr3=add(ptr3,newnode);
	}
	return ptr3;
}

poly sub_poly(poly p1, poly p2)
{
	poly ptr1, ptr2, ptr3, newnode;
	ptr3 = NULL;
	ptr1 = p1;
	ptr2 = p2;
	while(ptr1!=NULL && ptr2!=NULL)
	{
		newnode = (poly)malloc(sizeof(struct node));
		if(ptr1->power == ptr2->power)
		{
			newnode->coeff = ptr1->coeff-ptr2->coeff;
			newnode->power = ptr1->power;
			newnode->next = NULL;
			ptr1=ptr1->next;
			ptr2=ptr2->next;
		}
		else if(ptr1->power>ptr2->power)
		{
			newnode->coeff=ptr1->coeff;
			newnode->power=ptr1->power;
			newnode->next=NULL;
			ptr1=ptr1->next;
		}
		else
		{
			newnode->coeff=ptr2->coeff;
			newnode->power=ptr2->power;
			newnode->next=NULL;
			ptr2=ptr2->next;
		}
		ptr3=add(ptr3,newnode);
	}
	return ptr3;
}

poly diff_poly(poly p)
{
	poly ptr1,newnode,ptr3;
	ptr3 = NULL;
	ptr1 = p;
	while(ptr1!=NULL)
	{
		newnode = (poly)malloc(sizeof(struct node));
		newnode->coeff=ptr1->coeff*ptr1->power;
		newnode->power=ptr1->power-1;
		ptr1=ptr1->next;
		ptr3=add(ptr3,newnode);
		return ptr3;
	}
}

poly add(poly p, poly newnode)
{
	poly l;
	if(p == NULL)
	{
		newnode->next=p;
		p=newnode;
	}
	else
	{
		l=findlast(p);
		l->next=newnode;
	}
	return p;
}

poly findlast(poly p)
{
	poly ptr2;
	ptr2=p->next;
	while(p->next !=NULL)
	{
		p=p->next;
	}
	return p;
}

void display(poly p)
{
	poly ptr1;
	ptr1 = p->next;
	while(p!=NULL)
	{
		printf("%dx^%d",p->coeff,p->power);
		p=p->next;
		if(p!=NULL)
		{
			printf(" + ");
		}
		else
		{
			printf("\n");
		}
	}
	
}

main()
{
	int ch;
	do
	{
		printf("Polynomial implementation using linked list\n");
		printf("1)Enter two polynomials\n2)Add the polynomials\n3)Subtract the polynomials\n");
		printf("4)Differentiate 1st polynomial\n5)Differentiate 2nd polynomial\n6)Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Polynomial 1:\n");
				p1= create(p1);
				printf("The first polynomial entered is: \n");
				display(p1);
				printf("Polynomial 2:\n");
				p2 = create(p2);
				printf("The second polynomial entered is: \n");
				display(p2);
				break;
			case 2:
				p3=add_poly(p1,p2);
				printf("The added polynomial result is:\n");
				display(p3);
				break;
			case 3:
				p3=sub_poly(p1,p2);
				printf("The subtracted polynomial result is:\n");
				display(p3);
				break;
			case 4:
				p3=diff_poly(p1);
				printf("The differentiation of first polynomial is: \n");
				display(p3);
				break;
			case 5:
				p3=diff_poly(p2);
				printf("The differentiation of second polynomial is:\n");
				display(p3);
				break;
		}
	}while(ch<6);
	return 0;
}
