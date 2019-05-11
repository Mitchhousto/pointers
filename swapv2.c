#include <stdio.h>

void swap(int *x, int *y);

int main(void)
{
    
    int a = 100, b = 234;
    
     printf("%d %d\n",a,b);
    
    swap(&a,&b);
    
    printf("%d %d\n",a,b);
    
    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}
    