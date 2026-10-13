#include <stdio.h>

int main()
{
    int i;
    int *p;

    i = 5; p = &i;
    printf("p = %p \n", p);

    i = 5; p = &i;
    printf("(*p)++ = %d \n", (*p)++);

    i = 5; p = &i;
    printf("(*p)+1 = %d \n", (*p)+1);

    i = 5; p = &i;
    printf("*p+=1 = %d \n", *p+=1);

    i = 5; p = &i;
    printf("(*p)+=1 = %d \n", (*p)+=1);

    i = 5; p = &i;
    printf("*p=*p+1 = %d \n", *p=*p+1);

    i = 5; p = &i;
    printf("++*p = %d \n", ++*p);

    i = 5; p = &i;
    printf("++(*p) = %d \n", ++(*p));

    i = 5; p = &i;
    printf("p++ = %p \n", p++); 
    printf("p = %p \n", p);
}