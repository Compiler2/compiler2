#include <header.h>

int main_bench()
{
char s[1000], a[50],b[50];

int i,lenb,n,j,flag;
int k=10001;
gets(s);
gets(a);
gets(b);
lenb=(int)strlen(b);

for (i=0; i<=(int)strlen(s); i++,flag=0) {
	for(n=0,j=i;a[n]!='\0';n++,j++){
		if(s[j]!=a[n]){
		flag=1;
		break;
		}
	}
	if(flag) 
		continue;
	else{
		k=i;
		break;
		}
}
for(i=0;i<strlen(s);i++){
	if(i==k){
		my_printf("%s",b);
		i=i+lenb-1;
		continue;
	}
	else
		my_printf("%c",s[i]);

}
return 0;
}