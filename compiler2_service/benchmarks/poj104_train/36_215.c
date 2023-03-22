#define NUM_ITER 908219

#include <header.h>


int main_bench()
{
	char s1[50],s2[50];
	int i=0,ns1,ns2,tag=1,flag=1,j=0;
	my_scanf("%s",s1);
	ns1=strlen(s1);
	my_scanf("%s",s2);
	ns2=strlen(s2);
	if(ns2!=ns1)
		tag=0;
	else for(i=0;i<ns1;i++){
			flag=1;
			for(j=0;j<ns2;j++){
				if(s1[i]==s2[j])
				{s2[j]='0'; flag=0;break;}
			}
		}
	if(flag) tag=0;
	if(tag) my_printf("YES");
		else my_printf("NO");
	return 0;
}