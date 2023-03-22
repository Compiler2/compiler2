#define NUM_ITER 57861

#include <header.h>

int t[4];
int main_bench(){
   int i,n,m;
   my_scanf("%d",&m);
    for(i=0;i<m;i++)
    {
    my_scanf("%d",&n);
    if(n<19)t[0]++;
    else if(n<36)t[1]++;
    else if(n<61)t[2]++;
    else t[3]++;
    }
    my_printf("1-18: %.2f%%\n",(double)t[0]/m*100);
    my_printf("19-35: %.2f%%\n",(double)t[1]/m*100);
    my_printf("36-60: %.2f%%\n",(double)t[2]/m*100);
    my_printf("Over60: %.2f%%",(double)t[3]/m*100);
    return 0;
}
