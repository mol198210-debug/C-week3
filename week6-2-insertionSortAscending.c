#include <stdio.h>

// 삽입 정렬 함수 (오름차순)
void insertionSortAscending(int arr[], int n) {
    for (int i = 1; i < n; i++) {           // 두 번째 원소(인덱스 1)부터 시작해 마지막 원소까지 반복합니다.
        int key = arr[i];                   // 현재 정렬할 대상 값을 key 변수에 백업합니다.
        int j = i - 1;                      // key 바로 앞의 원소 인덱스를 j로 지정합니다.

        while (j >= 0 && arr[j] > key) {    // j가 0 이상이고 앞쪽 원소가 key보다 큰 동안 반복합니다.
            arr[j + 1] = arr[j];            // 앞의 큰 값을 오른쪽으로 한 칸 밀어냅니다.
            j--;                            // 더 앞쪽의 원소들과 비교하기 위해 j를 1 감소시킵니다.
        }

        arr[j + 1] = key;                   // 반복문이 끝난 빈 자리에 백업해 둔 key 값을 삽입합니다.
    }
}

int main() {
    int arr[] = {7, 4, 5, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("삽입 정렬 전: [ ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("]\n");

    insertionSortAscending(arr, n);

    printf("삽입 정렬 후: [ ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("]\n");

    return 0;
}