#define NUM_ITER 19664

#include <header.h>

int main_bench(){
	char s[10000][21];
	int n,i,j;
    int c[10000]={0},d[10000]={0};
    my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",&(s[i]));  
	}
	for(i=0;i<n;i++){
		if(s[i][0]=='_'||(s[i][0]>='a'&&s[i][0]<='z')||(s[i][0]>='A'&&s[i][0]<='Z')){
			d[i]++;
		}
        else{
			c[i]=1;
		}
		for(j=0;s[i][j]!='\0';j++){
			if((s[i][j]>='a'&&s[i][j]<='z')||(s[i][j]>='A'&&s[i][j]<='Z')||(s[i][j]>='0'&&s[i][j]<='9')||s[i][j]=='_'){
				continue;
			}
		    else{
				c[i]=1;
			}
		}
	}
	for(i=0;i<n;i++){
	if(c[i]==0){
			my_printf("yes\n");
		}
		else{
			my_printf("no\n");
		}

	}
	return 0;
}
