#define NUM_ITER 35

#include <header.h>

int main_bench(){
int m,n,i,j,k,a[111][111],s=0;
char b;
my_scanf("%d",&n);
my_scanf("\n");
for (i=1;i<=n;i++){
for (j=1;j<=n;j++){
my_scanf("%c",&b);
if (b=='.') a[i][j]=1;
if (b=='#') a[i][j]=0;
if (b=='@') a[i][j]=2;
}
my_scanf("\n");
}
my_scanf("%d",&m);
for (k=1;k<=m-1;k++){
    for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
		  if (a[i][j]==2)
		  {
              if (a[i-1][j]!=0&&a[i-1][j]!=2) a[i-1][j]=3;
			  if (a[i+1][j]!=0&&a[i+1][j]!=2) a[i+1][j]=3;
			  if (a[i][j+1]!=0&&a[i][j+1]!=2) a[i][j+1]=3;
			  if (a[i][j-1]!=0&&a[i][j-1]!=2) a[i][j-1]=3;
		  }

for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
		  if (a[i][j]==3) a[i][j]=2;
}
 for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
		  if (a[i][j]==2) 
			  s=s+1;
		  my_printf("%d",s);


return 0;
}