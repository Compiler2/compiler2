#define NUM_ITER 9930

#include <header.h>

int main_bench()
{
	int a[26],flag1,flag2,len;
	int t,i,j,k;
	char s[100],c[26];

	my_scanf("%d",&t);

	while(t--){
		for(i=0;i<26;i++){
			a[i]=0;
		}
		k=0;
		flag2=0;

		my_scanf("%s",s);
		len=strlen(s);	
	
		for(i=0;i<len;i++){
			if(i==0){
				c[k]=s[i];
				k++;
			}
			else{
				flag1=0;
				for(j=0;j<i;j++){
					if(c[j]==s[i]){
						flag1=1;
						a[j]=1;
					}
				}
				if(flag1==0){
					c[k]=s[i];
					k++;
				}
			}
		}

		for(i=0;i<k;i++){
			if(a[i]==0){
				my_printf("%c\n",c[i]);
				flag2=1;
				break;
			}
		}

		if(flag2==0)
			my_printf("no\n");
	}
}