#define NUM_ITER 24448

#include <header.h>

int main_bench() {
	char a[100][20];
	int n,i,j;
	int len[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",a[i]);
		len[i]=strlen(a[i]);
	}
	int w;
	for(i=0;i<n;i++){
		w=0;
		for(j=0;j<len[i];j++){
			if(((a[i][j]>=48)&&(a[i][j]<=57))||((a[i][j]>=97)&&(a[i][j]<=122))||((a[i][j]>=65)&&(a[i][j]<=90))||(a[i][j]==95)){
				w++;
			}
		}
		if(w==len[i]){
			if(((a[i][0]>=48)&&(a[i][0]<=57))){
				my_printf("no\n");
			}else {
			    my_printf("yes\n");
			}
		}else {
			my_printf("no\n");
		}
	}
	return 0;
}


