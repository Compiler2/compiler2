#define NUM_ITER 33556

#include <header.h>

int main_bench()
{
    int n,i,j,l;char s[100000][81];
    my_scanf("%d",&n);
    for(i=0;i<n+1;i++)
      gets(s[i]);
    for(i=1;i<n+1;i++)
     {  
     if(s[i][0]!='_'&&(s[i][0]<'A'||s[i][0]>'Z')&&(s[i][0]<'a'||s[i][0]>'z') )
     my_printf("0\n");
    else
     { 
       l=0;
     for(j=1;s[i][j]!='\0';j++) 
       if(s[i][j]!='_'&&(s[i][j]<'A'||s[i][j]>'Z')&&(s[i][j]<'a'||s[i][j]>'z')&&(s[i][j]<'0'||s[i][j]>'9'))
        l++;
      if(l==0)
       my_printf("1\n");
     else
      my_printf("0\n");
    }
   
    }
  getchar();getchar();
}
