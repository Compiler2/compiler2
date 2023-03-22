#include <header.h>

int main_bench()
{
   int i,j,a,b,c=0;
   double n;
   my_scanf("%lf",&n);
   char A[500],B[500];

       my_scanf("%s %s",A,B);
   a=strlen(A);
   b=strlen(B);
   if(a!=b)
   {
       my_printf("error");
   return 0;
   }
   for(j=0;j<a;j++)
   {

      if(A[j]==B[j])
      {
         c++ ;
      }
      if(A[j]!='A'&&A[j]!='G'&&A[j]!='C'&&A[j]!='T')
      {
          my_printf("error");
           return 0;
      }
      if(B[j]!='A'&&B[j]!='G'&&B[j]!='C'&&B[j]!='T')
      {
          my_printf("error");
           return 0;
      }

   }
   if((1.0*c/a)>=n)
   {
       my_printf("yes");
   }else{
       my_printf("no");
   }


    return 0;
}



