#include <header.h>

int main_bench()
{
	int i=0;
	char a[255],b[255];
	gets(a);gets(b);
	for (i=0;a[i]&&b[i];i++){
		if (a[i]>='a'&&a[i]<='z')
           a[i]-='a'-'A';
		if(b[i]>='a'&&b[i]<='z')
			b[i]-='a'-'A';
			if(a[i]!=b[i]){
				if(a[i]>b[i])my_printf(">");
				if(a[i]<b[i])my_printf("<");
			break;
			}
	}
			if(!a[i]&&!b[i])
	        my_printf("=");
	return 0;
}

