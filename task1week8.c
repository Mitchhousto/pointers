#include <stdio.h>

void zeroint(int *x);

int main(void)
{
    int x = 36;
    
    printf("%d\n",x);
    zeroint(&x);
    printf("%d\n",x);
    
}

    void zeroint(int *x)
    {
        *x=0;
    }
 