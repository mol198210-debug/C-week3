#include <stdio.h>

// 선택 정렬 함수 (오름차순)
void selectionSortAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {       // 배열의 끝 전까지 반복하여 정렬 기준 위치(i)를 설정합니다.
        int minIndex = i;                   // 현재 기준 위치(i)의 값을 가장 작은 값의 인덱스(minIndex)로 가정합니다.
        
        for (int j = i + 1; j < n; j++) {   // 기준 위치 바로 다음(i + 1)부터 배열 끝까지 탐색합니다.
            if (arr[j] < arr[minIndex]) {   // 현재 탐색 중인 값(arr[j])이 현재 최소값보다 작다면
                minIndex = j;               // 최소값의 인덱스를 현재 인덱스(j)로 갱신합니다.
            }
        }
        
        int temp = arr[minIndex];           // 가장 작은 값을 임시 변수(temp)에 백업합니다.
        arr[minIndex] = arr[i];             // 기준 위치(i)의 값을 최소값 위치에 덮어씁니다.
        arr[i] = temp;                      // 백업해 둔 최소값을 기준 위치(i)에 넣어 자리를 바꿉니다.
    }
}

int main() {
    int arr[] = {7, 4, 5, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("선택 정렬 전: [ ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("]\n");

    selectionSortAscending(arr, n);

    printf("선택 정렬 후: [ ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("]\n");

    return 0;
}