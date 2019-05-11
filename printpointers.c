#include <stdio.h>



 int main() {
 int x = 5, *p;
    p = &x;
    printf("%d\n", *p);
    x++;
    printf("%d\n", *p);
    
    (*p)++;
    
    printf("%d\n", x);
    
    return 0;
 }