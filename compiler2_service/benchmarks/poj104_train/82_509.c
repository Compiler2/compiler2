#define NUM_ITER 32817

#include <header.h>

int main_bench()
{
    int n,i,t=0,s=0,h,l;
    my_scanf("%d",&n);
    int ss[100],sz[100],xs[100]={0};
	xs[0]=0;
    for(i=0;i<n;i++){
        my_scanf("%d %d",&(ss[i]),&(sz[i]));
        if((ss[i]<=140)&&(ss[i]>=90)&&(sz[i]<=90)&&(sz[i]>=60)){
           s++;
           xs[t]=s;}
        else {s=0;
              t++;}
              }
    l=t;
    h=xs[0];
    for(t=0;t<=l;t++){
        if(h<(xs[t]))
        h=xs[t];
        }              
    my_printf("%d",h);      
    return 0;
}