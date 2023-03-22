#include <header.h>

int main_bench(){
int n,s,r,l;
int sz[100][100];
s=0;
my_scanf("%d",&n);
for (int i=0;i<n;i++){
	my_scanf("%d",&r);
	my_scanf("%d",&l);
	for(int j=0;j<r;j++){
		for(int k=0;k<l;k++){
			my_scanf("%d",&(sz[j][k]));
			if((j==0)||(j==r-1)||((j!=0)&&(k==0))||((j!=0)&&(k==l-1))){
				s=s+sz[j][k];

}}}my_printf ("%d\n",s);
   s=0;
}
	return 0;
}
