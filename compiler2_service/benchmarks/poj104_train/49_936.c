#define NUM_ITER 624515

#include <header.h>


void reverse(int n,char *p1,char *p2)
{
     int i;
     for (i=0;i<=n-1;i++)
         *(p2+i)=*(p1+n-i-1);
         *(p2+n)='\0';
}

void recopy(int n,char *p1,char *p2)
{
     int i;
     for (i=0;i<=n-1;i++)
         *(p2+i)=*(p1+i);
         *(p2+n)='\0';
}

void process(char *p)
{
     int i,j;
     char b[strlen(p)+1],c[strlen(p)+1];
     for (i=2;i<=strlen(p);i++)
     {
         for (j=1;j<=strlen(p)-i+1;j++)
         {
         reverse(i,p+j-1,b);
         recopy(i,p+j-1,c);
         if (strcmp(b,c)==0)
         my_printf("%s\n",c);
         }
     }
}    
         


int main_bench()
{
  char a[500];
  my_scanf("%s",a);
  char *p;
  p=a;
  process(p);
  return 0;
}