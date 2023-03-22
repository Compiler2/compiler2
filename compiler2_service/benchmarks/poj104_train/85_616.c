#include <header.h>

int main_bench(){
	int n,i,j,a[100],len[100];
	char zfc[100][20];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",zfc[i]);
		len[i]=strlen(zfc[i]);
	}
	for(i=0;i<n;i++){
		a[i]=0;
		for(j=0;zfc[i][j]!=0;j++){
			if(((zfc[i][0]<='z'&&zfc[i][0]>='a')||(zfc[i][0]<='Z'&&zfc[i][0]>='A')||(zfc[i][0]=='_'))&&((zfc[i][j]<='z'&&zfc[i][j]>='a')||(zfc[i][j]<='Z'&&zfc[i][j]>='A')||(zfc[i][j]<='9'&&zfc[i][j]>='0')||zfc[i][j]=='_')){
				a[i]++;
			}else{
				a[i]+=2;
			}
		}
	}
	for(i=0;i<n;i++){
		if(a[i]==len[i]){
			my_printf("yes\n");
		}else{
			my_printf("no\n");
		}
	}
	return 0;
}
