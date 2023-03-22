#define NUM_ITER 32

#include <header.h>

int main_bench(){
int k,sz[100][100],m,n,p,i,j,s[100]={0};
my_scanf("%d",&k);
for(p=0;p<k;p++){
    my_scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            my_scanf("%d",&(sz[i][j]));
        }
    }
    if(m==1&&n==1){
        s[p]=sz[0][0];
    }
    else{
    for(j=0;j<n;j++){
        s[p]=s[p]+sz[0][j]+sz[m-1][j];
    }
    for(i=0;i<m;i++){
        s[p]=s[p]+sz[i][0]+sz[i][n-1];
    }
    s[p]=s[p]-sz[0][0]-sz[0][n-1]-sz[m-1][0]-sz[m-1][n-1];
}
}
for(p=0;p<k;p++){
    my_printf("%d\n",s[p]);
}
return 0;
}

