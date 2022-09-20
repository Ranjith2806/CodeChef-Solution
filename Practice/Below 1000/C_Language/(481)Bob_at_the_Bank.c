#include <stdio.h>
int main()
{
    int t,w,x,y,z;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&w,&x,&y,&z);
        printf("%d\n",(w+(x-y)*z));
    }
    return 0;
}
