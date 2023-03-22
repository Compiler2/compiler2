#define NUM_ITER 19888

#include <header.h>

int main_bench()
{
    struct student
    {
        int ID;
        int yuwen;
        int shuxue;
        int zongfen;
    };
    struct student student[100000];
    int n,i,max,maxID;
    my_scanf("%d",&n);
    for(i=1;i<=n;i++)
        my_scanf("%d %d %d",&student[i].ID,&student[i].yuwen,&student[i].shuxue);
    for(i=1;i<=n;i++)
        student[i].zongfen=student[i].yuwen+student[i].shuxue;
    for(int j=1;j<=3;j++)
    {
        maxID=1;
        max=student[1].zongfen;
        for(i=2;i<=n;i++)
            if(student[i].zongfen>max)
            {
                maxID=student[i].ID;
                max=student[i].zongfen;
            }
        my_printf("%d %d\n",maxID,max);
        student[maxID].zongfen=0;
    }
}