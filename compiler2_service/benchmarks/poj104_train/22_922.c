#define NUM_ITER 198803

#include <header.h>

int main_bench()
{
 int m[300];
 int n1,n2,a,i,b;
 a=0;
 char n[300];
 for(i=0;i<=300;i++)
 {
 a=a+1;
 my_scanf("%d%c",&m[i],&n[i]);
 if(n[i]=='\n')
 break;
 }
 if(a==1) my_printf("No");
 else 
 {
  n1=0;
  n2=0;
  for(i=0;i<a;i++)
  {
   if(m[i]>n1) {b=n1;n1=m[i];m[i]=b;}
   if((m[i]>n2)&&(m[i]!=n1)) {n2=m[i];}
  } 
 if(n2==0) {my_printf("No");}
 else {my_printf("%d",n2);}
 }
 return 0;
}