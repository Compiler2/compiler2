#include <header.h>

int main_bench()
{
   int length,length1,length2;
   char a[50],b[50];
   int sum=0;
   int n=0;
   int i,j;
   my_scanf("%s",a);
   my_scanf("%s",b);
   length1=strlen(a);
   length2=strlen(b);
   if(length1!=length2)
   {
       my_printf("NO");
   }
   else
   {
       length=length1;
   for(i=0;i<length;i++)
   {
       for(j=0;j<length;j++)
       {
           if(a[i]==b[j])
           {n++;
           b[j]='0';
           break;
           }
        }
        sum++;
   }
    if(n==sum)
   {
       my_printf("YES");
   }
   else
   {
       my_printf("NO");
   }
   }
    return 0;
}
