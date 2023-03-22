#include <header.h>










int save(char point[5],char filed[400][5],int check[400],int filedp)
{
    int p=0,k=0;
    for (p=0; p<filedp&&k==0; p++) {
        if (strcmp(point, filed[p])==0)
        {
            check[p]++;
            k=1;
        }
    }
    if (k==0) {
        strcpy(filed[filedp], point);
        filedp++;
    }
    return filedp;
}

int main_bench()
{
    int n,i=0,p=0,filedp=0,max=0;
    long len;
    char s[2000]={'\0'};
    char point[5]={'\0'};
    char filed[400][5]={'\0'};
    int check[400]={0};
    my_scanf("%d",&n);
    my_scanf("%s",s);
    
    len=strlen(s);
    for (i=0; i<=len-n; i++) {
        for (p=0; p<n; p++) {
            point[p]=s[p+i];
        }
        filedp=save(point,filed,check,filedp);
    }
    
    for (p=0; p<filedp; p++) {
        if (check[p]>=max) {
            max=check[p];
        }
    }
    
    if (max==0) {
        my_printf("NO");
    }
    else
    {
        my_printf("%d\n",max+1);
        
        for (p=0; p<filedp; p++) {
            if (check[p]==max) {
                my_printf("%s\n",filed[p]);
            }
        }
    }
    
}