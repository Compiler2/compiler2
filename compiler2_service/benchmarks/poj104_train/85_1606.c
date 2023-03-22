#include <header.h>

int main_bench(){
	int n,i,j;
	char z[500][500];
	int a[500],d[500]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",z[i]);
		a[i]=strlen(z[i]);
	}
	for(i=0;i<n;i++){
		for(j=1;j<a[i];j++){
			if((z[i][0]>='A'&&z[i][0]<='Z')||(z[i][0]=='_')||(z[i][0]>='a'&&z[i][0]<='z')){
				if((z[i][j]>='A'&&z[i][j]<='Z')||(z[i][j]=='_')||(z[i][j]>='a'&&z[i][j]<='z')||(z[i][j]>='0'&&z[i][j]<='9')){
			d[i]=1;
		}else{
			d[i]=0;
			break;
		}
		}
		}
	}
	for(i=0;i<n;i++){
		if(d[i]==1){
             my_printf("yes\n");
		}else{
             my_printf("no\n");
		}
	}
	return 0;

}
