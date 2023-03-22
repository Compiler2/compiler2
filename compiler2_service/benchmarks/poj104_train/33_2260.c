#define NUM_ITER 14634

#include <header.h>

main_bench()
{
int i,n,m,j,k;
char A[1000][256],B[1000][256]={0};
int len[1000];

my_scanf("%d",&n);

for(j=0;j<n;j++){
	my_scanf("%s",&A[j]);
}
for(j=0;j<n;j++){
	len[j]=strlen(A[j]);
}

for(j=0;j<n;j++){
	for(i=0;i<len[j];i++)
	{
		if(A[j][i]=='A') B[j][i]='T';
		if(A[j][i]=='T') B[j][i]='A';
		if(A[j][i]=='G') B[j][i]='C';
		if(A[j][i]=='C') B[j][i]='G';
		if(A[j][i]=='\0') B[j][i]='\0';
	}
}

for(j=0;j<n;j++){

	my_printf("%s\n",B[j]);
}


return 0;
}


