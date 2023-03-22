#define NUM_ITER 9084

#include <header.h>

int main_bench(){
    int arr[26],i,j,t,n=1,min,num[26];
    char s[10000];
    my_scanf("%d",&t);
    for (i=0;i<t;i++)
        {
        my_scanf("%s",s);
        for (j=0;j<26;j++)
        {
            arr[j]=0;
            num[j]=0;
            }
        for (j=0;j<strlen(s);j++)
            {
            if (arr[s[j]-97]==0)
            {
            num[s[j]-97]=n;
            n++;        
            arr[s[j]-97]=1;
            }
            else
            num[s[j]-97]=0;             
            }
        
          
        j=0;
        while (num[j]==0)
              j++;
        min=j;
        for (j=min+1;j<26;j++)
            if ((num[j]<num[min])&&(num[j]>0))
               min=j;
        if (min<26)
        my_printf("%c\n",min+97);
        else my_printf("no");
        }
    return 0;
}