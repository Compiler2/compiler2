#define NUM_ITER 985840

#include <header.h>

int main_bench()
{
 char s[1000];
 int m,i,j,l,a[1000],k,b[1000];
 my_scanf("%s",&s);
 l=strlen(s);
 if(l==1)
 {
  my_printf("0\n");
  my_printf("%d\n",s[0]-'0');
 }
 else if(l==2)
 { 
  if((s[0]-'0')*10+(s[1]-'0')<13)
  {
   my_printf("0\n");
   my_printf("%d\n",(s[0]-'0')*10+(s[1]-'0'));
  }
  else
  {
   my_printf("%d\n",((s[0]-'0')*10+(s[1]-'0'))/13);
   my_printf("%d\n",((s[0]-'0')*10+(s[1]-'0'))%13);
  }
 }
 else
 {
  for(i=0;i<l;i++)
   b[i]=s[i]-'0';
  for(i=0;i<l;i++)
  {
   m=b[i]*10+b[i+1];
   if(m>=13)
   {
    a[i]=m/13;
    b[i+1]=m%13;
   }
   else
   {
    a[i]=0;
    m=m*10+b[i+2];
    i++;
    a[i]=m/13;
    b[i+1]=m%13;   
   }   
  }
  k=b[i-1];
  if(a[0]==0)
  {
   for(i=1;i<l-1;i++)
   my_printf("%d",a[i]);
   my_printf("\n%d",k); 
  }
  else
  {
   for(i=0;i<l-1;i++)
   my_printf("%d",a[i]);
   my_printf("\n%d",k); 
  }
 }
 getchar();
 getchar();
 getchar();
 getchar();
 return 0;
}
