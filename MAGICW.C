#include<stdio.h>
#include<conio.h>
void main()
{
    int t, n[100], i, j, x;
    char str[100][500];
    clrscr();
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
       scanf("%d",&n[i]);
       scanf("%s",str[i]);
    }
    for(i=0; i<t; i++)
    {
       for(j=0; j<n[i]; j++)
       {
	  x=str[i][j];
	  if((x>32)&&(x<=39))
	       x=37;
	  else if((x>=40)&&(x<=42))
	       x=41;
	  else if((x>=43)&&(x<=45))
	       x=43;
	  else if((x>=46)&(x<=50))
	       x=47;
	  else if((x>=51)&&(x<=56))
	       x=53;
	  else if((x>=57)&&(x<=59))
	       x=59;
	  else if((x>=60)&(x<=64))
	       x=61;
	  else if((x>=65)&&(x<=69))
	       x=67;
	  else if((x>=70)&&(x<=72))
	       x=71;
	  else if((x>=73)&(x<=76))
	       x=73;
	  else if((x>=77)&&(x<=81))
	       x=79;
	  else if((x>=82)&&(x<=86))
	       x=83;
	  else if((x>=87)&(x<=93))
	       x=89;
	  else if((x>=94)&&(x<=99))
	       x=97;
	  else if((x>=100)&&(x<=102))
	       x=101;
	  else if((x>=103)&(x<=105))
	       x=103;
	  else if((x>=106)&&(x<=108))
	       x=107;
	  else if((x>=109)&&(x<=111))
	       x=109;
	  else if((x>=112)&(x<=126))
	       x=113;
	  printf("%c",x);
       }
       printf("\n");
    }
    getch();
}