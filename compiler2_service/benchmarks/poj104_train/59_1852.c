#define NUM_ITER 22

#include <header.h>

int main_bench(){
    int n,m,a,b,i,s=0;
    char p[200][200];
    char q[200][200];
    my_scanf("%d",&n);
    for(a=1;a<n+1;a++){
        for(b=1;b<n+1;b++){
            my_scanf(" %c",&p[a][b]);
            q[a][b]=p[a][b];
        }
    }
    my_scanf("%d",&m);
    for(i=0;i<n+2;i++){p[0][i]='#';p[n+1][i]='#';p[i][0]='#';p[i][n+1]='#';}
    for(i=1;i<m;i++){
        for(a=1;a<n+1;a++){
            for(b=1;b<n+1;b++){if(p[a][b]!='#'){
                if(p[a-1][b]=='@'||p[a+1][b]=='@'||p[a][b-1]=='@'||p[a][b+1]=='@'){
                    q[a][b]='@';
                } }
            }
        }
        for(a=1;a<n+1;a++){
            for(b=1;b<n+1;b++){p[a][b]=q[a][b];}
        }
    }
    for(a=1;a<n+1;a++){for(b=1;b<n+1;b++){if(p[a][b]=='@'){s=s+1;}}}
    my_printf("%d",s);
    return 0;
}