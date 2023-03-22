#define NUM_ITER 22278

#include <header.h>

int main_bench()
{
    int n;
    my_scanf("%d\n",&n);
    struct student{
           int id;
           int yu,shu;
           } stu[100000];
    int i;
    int s1=0,s2=0,s3=0;
    int x1=0,x2=0,x3=0;
    for(i=0;i<n;i++)
    {
     my_scanf("%d %d %d\n",&stu[i].id,&stu[i].yu,&stu[i].shu);
    } 
    int s,x;
     for(i=0;i<n;i++)
     { 
      s=stu[i].yu+stu[i].shu;
      x=stu[i].id;
      if(s>s1)
      {s3=s2;x3=x2;s2=s1;x2=x1;s1=s;x1=x;}
      else if(s==s1)
      {s3=s2;x3=x2;s2=s;x2=x;}
      else if(s<s1&&s>s2)
      {s3=s2;x3=x2;s2=s;x2=x;}
      else if(s==s2)
      {s3=s;x3=x;}
      else if(s<s2&&s>s3)
      {s3=s;x3=x;}          
     }
      my_printf("%d %d\n",x1,s1);
      my_printf("%d %d\n",x2,s2);
      my_printf("%d %d\n",x3,s3);   
return 0;
}