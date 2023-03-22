#define NUM_ITER 882533

#include <header.h>

int main_bench()
{
    int i,l1,l2;
    int a[60]={0},b[60]={0};
    char m[100],n[100];
    my_scanf("%s%s",m,n);
    l1=strlen(m);
    l2=strlen(n);
    if(l1!=l2) my_printf("NO");
    else
    {
   for(i=0;i<l1;i++)
    {
    	if(m[i]>='A'&&m[i]<='Z') a[m[i]-'A'+26]++;
    	else a[m[i]-'a']++;
    	if(n[i]>='A'&&n[i]<='Z') b[n[i]-'A'+26]++;
    	else b[n[i]-'a']++;	
    	
    	
    	
    }
    for(i=0;i<52;i++)
    {
    	if(b[i]!=a[i]) break;
    }
    if(i==52) my_printf("YES");
    else my_printf("NO");
    }
}