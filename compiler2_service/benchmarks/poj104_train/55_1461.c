#define NUM_ITER 523698

#include <header.h>

main_bench()
{
         int a,b;
         int i,m=0;
         long int n=0;
         char  w;
         int f;
         char s[64];
         char t[64];
         char *p;
         char *r;
         p=s;
         r=t;
         my_scanf("%d",&a);
         my_scanf("%s",s);
         my_scanf("%d",&b);
         while ((*p)!='\0')
         {
                  if ((*p)>='A'&&(*p)<='Z')
                  n=n*a+((*p)-'A'+10);
                  else if ((*p)>='a'&&(*p)<='z')
                  n=n*a+((*p)-'a'+10);
                  else if((*p)>='0'&&(*p)<='9')
                  n=n*a+((*p)-'0');
                  p++;
         }
         if (n==0)
         my_printf("%d",n);
         while(n!=0)
         {

                  f=n%b;
                  n=n/b;
                  if (f>9)
                  *r='A'+f-10;
                  else *r=f+'0';
                  r++;
                  m++;
         }
         for(i=0;i<m/2;i++)
         {
                  w=t[i];
                  t[i]=t[m-1-i];
                  t[m-1-i]=w;
         }
         for(i=0;i<m;i++)
         {
                  my_printf("%c",t[i]);
         }

}