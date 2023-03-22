#define NUM_ITER 19173

#include <header.h>


int main_bench(){
	int i,j,n;
	char zfc[2000][500];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%s",&zfc[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<(strlen(zfc[i]));j++)
		{

			if (zfc[i][j]=='A')
				zfc[i][j]='T';
			else if (zfc[i][j]=='T')
				zfc[i][j]='A';
			else if (zfc[i][j]=='C')
				zfc[i][j]='G';
			else if (zfc[i][j]=='G')
				zfc[i][j]='C';
		}
	}
	for(i=0;i<n;i++)
		my_printf("%s\n",zfc[i]);
	

	return 0;
}

