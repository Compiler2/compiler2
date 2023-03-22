#define NUM_ITER 1121350

#include <header.h>

main_bench()
{
 char num[100];
 my_scanf("%s",num);
 int con[100];
 int p[100];
 int i,j,a,b,s,k=0,l; 
 for(i=0;num[i]!='\0';i++)
 {
  con[i]=num[i]-'0';                      
                          }     
 if(i==1)
 {
 a=0;
 b=con[0];
 my_printf("%d",a);
 my_printf("\n");
 my_printf("%d",b);
               }
 else
 {
  for(j=0;j<=i-2;j++)
  {
  s=con[j]*10+con[j+1];
  if(s>=13)
  {
  a=s/13;
  b=s%13;
  con[j+1]=b;
  p[k]=a;
  k=k+1;
   }
  else 
  {
   con[j+1]=s;
   b=s;
   if(k==0) 
  {
   continue;         
            }
   else
   {
    p[k]=0;
    k=k+1;
    continue;   
       }   
       }
       }
  if(k==0)
  my_printf("%d",k);
  else
  {for(l=0;l<=k-1;l++)
  {my_printf("%d",p[l]);}}
  my_printf("\n");
  my_printf("%d",b);      
     }              
 getchar();
 getchar();
 getchar();     
      }
