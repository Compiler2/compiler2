#include <header.h>

  main_bench()
  {
        int i,j,n;
        char str[1000];
        my_scanf("%d\n",&n);
        for(i=0;i<n;i++)
        {gets(str);
        for(j=0;str[j];j++)
        {if(!((str[j]=='_')||(str[j]>='A'&&str[j]<='Z')||(str[j]>='a'&&str[j]<='z')||(str[j]>='0'&&str[j]<='9'&&j>0)))
        break;
        }
        if(str[j])
        my_printf("0\n");
        else
        my_printf("1\n");}
        getchar();
        getchar();
        }
        
