#define NUM_ITER 16574

#include <header.h>


int main_bench()
{
	int i,j,k,count,n;
	my_scanf("%d\n",&n);
	char s[100000];
	for(i=0;i<n;i++){
		gets(s);
		int len=strlen(s);
		int sum=0;
		for(j=0;j<len;j++){
			int count=0;
			for(k=0;k<len;k++){
				if(s[j]!=s[k]){
					count++;
				}	
			}
			if(count==len-1){
				sum++;
			}
		}
		if(sum==0){
			my_printf("no\n");
		}
		else{
			for(j=0;j<len;j++){
				count=0;
				for(k=0;k<len;k++){
					if(s[j]!=s[k]){
						count++;
					}
				}
				if(count==len-1){
					my_printf("%c\n",s[j]);
					break;
				}
			}
		}
	}

	return 0;
}
