#include <stdio.h>
int main()
{
    int num;
    printf("숫자 입력");
    scanf("%d",&num);
    if (num%2 == 0){
        printf("Even");
    }
    else {
        printf("Odd");
    }
}
/**printf("%s", (num%2==0)?"Even":"Odd");
return 0; **/