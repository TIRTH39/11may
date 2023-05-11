#include<stdio.h>

int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int multi(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
int moduls(int a,int b)
{
	return a%b;
}
main()
{
	int a,b,choice;
	
	printf("Enter the value of A=");
	scanf("%d",&a);
	printf("Enter the value of B=");
	scanf("%d",&b);
	
  do
  {
  
	printf("press 1 add \n");
	printf("press 2 sub\n");
	printf("press 3 multi\n");
	printf("press 4 div\n");
	printf("press 5 moduls\n");
	printf("press 0 \n");
	printf("Enter your choice=");
	scanf("%d",&choice);
	
	switch(choice)
	{
		
	    case 1:
		    printf(" add of a&b =%d\n",add(a,b));
			break;
		case 2:
			printf(" sub of a&b =%d\n",sub(a,b));
			break;
		case 3:
			printf(" multi of a&b =%d\n",multi(a,b));
			break;
		case 4:
			printf(" div of a&b =%d\n",div(a,b));
			break;	
		case 5:
			printf(" moduls of a&b =%d\n",moduls(a,b));
			break;
			
						
    }  
  }while(choice!=0);
}
