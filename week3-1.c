#include <stdio.h>
int main()
{   
    int year;
    printf("년도를 작성하시오");
    
    scanf("%d", &year);
    if ((year%4 == 0 && year%100 != 0)||year%400 == 0){
        printf("윤년입니다\n");
    }
    else {
        printf("평년입니다\n");
    }

    return 0;

}
