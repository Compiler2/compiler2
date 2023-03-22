#include <header.h>

int main_bench()
{
int n[100],m[100],i,j,s[100];
for(i=1;n[i-1]!=0,m[i-1]!=0;i++){
  my_scanf("%d %d", &(n[i]),&(m[i]));
}
for(i=1;n[i-1]!=0,m[i-1]!=0;i++){
	s[i]=0;
	for(j=2;j<=n[i];j++) {
		s[i]=(s[i]+m[i])%j;
	}
	if(n[i]!=0,m[i]!=0){
    my_printf("%d\n", s[i]+1);
	}
}
return 0;
}
