#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{

	char name[30];
	int id;
	int dd; int mm; int yyyy;
	int YOJ;
	char place[20];
	
	int quantity;
};
struct employee e;

FILE *fp,*ft,*dp,*dt;
int s;
char findrecord;
int again;
int quantity;
double total=0;
int t;
int getdata();

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
	int phone_no;
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
	int ch, confirm, wait;
	if(price==0)
	{
		printf("Your cart is empty!\n");
		printf("Moving to login portal\n");
		for(wait=0;wait<=100000;wait++)
		{
			printf("\rLOADING : %d",wait/1000);
		}
		mainmenu();
	}
	else
	{
	system("cls");
	printf("\n-----Order-----\n");
	printf("Your total amount is %d\n", price);
	printf("Do You wish to order? (y=1/n=0):");
	scanf("%d", &ch);
	if (ch == 1)
	{
		printf("Thank You for your order!!\n");
		printf("Your Food is on the way!!\n");
		printf("Welcome again!!\n");
		printf("Please take a seat and be patient will the food is prepared\n");
			for(wait=0;wait<=100000;wait++)
			{
				printf("\rLOADING : %d",wait/1000);
			}
		mainmenu();
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
			printf("Moving to login portal\n");
				for(wait=0;wait<=100000;wait++)
				{
					printf("\rLOADING : %d",wait/1000);
				}
				customer();
		}
		else
		{
			printf("----Moving to menu----\n");
				for(wait=0;wait<=100000;wait++)
				{
				printf("\rLOADING : %d",wait/1000);
				}
			food_portal();
		}
	}
	else
	{
		printf("Please Enter the correct choice\n");
	}
	}
}

void food_portal()
{
	int choice, total;
	int choice2;
	int qty = 0;
	init_food();
	system("cls");
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
	char fname,lname,userid,pw,confirmpass;
	int phno, phno1;
	int a=0;
	system("cls");
	printf("\nWelcome to sign up portal\n");
	printf("Enter the First name: ");
	scanf("%s",&fname);
	printf("Enter the Last name: ");
	scanf("%s",&lname);
	while(1)
	{
		printf("Enter the Phone no: ");
		scanf("%d",&phno);
		phno1 = phno;
		while(phno1>0)
		{
			phno1 = phno1/10;
			a=a+1;
		}
		if(a==10)
			break;
		else
			printf("Enter proper phone number!\n");
	}
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
		int wait;
		for(wait=0;wait<=100000;wait++)
		{
			printf("\rIn progress : %d",wait/1000);
		}
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
	char user_id, password;
	system("cls");
	printf("Welcome to log in portal\n");
	printf("Enter your user id: ");
	scanf("%s",&user_id);
	printf("Enter your password: ");
	scanf("%s",&password);
	if (!find_acc(user_id, password))
	{
		printf("Enter your userid and password is incorrect!\n");
		printf("You are being returned to the login portal\n");

	}
	else if(temp == NULL)
	{
		printf("No account available! Create a account to start a new one!\n");
	}
	else
	{
		printf("You have logged in sucessfully!\n");
		printf("Thank you for being our customer!\n");
			int wait;
		for(wait=0;wait<=100000;wait++)
		{
			printf("\rIn progress : %d",wait/1000);
		}
		food_portal();
	}
}

void customer()
{
	int ch;
	do
	{
		system("cls");
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
	mainmenu();
}

void administration()
{
	system("cls");
	printf("-----Employee section-----\n");
	printf("1) Add new record\n2) Search record\n3) Delete record\n4) View record\n5) Erase all records\n6) Exit back to Main Menu\n");
	printf("Enter your choice: \n");
	int n;
	scanf("%d", &n);
	if(n==1)
	{
		addrecord();
	}
	else if(n==2)
	{
		searchrecord();
	}
	else if(n==3)
	{
		deleterecord();
	}
	else if(n==4)
	{
		viewrecord();
	}
	else if(n==5)
	{
		remove("record1.txt");
	}
	else if(n==6)
	{
		system("cls");
		mainmenu();
	}
	else
	{
		printf("Wrong Input !! Please Re-enter The Correct Option");
		administration();
	}
}

void addrecord()
{
	system("cls");
	fp=fopen("record1.txt","a");
	if(getdata()==1)
	{
		fseek(fp,0,SEEK_END);
		fwrite(&e,sizeof(e),1,fp);
		fclose(fp);
		printf("The Record Is Saved Successfully!!\n");
		printf("Save any more?(Y / N): ");
		if(getch()=='n')
	    	administration();
		else
	    	system("cls");
	    	addrecord();
	}	
}

void deleterecord()
{
	system("cls");
    int d;
    char another='y';
    while(another=='y')  
    {
	system("cls");
	printf("Enter The Employee ID To Delete :");
	scanf("%d",&d);
	fp=fopen("record1.txt","r+");
	rewind(fp);
	while(fread(&e,sizeof(e),1,fp)==1)
	{
	    if(e.id==d)
	    {
			printf(" Employee Name Is %s\n",e.name);
			printf(" Employee's Date  OF Birth Is %d/%d/%d\n",e.dd,e.mm,e.yyyy);
			findrecord='t';
	    }
	}
	if(findrecord!='t')
	{
	    printf("---------No record is found modify the search----------\n");
	    if(getch())
	    administration();
	}
	if(findrecord=='t' )
	{
	    printf("Do You Want To Delete The Record ? (Y/N) ");
	    if(getch()=='y')
	    {
			ft=fopen("test1.txt","w");
			rewind(fp);
			while(fread(&e,sizeof(e),1,fp)==1)
			{
		    	if(e.id!=d)
		    	{
					fseek(ft,0,SEEK_CUR);
					fwrite(&e,sizeof(e),1,ft); 
		    	}                              
			}
			fclose(ft);
			fclose(fp);
			remove("record1.txt");
			rename("test1.txt","record1.txt"); 
			fp=fopen("record1.txt","r");   
			if(findrecord=='t')
			{
		    	printf(" THE RECORD IS SUCCESSFULLY DELETED.\n");
		    	printf(" Delete Another Record ? (Y/N) : ");
			}
	    }
		else
		administration();
		fflush(stdin);
		another=getch();
	}
}
administration();
}

void searchrecord(void)
{
	system("cls");
    int d,ch;
    int wait;
    printf("----------Search Employees Record----------\n");
    printf("1. Search By ID\n");
    printf("2. Search By Name\n");
    printf("Enter Your Choice:\n");
    scanf("%d", &ch);
    fp=fopen("record1.txt","r"); 
    rewind(fp);   
    switch(ch)
    {
	  case 1:
		{
	    	system("cls");
	    	printf("----------Search Record By Id----------\n");
	    	printf("Enter The Employee ID : ");
	    	scanf(" %d",&d);
	    	printf("Searching........");

				for(wait=0;wait<=100000;wait++)
				{
					printf("\rIn progress : %d",wait/1000);
				}
	    	while(fread(&e,sizeof(e),1,fp)==1)
	    	{
				if(e.id==d)
				{
		    		printf("\n\n");
					printf("----------The Record is available----------\n");
				    printf("ID : %d\n",e.id);
				    printf("Name : %s\n",e.name);
				    printf("Date OF Birth :%d/%d/%d\n",e.dd,e.mm,e.yyyy);
				    printf("Year Of Joining :%d\n",e.YOJ);
				    printf("Place :%s\n",e.place);
				    findrecord='t';
				}

	    }
	    if(findrecord!='t')  
		{
	    	printf("No Record Found\n");
	    }
	    printf("Try Another Search ? (y/n)");
	    if(getch()=='y')
	    searchrecord();
	    else
	    administration();
	    break;
	}
	case 2:
	{
	    char s[15];
	    system("cls");
	    printf("----------Search Employees By Name----------\n\n");
	    printf("Enter Employee Name : ");
	    scanf("%s",s);
	    int flag=0;
	    while(fread(&e,sizeof(e),1,fp)==1)
	    {
		if(strcmp(e.name,(s))==0) 
		{
			for(wait=0;wait<=100000;wait++)
			{
				printf("\rIn progress : %d",wait/1000);
			}
		    printf("----------The Record is available----------\n\n\n");
			printf("ID : %d\n",e.id);
			printf("Name : %s\n",e.name);
			printf("Date OF Birth :%d/%d/%d\n",e.dd,e.mm,e.yyyy);
			printf("Year Of Joining :%d\n",e.YOJ);
			printf("Place :%s\n",e.place);
		    flag++;
		}
	    }
	    if(flag==0)
	    {
	    	printf("\aNo Record Found\a");
	    }
	    printf("Try Another Search ? (Y/N)");
	    if(getch()=='y')
	    searchrecord();
	    else
	    administration();
	    break;
	}
	default :
	getch();
	searchrecord();
    }
    fclose(fp);
}

void viewrecord() 
{
    system("cls");
    printf("----------Employee Details----------\n");
    printf("ID        EMPLOYEE NAME        D.O.B        Y.O.J        PLACE\n\n");
    
    fp=fopen("record1.txt","r");
    while(fread(&e,sizeof(e),1,fp)==1)
    {
		printf("%d",e.id);
		printf("        %s",e.name);
		printf("        %d/%d/%d",e.dd,e.mm,e.yyyy);
		printf("        %d",e.YOJ);
		printf("        %s",e.place);
		printf("\n");
	}
      
      fclose(fp);
      returnfunc();
}

int checkid(int c)  
{
	rewind(fp);
	while(fread(&e,sizeof(e),1,fp)==1)
	if(e.id==c)
	
	return 0;  
    
	return 1; 
}

void returnfunc(void)
{
    {
		printf(" Press ENTER to return to main menu");
    }
    e:
    if(getch()==13) //allow only use of enter
    administration();
    else
    goto e;
}

int getdata()
{
	printf("Employee ID :\n");
	scanf("%d",&t);
	if(checkid(t)==0)
	{
		printf("The Employee Record Already Exists!!\n");
		getch();
		mainmenu();
		return 0;
	}
	e.id=t;
	printf("Employee Name : ");
	scanf("%s",e.name);
	printf("Date Of Birth (dd/mm/yyyy) :");
	scanf("%d/%d/%d",&e.dd,&e.mm,&e.yyyy);
	printf("Year OF Joining :");
	scanf("%d",&e.YOJ);
	printf("Place :");
	scanf("%s",e.place);
	return 1;
}

void aboutus()
{
	system("cls");
	printf("Privacy Policy Terms of Use\nOur Cookies and Ads\tDo Not Sell My Personal Information\tAccessibility Statement\nCopyright © KFC Corporation 2021 All Rights Reserved\nFOLLOW US\nBuild: KFC11052021:dbdf52d8\n");
	printf("Programmers and data providers of our comapany @KFC PVTLMTD\n");
	printf("*-- Manoj Bhavvan\n");
	printf("*-- Kavin\n");
	printf("*-- Harish\n");
	printf("*-- Guru Pramod\n\n");
	printf("	Press any key to go back...		");
	if(getch())
	mainmenu();
}

void mainmenu()
{
	int ch;
	int pin = 1234;
	int epin = 0;
		system("cls");
		printf("--------------------\n");
		printf("Welcome to KFC Portal\n");
		printf("--------------------\n");
		printf("1) Administration section\n");
		printf("2) Customer Section\n");
		printf("3) About Us\n");
		printf("Enter your choice\n");
		scanf("%d", &ch);
		if(ch==1)
		{
		while(1)
		{
			printf("Enter admin pin: \n");
			scanf("%d", &epin);
			if(pin == epin)
			{
				administration();
			}
			else
    		{
			   	printf("Invalid password\nWould u like to reenter the password\n 1 -> yes \n 2 -> no\n");
    			int d;
    			scanf("%d",&d);
    			if(d ==1)
    			{
    				mainmenu();
				}
				else
				{
				printf("!!!You are not authenticated!!!");
				break;
				}
			}
		}
		mainmenu();
		}
		else if(ch==2)
		{
			customer();
		}
		else if(ch==3)
		{
			aboutus();
		}
		else if(ch==4)
		{
			system("cls");
			printf("-------------------------\n");
			printf("Thank you! Visit us again\n");
			printf("-------------------------\n");
			exit(0);
		}
}

main()
{
	mainmenu();
	getch();
}
