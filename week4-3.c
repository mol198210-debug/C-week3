#include <stdio.h>

void printNum(int n){
    if (n == 0){
        return;
    }
        printNum(n - 1);
        printf("%d\n",n);
}

int main(){
    int n;
    printf("정수 n이 입련된다(1<=n<=200)\n");
    printf("정수 n입력:");
    scanf("%d", &n);
    printNum(n);
    return 0;
}
/*#include <stdio.h>

void printNum(int n)
{
    if(n == 0){
        return;
    }
    printNum(n-1);
    printf("%d\n",n);
}
int main(void)
{
    int n;
    scanf("%d",&n);
    printNum(n);
    return 0;
}*/