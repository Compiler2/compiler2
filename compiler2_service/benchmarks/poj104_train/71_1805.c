#define NUM_ITER 20218

#include <header.h>

int main_bench()
{
   int n,i,a,b,c;
   my_scanf("%d",&n);
   for(i=0;i<n;i++){
   my_scanf("%d %d %d", &a, &b, &c);
   if((a%400==0) ||(a%4 ==0 && a%100!=0)){
   if((b==1 || b==4 || b==7) && (c==1 || c==4 ||c==7))
   {my_printf("YES\n");}
   else if ((b==9 || b==12) && (c==9 || c==12)){
   my_printf("YES\n");}
   else if ((b==2 || b==8) && (c==2 || c==8))
   {my_printf("YES\n");}
   else if ((b==3 || b==11) && (c==3 || c==11))
   {my_printf("YES\n");}
   else {my_printf("NO\n");}
   } 
   else{
   if ((b==2 || b==3 || b==11 )&& (c==2 || c==3||c==11))
   {my_printf("YES\n");}
   else if ((b==1 || b==10) && (c==1 || c==10))
   {my_printf("YES\n");}
   else if ((b==4 || b==7) && (c==4 || c==7))
   {my_printf("YES\n");}
   else if ((b==9 || b==12) && (c==9 || c==12))
   {my_printf("YES\n");}
   else {my_printf("NO\n");}
   } }
   return 0;
}