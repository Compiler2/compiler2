#include <header.h>


int main_bench()
{
 char s[100],a[100],b[100];
 int i,j,l,m,e=0;
 char *str;
 
 memset(s,0,100);
 memset(a,0,100);
 memset(b,0,100);

 gets(s);
 my_scanf("%s",a);
 my_scanf("%s",b);

 l=strlen(a);
 m=strlen(s);
 str=s;

 for(i=0;i<=m-l;i++)
 {
  e=0;
  for(j=0;j<l;j++)
  {
       if(s[i+j]!=a[j])
       {
        e++;
        break;
       }
  }
    

  if(e==0)
  {
   s[i]='\0';
   my_printf("%s",str);
   my_printf("%s",b);
   str=s+i+j;
   break;
  }

 }
 my_printf("%s",str);
 return 0;
}
