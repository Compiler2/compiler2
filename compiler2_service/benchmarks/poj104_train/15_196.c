#define NUM_ITER 665

#include <header.h>

int main_bench()
{
    int n,i,j,a,b,q=0,m=0,number;
	my_scanf("%d",&n);
    int s[100][100];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			my_scanf("%d",&s[i][j]);}
		if(j==(n-1)){
			my_scanf("%d\n",&s[i][j]);}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(s[i][j]==0)
				q++;}
if (q!=0)
		break;
	}
	for(a=0;a<n;a++){
		for(b=0;b<n;b++){
			if(s[b][a]==0)
				m++;}
		if(m!=0)
				break;
		}
	
	number=(q-2)*(m-2);
  my_printf("%d",number);
	
	return 0;



}
