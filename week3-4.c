#include <stdio.h>
int main(){
    int a, b; //count = 0;    
    int temp;
    printf("정수 입력:");
    scanf("%d",&a);
    printf("정수 입력:");
    scanf("%d",&b);
    temp = b;
    while(temp > 0){
        //count++;
        //a *= temp%10;
        printf("%d\n",a*(temp%10)); //a*=temp%10 X
        temp /= 10;
    }
    printf("%d",a*b);
}

/**void main()
{
    int a, b;
    int temp;
    scanf("%d", &a);
    scanf("%d", &b);

    temp = b;
    while(temp > 0)
    {
        printf("%d\n", a*(temp%10));
        temp/=10;
    }
    printf("%d",a*b)
}**/