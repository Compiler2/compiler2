#define NUM_ITER 6947

#include <header.h>

struct BING
{
       char id[10];
       int old;
}bing[100],temp;
int main_bench()
{
    int i,j,k,n,p,max;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
                     my_scanf("%s%d",bing[i].id,&bing[i].old);
                     }
    for(p=0;;p++){max=-1;
                  for(i=0;i<n;i++){
                                   if(bing[i].old>max&&bing[i].old>=60){max=bing[i].old;k=i;}
                                        }
    if(max>=60) {my_printf("%s\n",bing[k].id);bing[k].old=-1;}
    if(max<60) break;}
    for(i=0;i<n;i++){
                    if(bing[i].old<60&&bing[i].old>=0) my_printf("%s\n",bing[i].id) ;
                     } 
    return 0;
}
