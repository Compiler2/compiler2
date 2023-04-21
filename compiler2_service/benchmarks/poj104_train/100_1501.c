#define NUM_ITER 450423

#include <header.h>

int main_bench(){
	char a[301];
	int c[26];
	int C[26];
	for(int n=0;n<26;n++){
		c[n]=0;
		C[n]=0;
	}
	my_scanf("%s",a);
	int length;
	length=strlen(a);
	for(int i=0;i<length;i++){
		if(a[i]>='a'&&a[i]<='z'){
			c[a[i]-'a']++;
		}
		if(a[i]>='A'&&a[i]<='Z'){
			C[a[i]-'A']++;
		}
	}
	char x;
	int m=0;
	for(int j=0;j<26;j++){
		if(C[j]!=0){
			if(m==0){
				x=j+'A';
			    my_printf("%c=%d",x,C[j]);
			}
			else{
				x=j+'A';
			    my_printf("\n%c=%d",x,C[j]);
			}
			m++;
		}
	}
	for(int k=0;k<26;k++){
		if(c[k]!=0){
			x=k+'a';
			my_printf("\n%c=%d",x,c[k]);
			m++;
		}
	}
	if(m==0){
		my_printf("No");
	}
	return 0;
}