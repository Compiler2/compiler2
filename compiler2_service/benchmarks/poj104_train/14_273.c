#define NUM_ITER 23667

#include <header.h>

struct stu
{
       int id;
       int shu;
       int yu;
       int he;
};
struct stu stu[100000];
int main_bench()
{
    int n,i,max,sec,th;
    my_scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     my_scanf("%d%d%d",&stu[i].id,&stu[i].shu,&stu[i].yu);
     stu[i].he=stu[i].shu+stu[i].yu;
     }
     max=1;
     for(i=1;i<n;i++)
     {
       if(stu[max].he<stu[i+1].he)
       max=i+1;
       }
       my_printf("%d %d\n",stu[max].id,stu[max].he);
        stu[max].he=0;
        sec=1;
     for(i=1;i<n;i++)
      {  
         if(stu[sec].he<stu[i+1].he)
         sec=i+1;
         }
          my_printf("%d %d\n",stu[sec].id,stu[sec].he);
         stu[sec].he=0;
         th=1;
         for(i=1;i<n;i++)
         {
           if(stu[th].he<stu[i+1].he)
           th=i+1;
           }
           my_printf("%d %d\n",stu[th].id,stu[th].he);
           getchar();
           getchar();
}   
                         