#include <header.h>

int main_bench()
{
char s[100];
int num[100],quo[100];
int l,i,x,r;
    my_scanf("%s",s); 
    l=strlen(s);
    for (i=0;i<l;i++) num[i]=s[i]-48;
    for (i=0;i<100;i++) quo[i]=0;
    if (l>2)
    {
      if (num[0]*10+num[1]>=13)
      {
        quo[0]=(num[0]*10+num[1])/13;
        r=(num[0]*10+num[1])%13;
        for (i=2;i<l;i++)
        {
          quo[i-1]=(r*10+num[i])/13;
          r=(r*10+num[i])%13;
        }
        for (i=0;i<=l-2;i++) my_printf("%d",quo[i]);
        my_printf("\n"); 
        my_printf("%d\n",r);
      }    
      else 
      {
        quo[0]=(num[0]*100+num[1]*10+num[2])/13;
        r=(num[0]*100+num[1]*10+num[2])%13;
        for (i=3;i<l;i++)
        {
          quo[i-2]=(r*10+num[i])/13;
          r=(r*10+num[i])%13;
        }
        for (i=0;i<=l-3;i++) my_printf("%d",quo[i]);
        my_printf("\n"); 
        my_printf("%d\n",r);    
       }
     }
     if (l==2)
     {
       quo[0]=(num[0]*10+num[1])/13;
       r=(num[0]*10+num[1])%13;
       my_printf("%d\n",quo[0]);
       my_printf("%d\n",r);             
     }
     if (l==1)
     {
       quo[0]=num[0]/13;
       r=num[0]%13;
       my_printf("%d\n",quo[0]);
       my_printf("%d\n",r);    
     }
     getchar();
     getchar();     
}