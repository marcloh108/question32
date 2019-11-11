#include <stdio.h>
#include <stdlib.h>

int test(int x, int y)
     {
       return x <= 13 || y <= 13;
       return 0;
     }
int main()
{
    printf("%d", test(13,10));
    printf("\n%d", test(14,20));
    printf("\n%d", test(10,20));

}
