#define NUM_ITER 907700

#include <header.h>

int main_bench(){
	int i,r1,r2,num=0,index=0;
	double n;
	char a[501],b[501];
	my_scanf("%lf\n",&n);
	my_scanf("%s\n",a);
	my_scanf("%s",b);
	r1=strlen(a);
	r2=strlen(b);
	for(i=0;i<r1;i++){
		if(a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G')continue;
		else{
			index=1;
			break;
		}
	}
	for(i=0;i<r2;i++){
		if(b[i]=='A'||b[i]=='T'||b[i]=='C'||b[i]=='G')continue;
		else{
			index=1;
			break;
		}
	}
	if(r1!=r2||index==1)my_printf("error");
	else{
		for(i=0;i<r1;i++){
			if(a[i]==b[i])num++;
		}
		if((num*1.0/r1)>=n)my_printf("yes");
		else my_printf("no");
	
	}
	return 0;

}