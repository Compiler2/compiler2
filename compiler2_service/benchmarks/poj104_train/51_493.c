#include <header.h>

int main_bench(){
	int n,i,len,j,max=1;
	int b[500];
	char a[500];
	char c[500][5]={0};
	my_scanf("%d",&n);
	getchar();
	gets(a);
	len=strlen(a);
	for(i=0;i<=len-n;i++){
		b[i]=1;
		for(j=0;j<n;j++){
			c[i][j]=a[i+j];
		}
	}

	for(i=0;i<=len-n;i++){
		for(j=i+1;j<=len-n;j++){
			if(strcmp(c[j],c[i])==0){
				b[i]+=1;
				b[j]=0;
			}
		}
	}

	for(i=0;i<=len-n;i++){
		if(b[i]>max) max=b[i];
	}
	if(max==1) my_printf("NO");
	else{
		my_printf("%d\n",max);
		for(i=0;i<=len-n;i++){
			if(b[i]==max) my_printf("%s\n",c[i]);
		}
	}
	return 0;
}
