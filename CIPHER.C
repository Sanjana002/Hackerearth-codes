#include<stdio.h>
#include<conio.h>
#include<string.h>
void fun1(int x1);
void fun2(int x2);
void fun3(int x3);
void main()
{
    int x,i,j,n;
    char str[100];
    clrscr();
    scanf("%s",str);
    scanf("%d",&n);
    for(i=0; str[i]!='\0'; i++)
    {
       if(isupper(str[i]))
       {
	  x=str[i]+n;
	  fun1(x);
	 /* if((x<=90))
	       printf("%c",(char)x);
	  else
	       printf("%c",(char)(x-26));  */
       }
       else if(islower(str[i]))
       {
	  x=str[i]+n;
	  fun2(x);
	 /* if(x<=122)
		printf("%c",(char)x);
	  else
		printf("%c",(char)(x-26)); */
       }
	else if((str[i]>=48)&&(str[i]<=57))
	{
	    x=str[i]+n;
	    fun3(x);
	    /*if(x<56)
		printf("%c",(char)x);
	    else
		printf("%c",(char)(x-10));   */
	}
	else
	   printf("%c",str[i]);
      }
    getch();
}
void fun1(int x1)
{
     if((x1<=90))
	    printf("%c",(char)x1);
     else
	   fun1(x1-26);
	   // printf("%c",(char)(x1-26));
}
void fun2(int x2)
{
     if(x2<=122)
		printf("%c",(char)x2);
	  else
		fun2(x2-26);
	       //	printf("%c",(char)(x2-26));
}
void fun3(int x3)
{
    if(x3<58)
	 printf("%c",(char)x3);
    else
	 fun3(x3-10);
}
