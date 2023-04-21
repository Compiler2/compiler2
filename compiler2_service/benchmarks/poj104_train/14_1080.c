#define NUM_ITER 21475

#include <header.h>

int main_bench()
{
struct student
{int ID;
int YW;
int SX;
};
struct student stu[100000];
int ZF[100000];
int n;
my_scanf("%d",&n);
for(int i=0;i<n;i++)
{
        my_scanf("%d",&stu[i].ID);
        my_scanf("%d",&stu[i].YW);
        my_scanf("%d",&stu[i].SX);
        ZF[i]=stu[i].YW+stu[i].SX;
}
int a=0,b=0,c=0,A=0,B=0,C=0;
for(int i=0;i<n;i++)
{
        if(ZF[i]>a)
        {
        c=b;C=B;b=a;B=A;a=ZF[i];A=i;}
        else if(ZF[i]>b)
        {c=b;C=B;b=ZF[i];B=i;}
        else if(ZF[i]>c)
        {c=ZF[i];C=i;}
}
my_printf("%d %d\n",stu[A].ID,a);
my_printf("%d %d\n",stu[B].ID,b);
my_printf("%d %d\n",stu[C].ID,c);
getchar();
getchar();
}
