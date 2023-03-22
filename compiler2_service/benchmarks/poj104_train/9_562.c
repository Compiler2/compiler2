#define NUM_ITER 2916

#include <header.h>

int main_bench()
{
    int n,i,age,max,t,numold,numyoung;
    char id[101][10],young[101][10];
    int x[101],r[101];
    my_scanf("%d",&n);
    for (i=0;i<101;i++) 
    {
        x[i]=0;
        r[i]=0;
        }
    numold=0;numyoung=0;
    for (i=1;i<=n;i++)
    {
        my_scanf("%s %d",id[i],&age);
        if (age>=60) 
        {
           x[i]=age;
           numold++;
           }
        else 
        {
             numyoung++;
             strcpy(young[numyoung],id[i]);
             }
        }
    for (i=1;i<101;i++)
    {
        max=1;
        for (int j=2;j<101;j++) 
        {
            if (x[j]>x[max]) max=j;
            }
        x[max]=0;
        t=i;
        r[i]=max;
        max=t;
        }
    for (i=1;i<=numold;i++) my_printf("%s\n",id[r[i]]); 
    for (i=1;i<=numyoung;i++) my_printf("%s\n",young[i]);
    }
