#define NUM_ITER 1077415

#include <header.h>

int main_bench()
{
char str[999],temp[300];
int len,k=0,j,i=0,a,b,c;
gets(str);
len=strlen(str);
for(j=0;j<=len;j++)
{
   if(str[j]==' ')
   {
     while(i<j)
     {
     temp[k]=str[i];
     i++;
     k++;
     }
     temp[k]='\0';
     i++;
     a=strlen(temp);
     if(a!=0)
     my_printf("%d,",a);
     k=0;
   }
   if(str[j]=='\0')
   {
     while(i<j)
     {
     temp[k]=str[i];
     i++;
     k++;
     }
     temp[k]='\0';
     a=strlen(temp);
     my_printf("%d",a);
   }
}
return 0;
}