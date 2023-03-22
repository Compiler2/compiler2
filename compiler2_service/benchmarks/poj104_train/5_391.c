#define NUM_ITER 858160

#include <header.h>

int main_bench()
{   
   double m,c=0,d;
   int i,k,a,b,s=0;
   char s1[550],s2[550];
   my_scanf("%lf",&m);
   my_scanf("%s%s",s1,s2);
   a=strlen(s1);
   b=strlen(s2);
   if(a!=b)
   {
           my_printf("error\n");
   }
   if(a==b)
   {
        for(i=0;i<a;i++)
        {
            if(s1[i]!='A'&&s1[i]!='C'&&s1[i]!='G'&&s1[i]!='T')
            {
                   s++;
            }
        }
        for(i=0;i<b;i++)
        {
               if(s2[i]!='A'&&s2[i]!='C'&&s2[i]!='G'&&s2[i]!='T')
               {
                  s++;
               }
        }
        if(s==0)
        {
         for(i=0;i<a;i++)
         {
               if(s1[i]==s2[i])
               {
                  c++;
               }
         }
         d=c/a;
         if(d>=m)
         {
             my_printf("yes\n");
         }else
         {
             my_printf("no\n");
         }
        }
        if(s!=0)
        {
             my_printf("error\n");
        }
   }                       
	
   return 0;
}