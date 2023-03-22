#define NUM_ITER 3272

#include <header.h>

int main_bench(){
int n,k,i,m,sz1[1000],sz2[1000];
int t=0;
my_scanf("%d%d\n",&n,&k);
for(i=0;i<n;i++){
    my_scanf("%d",&(sz1[i]));
    sz2[i]=sz1[i];
}for(m=0;m<n;m++){
    for(i=0;i<n;i++){
        if(k==sz1[m]+sz2[i]){t++;}
    }
}if(t>0){
    my_printf("yes");
}else{my_printf("no");}
    return 0;
}
