#include <header.h>

int main_bench()
{
    int i, j, n,sz[100];               
    char s[22];               
    my_scanf("%d",&n);  
    for(i=0;i<n;i++){
       sz[i]=1;
    }
    for (i=0;i<n;i++) {    
        my_scanf("%s",s); 
        for (j=0;s[j]!='\0';j++) { 
            if (!((s[j]=='_')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z')||(s[j]>='0'&&s[j]<='9'&&j>0)))
           {
				sz[i]=0;
				break;     
           }
        }}
        for(i=0;i<n;i++){
		if(sz[i]==1)
        my_printf("yes\n");
		else 
        my_printf("no\n");  }         

    return 0;
}

