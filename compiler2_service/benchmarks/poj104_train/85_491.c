#include <header.h>


int main_bench()
{
    char a[100][20]={0};
    int n, i, j, flag=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
        my_scanf("%s",a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i][0]>='0'&&a[i][0]<='9')
        {
            my_printf("no\n");
            continue;
        }
        for(j=0;j<strlen(a[i]);j++)
        {
            if((a[i][j]>='a'&&a[i][j]<='z')||(a[i][j]>='A'&&a[i][j]<='Z')||(a[i][j]>='0'&&a[i][j]<='9')||a[i][j]=='_')
            {
                flag++;
            }
            else
            {
                my_printf("no\n");
                flag=0;
                break;
            }
        }
        if(flag==strlen(a[i]))
        {
            my_printf("yes\n");
            flag=0;
        }
    }
    return 0;
}
