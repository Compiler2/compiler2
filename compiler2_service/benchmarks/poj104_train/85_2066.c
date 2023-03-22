#define NUM_ITER 31449

#include <header.h>

int main_bench()
{
    int n,i,j,sz[100];
    char sr[100][100];
    my_scanf("%d",&n);
	char zfc;
	my_scanf("%c",&zfc);
    for(i=0;i<n;i++){
		gets(sr[i]);
	}
    for(i=0;i<n;i++){
		sz[i]=0;
		for(j=0;sr[i][j]!='\0';j++){
		   if(j==0){
				if((sr[i][j]>='A'&&sr[i][j]<='Z')||(sr[i][j]>='a'&&sr[i][j]<='z')||(sr[i][j]=='_')){
					sz[i]=1;
				}else{
					sz[i]=0;
					break;
				}
			}else if(j>0){
				if ((sr[i][j]>='A'&&sr[i][j]<='Z')||(sr[i][j]>='a'&&sr[i][j]<='z')||(sr[i][j]=='_')||(sr[i][j]>='0'&&sr[i][j]<='9')){
				sz[i]=1;
				}else{
				sz[i]=0;
				break;
				}
				}else{
			    sz[i]=0;
				break;
			 }
		 }
	if(sz[i]==0){
		my_printf("no\n");
	}else{
		my_printf("yes\n");
	}
	}
    return 0;
}