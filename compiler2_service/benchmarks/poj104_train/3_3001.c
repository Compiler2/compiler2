#include <header.h>

int main_bench(){
int n;
int k;
my_scanf("%d %d",&n,&k);
int s[1000];
for(int a=0;a<n;a++){
    my_scanf("%d",&(s[a]));
}
int b;
for(int c=0;c<n;c++){
for(int i=0;i<n;i++){
    b=s[c]+s[i];
	if(b==k){
	my_printf("yes");
	return 0;
	}
}
}
my_printf("no");
return 0;
}