#include <stdio.h>

int main(void) {
    int t,i,n,m;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        scanf("%d",&m);
        printf("%d\n",((2*n)+(4*m)));
    }
    return 0;
}

