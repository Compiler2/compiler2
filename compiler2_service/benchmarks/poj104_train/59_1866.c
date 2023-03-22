#include <header.h>

int main_bench(){
    int n,m,i,j,c=0,l,b[106][106];
    char room[106][106];
    my_scanf("%d",&n);my_scanf("\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
        {
            my_scanf("%c",&room[i][j]);
            if(room[i][j]=='@'){b[i][j]=1;}
        }
        my_scanf("\n");
    }
    my_scanf("%d",&m);
    for(i=0;i<=n+1;i++){
        room[0][i]='#';room[n+1][i]='#';room[i][0]='#';room[i][n+1]='#';
    }
    for(l=2;l<=m;l++){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(room[i][j]=='@'){
            if(room[i][j-1]!='#'){b[i][j-1]=1;}
            if(room[i][j+1]!='#'){b[i][j+1]=1;}
            if(room[i-1][j]!='#'){b[i-1][j]=1;}
            if(room[i+1][j]!='#'){b[i+1][j]=1;}
            }
        }
    }

for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(b[i][j]==1){room[i][j]='@';}
    }
}
}
     for(i=1;i<=n;i++){
         for(j=1;j<=n;j++){
             if(b[i][j]==1){
                 c++;
             }
         }
     }

    my_printf("%d",c);
    return 0;
    
}









