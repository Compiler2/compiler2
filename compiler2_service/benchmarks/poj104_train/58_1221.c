#define NUM_ITER 1514182

#include <header.h>

int main_bench(){
int n,i,len,k;
char x[100],a[81];
gets(x);
n=atoi(x);
for(i=0;i<n;i++){
	gets(a);
	if(a[0]=='_'||(a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z'))
	{
    len=strlen(a);
	for(k=1;k<len;k++)
	{
		if(a[k]=='_'||(a[k]>='a'&&a[k]<='z')||(a[k]>='A'&&a[k]<='Z')||(a[k]>='0'&&a[k]<='9'))
		{
			continue;
		}
		else
		{
			break;
		}
	}
	}
	else{
		k=0;
	}
	if(k==len){
		my_printf("1\n");
	}
	else{
		my_printf("0\n");
	}
}
return 0;
}

