#define NUM_ITER 94297

#include <header.h>

int main_bench(){
	int n,a[500]={0},i,j,k,t,max;
	char s[500];
	my_scanf("%d\n",&n);
	gets(s);
	for(i=0;i<strlen(s);i++){
		for(j=i+1;j<strlen(s);j++){
			t=1;
			for(k=0;k<n;k++)
				if(s[i+k]!=s[j+k])
					t=0;
			if(t==1)
				a[i]++;
		}
	}
	t=0;
	for(i=0;i<strlen(s);i++)
		if(a[i]>0){
			t=1;
			break;
		}
	if(t==0)
		my_printf("NO");
	else{
		max=1;
		for(i=0;i<strlen(s);i++)
			if(a[i]>max)
				max=a[i];
		my_printf("%d\n",max+1);
		for(i=0;i<strlen(s);i++)
			if(a[i]==max){
				for(j=i;j<i+n;j++)
					my_printf("%c",s[j]);
				my_printf("\n");
			}
	}
	return 0;
}