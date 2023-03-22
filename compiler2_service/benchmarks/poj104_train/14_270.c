#include <header.h>

struct Student
{
      int Num;
      int Chinese;
      int Math;
      int Sum;
};
int main_bench()
{
     int n,i,s;
     my_scanf("%d",&n);
     struct Student stu[n];
     struct Student temp,*p=stu;
     for(i=0;i<n;i++)
     { 
     my_scanf("%d%d%d",&stu[i].Num,&stu[i].Chinese,&stu[i].Math);
     stu[i].Sum=stu[i].Chinese+stu[i].Math;
     }
     if(n==2)
     {
             if(stu[0].Sum >stu[1].Sum)
             temp=stu[0];
             stu[0]=stu[1];
             stu[1]=temp;
             my_printf("%d %d %d\n",stu[0].Num,stu[0].Chinese,stu[0].Math);
             my_printf("%d %d %d\n",stu[1].Num,stu[1].Chinese,stu[1].Math);
             }
     else
     {
         for(i=0,s=0;i<n;i++)
         if(stu[i].Sum>s)
         s=stu[i].Sum;
         for(i=0;i<n;i++)
         {
         if(stu[i].Sum==s)
         {
         my_printf("%d %d\n",stu[i].Num,stu[i].Sum);
         stu[i].Sum=0;
         break;
         }
         }
         for(i=0,s=0;i<n;i++)
         if(stu[i].Sum>s)
         s=stu[i].Sum;
         for(i=0;i<n;i++)
         {
         if(stu[i].Sum==s)
         {
         my_printf("%d %d\n",stu[i].Num,stu[i].Sum);
         stu[i].Sum=0;
         break;
         }
         }
         for(i=0,s=0;i<n;i++)
         if(stu[i].Sum>s)
         s=stu[i].Sum;
         for(i=0;i<n;i++)
         {
         if(stu[i].Sum==s)
         {
         my_printf("%d %d\n",stu[i].Num,stu[i].Sum);
         stu[i].Sum=0;
         break;
         }
         }
         }
         getchar();
         getchar();
         getchar();
         }