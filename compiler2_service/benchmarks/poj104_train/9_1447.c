#define NUM_ITER 13935

#include <header.h>


int main_bench()
{
struct people{
  char num[10];int age;
    } peo1[100],peo2[100],peo3[100],e;
int n,i,j,m,k;
my_scanf("%d",&n);
char s[100][10];
for(i=0;i<n;i++)
  {
  my_scanf("%s",peo1[i].num);
  my_scanf("%d",&peo1[i].age);
  }
j=0;
m=0;
for(i=0;i<n;i++) 
  {
    if(peo1[i].age>=60)
      {
     peo2[j]=peo1[i];
       j++;
       }
    else if(peo1[i].age<60)
       {
      peo3[m]=peo1[i];
       m++;
       }
  }
for(k=1;k<=j;k++)
  {
  for(i=0;i<j-k;i++)
    {
    if(peo2[i].age<peo2[i+1].age)
       {
       e=peo2[i+1];
       peo2[i+1]=peo2[i];
       peo2[i]=e;
        }
     }
   }
 int a,b,c;
for(a=0,i=0;a<j;a++,i++)
   {
   strcpy(s[a],peo2[i].num);
    }
for(a=j,b=0;a<n;a++,b++)
   {
   strcpy(s[a],peo3[b].num);
   }
for(c=0;c<n;c++)
  {
   my_printf("%s\n",s[c]);
   }
 return 0;
}
