#define NUM_ITER 31

#include <header.h>

int  main_bench(){
int  sz[100][100]; 
int m,n,k;

my_scanf("%d",&k);
int i;
for(int  h=0;h<k;h++){
int sum=0;
my_scanf("%d%d",&m,&n);
for(i=0;i<m;i++){
			for(int j=0;j<n;j++)
				my_scanf("%d",&sz[i][j]);
}


for(int j=0;j<n;j++){
sum+=sz[0][j];
sum+=sz[m-1][j];
}

for(i=1;i<m-1;i++){
sum+=sz[i][0];
sum+=sz[i][n-1];
}
my_printf("%d\n",sum); 
}
return 0;
}