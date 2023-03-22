#include <header.h>

int main_bench() 
{int m=0,k; 
int i,n,j; 
my_scanf("%d",&n);
j=n;
int sz[j],ss[j]; 
for(i=0;i<j;i++){
	my_scanf("%d %d",&sz[i],&ss[i]);
}
for(i=0;i<n;i++){
	if(sz[i]>=90&&sz[i]<=140&&ss[i]>=60&&ss[i]<=90){
		m++;}
	else { k=(k>=m)?k:m;
	m=0;
}}
	k=(k>=m)?k:m;

my_printf("%d",k);
return 0;
}