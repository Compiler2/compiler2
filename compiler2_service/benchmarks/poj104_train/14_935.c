#define NUM_ITER 19439

#include <header.h>

int main_bench()
{
    struct student
    {
       int num;
       int chinese;
       int mathematics;
       int sum;
       }temp;
    struct student stu[100000];
    int i,j,n;
    my_scanf("%d",&n);
    for (i=0;i<n;i++){
        my_scanf("%d %d %d",&stu[i].num,&stu[i].chinese,&stu[i].mathematics);
        stu[i].sum=stu[i].chinese+stu[i].mathematics;
        }
    for (i=0;i<3;i++){
        for (j=0;j<n-i-1;j++){
            if (stu[j].sum>=stu[j+1].sum){
                temp=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=temp;
                }
            }
        }
    for (i=n-1;i>=n-3;i--){
        my_printf("%d %d\n",stu[i].num,stu[i].sum);}
    return 0;
    }