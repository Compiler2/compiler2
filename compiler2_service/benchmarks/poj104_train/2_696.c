#define NUM_ITER 23387

#include <header.h>


int main_bench()
{
    char m = 0;
    int cnt[255], i, j, n;
    struct {
        int id;
        char au[32];
    } bk[1000];
    
    memset(cnt, 0, sizeof(cnt));
    my_scanf("%d", &n);
    for (i = 0; i < n; i++) {
        my_scanf("%d%s", &bk[i].id, bk[i].au);
        for (j = 0; bk[i].au[j]; j++)
            if (++cnt[bk[i].au[j]] > cnt[m])
                m = bk[i].au[j];
    }
    
    my_printf("%c\n%d\n", m, cnt[m]);
    for (i = 0; i < n; i++)
        if (strchr(bk[i].au, m))
            my_printf("%d\n", bk[i].id);
    
    return 0;
}
