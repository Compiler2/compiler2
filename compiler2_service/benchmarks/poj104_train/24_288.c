#define NUM_ITER 914977

#include <header.h>

int main_bench()
{
	char str[5000],t[50][50];
	int a[50],b[50];
	char *s,*p;
	s=str;
	gets(s);
	strcat(s," ");
	int count=0;
	while(*s){
		p=strchr(s,' ');
		*p='\0';
		strcpy(t[count],s);
		a[count]=strlen(t[count]);
		b[count]=a[count];
		count++;
		s=p+1;
	}
	int max=0,min=0;
	for(int i=0;i<count;i++){
		if(a[i]>a[max]){
			max=i;
		}
	}
	for(int j=0;j<count;j++){
		if(b[j]<b[min]){min=j;
		}
	}
	my_printf("%s\n%s",t[max],t[min]);
	return 0;
}