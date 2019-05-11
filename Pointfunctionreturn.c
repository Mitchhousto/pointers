#include <stdio.h>

unsigned int f(unsigned int *var1,unsigned int *var2);

int main()
{
   int x =100 , y =65;
   
   printf("x: %d y: %d\n",x,y);
   printf("return:%d\n", f(&x,&y));
   printf("x: %d y: %d\n",x,y);
   
   }
   
   //zeros the smaller of var1 and var2
   //Returns what the smaller variables was before zeroing
   unsigned int f(unsigned int *var1, unsigned int *var2)
   {
    int smaller;
    if(*var1 < *var2)
    {
    // var1 was less then var2
    smaller = *var1;
    *var1 = 0;
    }
    else
    {
        //var2 was less than var1
        //or they are equal
        smaller = *var2;
        *var2 =0;
    }
return smaller;

}