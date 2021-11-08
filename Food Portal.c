#basic front end work in c
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
	char burger[50];
	char grill[50];
	int price;
};
struct node food[10];

struct node1
{
	char first_name;
	char last_name;
	char phone_no;
	char user_id;
	char password;
	struct node* next;
};
typedef struct node1* account;
account top=NULL;

void init_food()
{
	strcpy(food[1].burger, "Veg Zinger Burger");
	food[1].price = 130;
	strcpy(food[2].burger, "Chicken Zinger Burger");
	food[2].price = 150;
	strcpy(food[3].burger, "Krunchy Burger");
	food[3].price = 160;
	strcpy(food[4].grill, "Hot & Crispy/Smoky Grill (2pc)");
	food[4].price = 189;
	strcpy(food[5].grill, "Hot & Crispy/Smoky Grill (4pc)");
	food[5].price = 360;
	strcpy(food[6].grill, "Hot & Crispy/Smoky Grill (6pc)");
	food[6].price = 525;
	strcpy(food[7].grill, "Hot & Crispy/Smoky Grill (8pc)");
	food[7].price = 630;
}

void order(int price)
{
	int ch, confirm;
	printf("-----Order-----");
	printf("Your total amount is %d\n", price);
	printf("Do You wish to order? (y=1/n=0):");
	scanf("%d", &ch);
	if (ch == 1)
	{
		printf("Thank You for your order!!\n");
		printf("Your Food is on the way!!\n");
		printf("Welcome again!!\n");
		exit(1);
	}
	else if (ch == 0)
	{
		printf("Do You want to exit - 1 or");
		printf("Go back - 0\n");
		printf("Enter your choice: \n");
		scanf("%d", &confirm);
		if (confirm == 1)
		{
			printf("Oops! Your order is cancelled!!\n");
			printf("Exiting..\n");
			printf("Thank You visit again!\n\n");
			printf("Moving to login portal");
		}
		else
		{
			printf("---Thank You---\n");
		}
	}
	else
	{
		printf("Please Enter the correct choice\n");
	}
}

void food_portal()
{
	int choice, total;
	int choice2;
	int qty = 0;
	init_food();
	do
	{
		printf("List of food category\n");
		printf("1)%s\n2)%s\n3)%s\n4)%s\n5)%s\n6)%s\n7)%s\n8)Place order\n",food[1].burger,food[2].burger,food[3].burger,food[4].grill,food[5].grill,food[6].grill,food[7].grill);
		printf("Enter your choice: \n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
			{
				printf("Confirm Veg Zinger Burger (2 pc) added to cart?");
				printf("Enter\nYES: 1\nNO: 2\n");
				scanf("%d", &choice2);
				if (choice2 == 1)
				{
					printf("Enter no of quantity: \n");
					scanf("%d", &qty);
					total = total + (qty*food[1].price);
					printf("Added Veg Zinger Burger of quantity %d\n",qty);
					printf("Continue Browsing the list\n");
				}
				else
				{
					printf("Cancelled Veg Zinger Burger\n");
					printf("Continue Browsing the list\n");
				}
				break;
			}
			
			case 2:
			{
				printf("Confirm Chicken Zinger Burger (2 pc) added to cart?");
				printf("Enter\nYES: 1\nNO: 2\n");
				scanf("%d", &choice2);
				if (choice2 == 1)
				{
					printf("Enter no of quantity: \n");
					scanf("%d", &qty);
					total = total + (qty*food[2].price);
					printf("Added Chicken Zinger Burger of quantity %d\n", qty);
					printf("Continue Browsing the list\n");
				}
				else
				{
					printf("Cancelled Chicken Zinger Burger\n");
					printf("Continue Browsing the list\n");
				}
				break;
			}
			
			case 3:
			{
				printf("Confirm Krunchy Burger (2 pc) added to cart?");
				printf("Enter\nYES: 1\nNO: 2\n");
				scanf("%d", &choice2);
				if (choice2 == 1)
				{
					printf("Enter no of quantity: \n");
					scanf("%d", &qty);
					total = total + (qty*food[3].price);
					printf("Added Krunchy Burger of quantity %d\n", qty);
					printf("Continue Browsing the list\n");
				}
				else
				{
					printf("Cancelled Krunchy Burger\n");
					printf("Continue Browsing the list\n");
				}
				break;
			}
			
			case 4:
			{
				printf("Confirm Hot & Crispy/Smoky Grill(2 pc) added to cart?");
				printf("Enter\nYES: 1\nNO: 2\n");
				scanf("%d", &choice2);
				if (choice2 == 1)
				{
					total = total + food[4].price;
					printf("Added Hot & Crispy/Smoky Grill(2 pc)\n");
					printf("Continue Browsing the list\n");
				}
				else
				{
					printf("Cancelled Hot & Crispy/Smoky Grill\n");
					printf("Continue Browsing the list\n");
				}
				break;
			}
		
			case 5:
			{
				printf("Confirm Hot & Crispy/Smoky Grill(4 pc) added to cart?");
				printf("Enter\nYES: 1\nNO: 2\n");
				scanf("%d", &choice2);
				if (choice2 == 1)
				{
					total = total + food[5].price;
					printf("Added Hot & Crispy/Smoky Grill(4 pc)\n");
					printf("Continue Browsing the list\n");
				}
				else
				{
					printf("Cancelled Hot & Crispy/Smoky Grill\n");
					printf("Continue Browsing the list\n");
				}
				break;
			}
			
			case 6:
			{
				printf("Confirm Hot & Crispy/Smoky Grill(6 pc) added to cart?");
				printf("Enter\nYES: 1\nNO: 2\n");
				scanf("%d", &choice2);
				if (choice2 == 1)
				{
					total = total + food[6].price;
					printf("Added Hot & Crispy/Smoky Grill(6 pc)\n");
					printf("Continue Browsing the list\n");
				}
				else
				{
					printf("Cancelled Hot & Crispy/Smoky Grill(6 pc)\n");
					printf("Continue Browsing the list\n");
				}
				break;
			}
						
			case 7:
			{
				printf("Confirm Hot & Crispy/Smoky Grill(8 pc) added to cart?");
				printf("Enter\nYES: 1\nNO: 2\n");
				scanf("%d", &choice2);
				if (choice2 == 1)
				{
					total = total + food[7].price;
					printf("Added Hot & Crispy/Smoky Grill(8 pc)\n");
					printf("Continue Browsing the list\n");
				}
				else
				{
					printf("Cancelled Hot & Crispy/Smoky Grill(8 pc)\n");
					printf("Continue Browsing the list\n");
				}
				break;
			}	
		}
	}while(choice<8);
	order(total);
}

void acc_add()
{
	account newnode;
	char fname,lname,phno,userid,pw,confirmpass;
	printf("\n\nWelcome tp sign up portal\n")
	printf("Enter the First name: ");
	scanf("%s",&fname);
	printf("Enter the Last name: ");
	scanf("%s",&lname);
	printf("Enter the Phone no: ");
	scanf("%s",&phno);
	printf("Enter the userid: ");
	scanf("%s",&userid);
	printf("Enter the password: ");
	scanf("%s",&pw);
	newnode=(account) malloc(sizeof(struct node1));
	newnode->first_name=fname;
	newnode->last_name=lname;
	newnode->phone_no=phno;
	newnode->user_id=userid;
	newnode->password=pw;
	newnode->next=NULL;
	top=newnode;
	printf("Your account has been created successfully\n");
	printf("Please login in to the portal using your account\n");
}

int find_acc(char a,char b)
{
	account temp;
	temp = top;
	while(temp!=NULL)
	{
		if(top->user_id == a && top->password == b)
		{
			return 1;
			temp = temp->next;
		}
	}
	return 0;
}

void log_acc()
{
	account temp;
	temp = top; 
	char emailid, password;
	printf("Welcome to log in portal\n");
	printf("Enter your email id: ");
	scanf("%s",&emailid);
	printf("Enter your password: ");
	scanf("%s",&password);
	if (!find_acc(emailid, password))
	{
		printf("Enter your emailid and password is incorrect!\n");
		printf("You are being returned to the login portal\n");

	}
	else if(temp == NULL)
	{
		printf("No account available! Create a account to start a new one!\n");
	}
	else
	{
		printf("You have logged in suceesfully!\n");
		printf("Thank you for being our customer!\n");
		food_portal();
	}
}

main()
{
	int ch;
	do
	{
		printf("-----KFC Restaurant-----\n");
		printf("-----Welcome sir-----\n");
		printf("---Food ordering portal---\n");
		printf("1) Sign Up! (If you are a new customer)\n");
		printf("2) Login In! (If you are already a customer)\n");
		printf("3) Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				acc_add();
				break;
			case 2:
				log_acc();
				break;
			case 3:
				break;
		}
	}
	while(ch<3);
}
