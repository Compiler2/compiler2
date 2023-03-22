#define NUM_ITER 1085924

#include <header.h>

void c(char *p,int l)
{
     int i;
     
    for(i=0;i<l;i++)
    {
    if((*(p+i))>='a'&&(*(p+i))<='z')
    *(p+i)=*(p+i)+('A'-'a');
}
    
}
int f(char x,char y)
{
    
    if(x==y)
    return 1;
    else 
    return 0;
}
main_bench()
{    int l;
int e;
int count=0;
      char a[1000];
      char *p;
      char q;
      int i;
      my_scanf("%s",a);
      l=strlen(a);
      p=a;
      c(p,l);
      for(i=0;i<l;i++)
      {
if(l==1)
 my_printf("(%s,1)",a);
      if(i==0)
      {
      q=a[i];
      count++;
      }
      else
      { 
          if(i!=(l-1))
      {
          e=f(q,a[i]);
          if(e==0)
          {
          my_printf("(%c,%d)",q,count);
          q=a[i];
          count=1;
                  }
          else
          count++;
      }
      else
      {
      if(q==a[l-1])
       my_printf("(%c,%d)",q,(count+1));
       else
       {
       my_printf("(%c,%d)",q,count);
        my_printf("(%c,1)",a[l-1]);
       }
       }
       }
                      }
                      my_printf("\n");
                      getchar();
                      getchar();
                      getchar();
      }
