#define NUM_ITER 31

#include <header.h>

int main_bench(){
    int k,n[1000],m[1000],a,b,c,s[100][100],x[1000];
    my_scanf("%d",&k);
    for(a=0;a<k;a++){
        my_scanf("%d %d",&m[a],&n[a]);
        for(b=0;b<m[a];b++){
            for(c=0;c<n[a];c++){
                my_scanf("%d",&s[b][c]);
            }
        }
        x[a]=0;
            for(c=0;c<n[a];c++){
                if(m[a]>1){
            x[a]=x[a]+s[0][c]+s[m[a]-1][c];
        }else{
            x[a]=x[a]+s[0][c];
        }
            }
       if(m[a]>2){
       if(n[a]>1){for(b=1;b<m[a]-1;b++){
            x[a]=x[a]+s[b][0]+s[b][n[a]-1];
        }
       }else{
           x[a]=x[a]+s[b][0];
       }
       }
        my_printf("%d\n",x[a]);
    }
    return 0;
}