#define NUM_ITER 28

#include <header.h>

int n,map[101][101];
void cover(int x,int y){
     if(x>1&&map[x-1][y]==0)map[x-1][y]=2;
     if(y>1&&map[x][y-1]==0)map[x][y-1]=2;
     if(x<n&&map[x+1][y]==0)map[x+1][y]=2;
     if(y<n&&map[x][y+1]==0)map[x][y+1]=2;
 }
int main_bench(){
   int m,i,j,s;
    my_scanf("%d",&n);
    char c;
    for(i=1;i<=n;i++){
         my_scanf("%c",&c);
         for(j=1;j<=n;j++)
           {my_scanf("%c",&c);
            if(c=='.')map[i][j]=0;
            else if(c=='#')map[i][j]=-1;
            else if(c=='@')map[i][j]=1;
           }
        }
    my_scanf("%d",&m);
    m--;
    while(m--){
       for(i=1;i<=n;i++)
         for(j=1;j<=n;j++)
            if(map[i][j]==1)
             cover(i,j);
	  for(i=1;i<=n;i++)
         for(j=1;j<=n;j++)
            if(map[i][j]>=1)
             map[i][j]=1;   

       }
    s=0;
    for(i=1;i<=n;i++)
     for(j=1;j<=n;j++)
        if(map[i][j]==1)s++;
   my_printf("%d\n",s);
    return 0;
}
