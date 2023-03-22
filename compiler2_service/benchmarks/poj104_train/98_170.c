#define NUM_ITER 30162

#include <header.h>

int main_bench()
{
char x[500][50]={0};
    int i,j,m,k,total,temp,y[500];
    my_scanf("%d",&k);
    temp=k;
    for(i=0;i<=k-1;i++)
    my_scanf("%s",x[i]);
    for(i=0;i<=k-1;i++)
    y[i]=strlen(x[i]);
    for(i=0;;)
    {
                 my_printf("%s",x[i]);
                 total=y[i];
                 temp--;
                 for(j=i+1;;j++)
                 {
                                total=total+y[j]+1;
                                if(total>80) break;
                                temp--;
                                if(temp==0) break;
                 }
                 if(temp!=0)
                 {
                 for(m=i+1;m<=j-1;m++)
                 my_printf(" %s",x[m]);
                 my_printf("\n");
                 i=j;
                 }
                 else 
                 {
                      for(m=i+1;m<=k-1;m++)
                      my_printf(" %s",x[m]);
                      my_printf("\n");
                      break;
                 }
    }
return 0;
}