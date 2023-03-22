#include <header.h>

int main_bench()
{
	int i,j,n,k;
	char s[21];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{my_scanf("%s",s);
	k=0;
	for(j=0;s[j];j++){
		k++;}
	for(j=0;s[j];j++){
		if(!((s[j]=='_')||(s[j]
>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||
(s[j]>='0'&&s[j]<='9'&&j!=0))){
			break;}
	}
	if(j<k){
		my_printf("no\n");
	}else{my_printf("yes\n");}
	}
	return 0;
}
