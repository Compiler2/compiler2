#define NUM_ITER 35

#include <header.h>


int main_bench()

{

	char sz[110][110];

	int n,row,col;

	my_scanf("%d",&n);

	char s0[110];

	for(row=0;row<n;row++){

		my_scanf("%s",s0);

		for(col=0;col<n;col++){

			

			sz[row][col]=s0[col];

			

		}

	}

	for(row=0;row<n;row++){

		for(col=0;col<n;col++){

			if(sz[row][col]=='.') sz[row][col]=1;

			if(sz[row][col]=='@') sz[row][col]=2;

			if(sz[row][col]=='#') sz[row][col]=3;

		}

	}

	int m,i;

	char szz[110][110];

	my_scanf("%d",&m);

	for(i=0;i<m-1;i++){

		for(row=0;row<n;row++){

			for(col=0;col<n;col++){

				if(sz[row][col]==2){

					if(sz[row-1][col]==1) szz[row-1][col]=2;

					if(sz[row+1][col]==1) szz[row+1][col]=2;

					if(sz[row][col+1]==1) szz[row][col+1]=2;

					if(sz[row][col-1]==1) szz[row][col-1]=2;

				}

			}

		}

		for(row=0;row<n;row++){

			for(col=0;col<n;col++){

				if(szz[row][col]==2) sz[row][col]=2;

			}

		}

	}

	int s=0;

	for(row=0;row<n;row++){

		for(col=0;col<n;col++){

			if(sz[row][col]==2) s=s++;

		}

	}

	my_printf("%d",s);

	return 0;

}