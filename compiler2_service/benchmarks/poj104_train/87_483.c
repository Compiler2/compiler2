#define NUM_ITER 13244

#include <header.h>

int main_bench()
{
    int a,b,c,d,e,f,i,k;
    int s[1000];
    k=0;

    for(i = 0; i < 1000; i++){
    my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    if(a==0){
    break;
    }
    s[i]=3600-b*60-c+(d+11-a)*3600+e*60+f;
    k++;
    }

   for(i = 0; i < k; i++){
       my_printf("%d\n",s[i]);
       }
        return 0;
}
