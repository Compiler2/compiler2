#define NUM_ITER 926840

#include <header.h>

int main_bench()
{
 int i,j,k=0;
 char str1[100],str2[100];
 my_scanf("%s %s",str1,str2);
 if(strlen(str1)==strlen(str2))
 {
	int m=strlen(str1);
	for(i=0;i<m;i++)
		for(j=0;j<m;j++)
		{
			if (str2[j]=='0') continue;
			else if(str1[i]==str2[j]) {str2[j]='0';k++;break;}
		}
    if(k==m) my_printf("YES"); else my_printf("NO");
 }
else if(strlen(str1)!=strlen(str2)) my_printf("NO");
}