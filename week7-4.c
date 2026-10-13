#include <stdio.h>

#define MAX_stu 50

void bubbleSort(int*arr, int size);

void bubbleSort(int*arr, int size){
    for (int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(*(arr + j)> *(arr + j + 1)){
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main()
{
    int stu;
    printf("학생 수 입력. (최대50명) : ");
    scanf("%d", &stu);
    if(stu > MAX_stu){
        printf("초과\n");
        return 1;
    }

    int*gradesPointer;
    int grades[MAX_stu];
    gradesPointer = grades;
    
    for (int i = 0; i < stu; i++){
        printf("%d번의 학생의 성적 입력: ",i+1);
        scanf("%d",gradesPointer + i);
    }

    bubbleSort(gradesPointer,stu);

    printf("\n정렬된 성적 : ");
    for (int i = 0; i < stu; i++){
        printf("%d, ", *(gradesPointer + i));
    }
    printf("\n\n최고 성적 : %d\n",*(gradesPointer + stu - 1));
    printf("최하 성적 : %d\n", *gradesPointer);

    return 0;
}