#define NUM_ITER 17445

#include <header.h>

int main_bench()
{
int n,i,j,m=0,x,y;
my_scanf("%d",&n);
char a[100][1000];
for(i=0;i<n+1;i++)
 gets(a[i]);
for(i=0;i<n+1;i++)
  {for(j=0;a[i][j]!='\0';j++)
     my_printf("%c",a[i][j]);
     my_printf("\n");
     x=j;
   for(j=0;j<x;j++)
    {if(a[i][j]==')')
      {if(j==0)a[i][j]='?';
       for(m=1;j-m>=0;m++)
         if(a[i][j-m]=='('){a[i][j-m]=' ';a[i][j]=' ';break;}
         else a[i][j]='?';}
     if(a[i][j]!='('&&a[i][j]!=')'&&a[i][j]!='?')a[i][j]=' ';}
   for(j=x-1;j>=0;j--)
      if(a[i][j]=='(')
         {if(j==x-1)a[i][j]='$';
          else for(m=1;j+m<x;m++)
            if(a[i][j+m]==')'){a[i][j]=' ';a[i][j+m]=' ';break;}
             else a[i][j]='$';}
     for(j=0;j<x;j++)
       my_printf("%c",a[i][j]);
     my_printf("\n");
  }
  return 0;
}