#define NUM_ITER 32206

#include <header.h>

int main_bench(){
int n,i,a[100],b[100],c=0,d=0,e=0;
my_scanf("%d",&n);
for(i=0;i<n;i++){
	my_scanf("%d %d",&a[i],&b[i]);
}
for(i=0;i<n;i++){
	if(a[i]==b[i]) e++;
	else if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)) c++;
	else if((a[i]==0&&b[i]==2)||(a[i]==1&&b[i]==0)||(a[i]==2&&b[i]==1)) d++;
}


if(c>d) my_printf("A\n");
else if(c<d) my_printf("B\n");
else if(c=d) my_printf("Tie\n");
	return 0;
}
