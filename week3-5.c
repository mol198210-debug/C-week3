#include <stdio.h>
/**int main()
{
    int i, j;
    for (i=0; i<5; i++)
    {
        for (j=5; j = j-i;)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
**/
int main()
{
    for(int i=5; i>=1; i--)
    {
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}