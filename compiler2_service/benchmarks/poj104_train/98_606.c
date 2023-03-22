#include <header.h>

main_bench()
{
 int i,n,sum=0;
 char letter[1000][41]={""};
 my_scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  my_scanf("%s",(letter+i));
 }
 for(i=0;i<n;i++)
 {
  if(i!=n-1)
  {if(sum==79||((sum+strlen(letter[i]))>80))
  {my_printf("\n");sum=0;i--;}
  else
  {
   if((sum+strlen(letter[i])+1+strlen(letter[i+1]))>80)
   {sum+=strlen(letter[i]);
   my_printf("%s",letter[i]);sum++;}
   else{
       sum+=strlen(letter[i]);
   my_printf("%s ",letter[i]);sum++;
       }
  }}
  else
  my_printf("%s",letter[i]);
 }
}
