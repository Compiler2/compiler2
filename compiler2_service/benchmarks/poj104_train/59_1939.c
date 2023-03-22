#define NUM_ITER 38

#include <header.h>

int main_bench(){
char s[200][200];
int n,m,i,j,t,p,a[200][200];
p=0;
my_scanf("%d",&n);
for(i=0;i<=n+1;i++){
	for(j=0;j<=n+1;j++){
        a[i][j]=0;
	}
}
for(i=0;i<=n+1;i++) {
    s[0][i]='#';
	s[n+1][i]='#';
	s[i][0]='#';
	s[i][n+1]='#';
}
for(i=1;i<n+1;i++){
	for(j=1;j<n+1;j++){
        my_scanf(" %c",&s[i][j]);
	}
}
my_scanf("%d",&m);
for(t=2;t<=m;t++){
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(s[i][j]=='.'&&((s[i-1][j]=='@'&&a[i-1][j]<(t-1))||(s[i][j-1]=='@'&&a[i][j-1]<(t-1))||(s[i][j+1]=='@'&&a[i][j+1]<(t-1))||(s[i+1][j]=='@'&&a[i+1][j]<(t-1)))){
				s[i][j]='@';
				a[i][j]=t-1;
			}
		}
	}
}
for(i=1;i<=n;i++){
	for(j=1;j<=n;j++){
		if(s[i][j]=='@'){
			p=p+1;
		}
	}
}
my_printf("%d",p);
return 0;
}