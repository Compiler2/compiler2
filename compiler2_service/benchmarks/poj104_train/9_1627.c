#define NUM_ITER 4747

#include <header.h>


struct student 
{
       char num[11];
       int age;
};

int main_bench()
{
  int n,i,j;
  my_scanf("%d",&n);
  struct student pa[n];
  for (i=0;i<=n-1;i++)
      my_scanf("%s%d",pa[i].num,&pa[i].age);
  struct student temp;
  for (j=n-1;j>=1;j--)
  {
      for (i=0;i<=j-1;i++)
      {
          if (pa[i].age<pa[i+1].age&&!(pa[i].age<60&&pa[i+1].age<60))
          {temp=pa[i];pa[i]=pa[i+1];pa[i+1]=temp;}
      }
  }
  for (i=0;i<=n-1;i++)
  {
      my_printf("%s",pa[i].num);
      (i<=n-2)?my_printf("\n"):my_printf("");
  }
  return 0;
}
