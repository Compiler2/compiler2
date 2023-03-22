#include <header.h>

main_bench()
{
    int m,n,count,j;
    my_scanf("%d %d",&m,&n);
    while (m != 0)
    {
        int monkey[310] = {0};
        for (int i = 0;i <= m-1;i ++)
            monkey[i]=2;
        j = -1;
        for (int i = 1;i <= m-1;i ++)
        {
            count = 1;
            while (count <= n)
            {
                j ++;
                switch(monkey[j])
                {
                    case 0:j = -1;break;
                    case 1:break;
                    case 2:count++;break;
                }
                
            }
            monkey[j] = 1;
        }
        for (int i = 0;i <= m - 1;i ++)
        {
             if (monkey[i]==2)
                my_printf("%d\n",i+1);
        }
        my_scanf("%d %d",&m,&n);
    }
}