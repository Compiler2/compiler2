#define NUM_ITER 109977

#include <header.h>

int main_bench()
{
	char a[300]={0};
	int b[52],flag=0;
	int i=0,len;
	my_scanf("%s",a);
	len=sizeof(a);
	for(i=0;i<52;i++){
		b[i]=0;
	}
	
    
	for(i=0;i<len;i++){
		if(a[i]<='Z'&&a[i]>='A')b[a[i]-65]++;
		if(a[i]<='z'&&a[i]>='a')b[a[i]-71]++;
	}

	for(i=0;i<26;i++){
		if(b[i]!=0){
			my_printf("%c=%d\n",i+65,b[i]);
			flag=1;
		}
	}
    for(i=26;i<52;i++){
		if(b[i]!=0){
			my_printf("%c=%d\n",i+71,b[i]);
			flag=1;
		}
	}

	if(flag==0)my_printf("No");
	return 0;
}

