#define NUM_ITER 1083135

#include <header.h>

int main_bench()
{
    char a[100];
    int i,l,d,x,m,r[100],p[100],s[100];
    my_scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
      s[i]=a[i]-'0';
    }
    r[0]=s[0]%13;
    p[0]=s[0]/13;
    for(i=1;i<l;i++)
    {
     r[i]=(s[i]+r[i-1]*10)%13;
     p[i]=(s[i]+r[i-1]*10)/13;
    }
    if(l>2)
 {   
    for(i=0;i<3;i++)
    {
     if(p[i]==0&&p[i+1]!=0)
     d=i;
    }
     for(i=(d+1);i<l;i++)
     {
     my_printf("%d",p[i]);
     }
 }   
     if(l<=2)
 {
     x=s[0];
     for(i=1;i<l;i++)
     {
      x=s[i]+x*10;
     }
     m=x/13;
     my_printf("%d",m);
 }
    my_printf("\n");
    my_printf("%d",r[l-1]); 
    getchar();
    getchar();
}
     
