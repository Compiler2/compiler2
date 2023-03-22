#include <header.h>

int main_bench()
{
    char w[1000];
    char sub[1000][50];
    int s[1000]={0};
    int k,t,n=0,m=0,i,j;
    my_scanf("%d",&n);getchar();
    gets(w);
    
    t=strlen(w);
    
    for(i=0;i<=t-n;i++)
    {
        for(j=0;j<n;j++)
        sub[i][j]=w[i+j];
    sub[i][n]='\0';
    
    }
    for(i=0;i<=t-n;i++)
    {for(j=i;j<=t-n;j++)
            if(strcmp(sub[i],sub[j])==0)
                s[i]++;
            
    }
    for(i=0;i<t-n;i++)
        if(s[i]>m)m=s[i];
if(m==1)my_printf("NO\n");
else{
        my_printf("%d\n",m);
for(i=0;i<=t-n;i++)

if(s[i]==m)
my_printf("%s\n",sub[i]);
}
return 0;

}
    

