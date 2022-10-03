#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node1
{
	char *password;
	struct node* next;
};
typedef struct node1* account;
account top=NULL;

main()
{
	account newnode;
	char pw[20];
	while(1)
	{
		printf("Enter the password: ");
		scanf("%s",&pw);
		validate_password(pw);
		printf("Do you want the strength of the password to remain?\n");
		printf("1)Yes\n2)No\n");
		int ch;
		scanf("%d", &ch);
		if(ch==1)
			break;
		else
			continue;
	}
	newnode=(account) malloc(sizeof(struct node1));
	newnode->password=pw;
	printf("%s", newnode->password);
	newnode->next=NULL;
	top=newnode;
	printf("Your account has been created successfully\n");
	printf("Please login in to the portal using your account\n");
}
void acc_add()
{
	account newnode;
	char fname,lname,userid,pw[20],confirmpass;
	long int phno, phno1;
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
		scanf("%10ld",&phno);
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
	while(1)
	{
		printf("Enter the password: ");
		scanf("%s",&pw);
		validate_password(pw);
		printf("Do you want the strength of the password to remain?\n");
		printf("1)Yes\n2)No\n");
		int ch;
		scanf("%d", &ch);
		if(ch==1)
			break;
		else
			continue;
	}
	newnode=(account) malloc(sizeof(struct node1));
	newnode->password=pw;
	newnode->next=NULL;
	top=newnode;
	printf("Your account has been created successfully\n");
	printf("Please login in to the portal using your account\n");
}

void validate_password(char pw[20])
{
	int i = 0, len =0;
	int Upper = 0;
	int Lower = 0;
	int Sym = 0;
	int Special = 0;
	int Num = 0;
	int flag = 0;
	char x;
	len = strlen(pw);
    if(len < 6)
    {
        printf("Password is too short\n");
    }
    else if(len> 6 && len<12)
    {
		for(i = 0; i<len; i++)
		{	
			x = pw[i];
			if(x>='a' && x<='z')
				Lower = 1;
			else if(x>='A' && x>= 'Z')
				Upper = 1;
			else if((x>=33 && x<=47) || (x>= 58 && x<=64) || (x>=91 && x<=96))
				Sym = 1;
			else if(x>=123 && x<=126)
				Special = 1;
			else if(x>=48 && x<=57)
				Num = 1;
		}
		if(Lower==1) flag+=1;
		if(Upper==1) flag+=1;
		if(Sym==1) flag+=1;
		if(Special==1) flag+=1;
	
		if(flag>3 && flag<=5)
			printf("Strong password\n");
		else if(flag>=2 && flag<=3)
			printf("Moderate password\n");
		else
			printf("Weak password\n");
	}
	else
    { 
        printf("Enter password properly\n");
    }   
}

