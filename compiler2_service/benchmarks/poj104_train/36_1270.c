#define NUM_ITER 119704

#include <header.h>

int main_bench(){
	int a[256],n,i,j,c1,c2,c3,c4,k;
	float d;
	char s1[200],s2[200];
	my_scanf("%s %s",s1,s2);
	memset(a,0,sizeof(a));
	c1=strlen(s1);
	c2=strlen(s2);
	for(i=0;i<c1;i++){
		k=s1[i];
		a[k]++;
	}
	for(i=0;i<c2;i++){
		k=s2[i];
		a[k]--;
	}
	c3=1;
	for(i=0;i<256;i++){
		
		if(a[i]!=0){
			c3=0;
	}
	}
	if(c3){my_printf("YES");}
	else{my_printf("NO");}
		
	
		return 0;
}