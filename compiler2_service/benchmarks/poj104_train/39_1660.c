#define NUM_ITER 10600

#include <header.h>

struct student
{
char name[21];
int fin;
int cla;
char q1;
char q2;
int pap;
}stu[101];
int main_bench()
{
int n,i;
char namem[21];
int max=0,money[101];
int total=0;
my_scanf("%d",&n);
for(i=0;i<n;i++)
{
money[i]=0;
my_scanf("%s %d %d %c %c %d",
&stu[i].name,&stu[i].fin,&stu[i].cla,&stu[i].q1,&stu[i].q2,&stu[i].pap);
if(stu[i].fin>80&&stu[i].pap>0) money[i]+=8000;
if(stu[i].fin>85&&stu[i].cla>80) money[i]+=4000;
if(stu[i].fin>90) money[i]+=2000;
if(stu[i].fin>85&&stu[i].q2=='Y') money[i]+=1000;
if(stu[i].cla>80&&stu[i].q1=='Y') money[i]+=850;
if(money[i]>money[max]){max=i;}
total+=money[i];
}
my_printf("%s\n%d\n%d\n",stu[max].name,money[max],total);
}