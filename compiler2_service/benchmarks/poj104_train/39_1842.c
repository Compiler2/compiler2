#include <header.h>

int main_bench()
{
 struct student
{char name[20];
 int  g1;
 int  g2;
 char c;
 char w;
 int  p;}stu[100];
 int n,s[100],total=0,max=0,i;
 my_scanf("%d\n",&n);
 for(i=0;i<n;i++)
 my_scanf("%s %d %d %c %c %d\n",&stu[i].name,&stu[i].g1,&stu[i].g2,&stu[i].c,&stu[i].w,&stu[i].p);
 for(i=0;i<n;i++)
{ if(stu[i].g1>80&&stu[i].p>=1)s[i]=s[i]+8000;
 if(stu[i].g1>85&&stu[i].g2>80)s[i]=s[i]+4000;
 if(stu[i].g1>90)s[i]=s[i]+2000;
 if(stu[i].g1>85&&stu[i].w=='Y')s[i]=s[i]+1000;
 if(stu[i].g2>80&&stu[i].c=='Y')s[i]=s[i]+850;
 total=total+s[i];}
 for(i=1;i<n;i++)
 if(s[i]>s[max])max=i;
 my_printf("%s\n",stu[max].name);
 my_printf("%d\n",s[max]);
 my_printf("%d\n",total);
 return 0;
}
