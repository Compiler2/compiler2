#define NUM_ITER 1663032

#include <header.h>


int main_bench()
{char a[101],b[101];

int n,p,g,t,j,i,q,m;
while(gets(a)!='\0'){
n=strlen(a);strcpy(b,a);

for(j=0;j<n;j++){
	if(a[j]==')'){t=0;
for(p=j-1;p>=0;p--){
if(a[p]=='(')
{a[p]=' ';a[j]=' ';t=1;break;
}
}
if(t!=1)
a[j]='?';}}
for(i=0;i<n;i++)
	if(a[i]=='(')a[i]='$';
	for(q=0;q<n;q++)
		if(a[q]!='$'&&a[q]!='?')a[q]=' ';for(m=0;m<n-1;m++)my_printf("%c",b[m]);my_printf("%c\n",b[n-1]);
		for(g=0;g<n-1;g++)
			my_printf("%c",a[g]);
		my_printf("%c\n",a[n-1]);}
	







	return 0;
}

