#include <stdio.h>

int main(void) {
    int i, j, min, index, temp;
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    for(i = 0; i <10; i++){
        min = 999;
        for(j = i; j <10; j++){
            if (min > array[j]) {
                min = array[j];
                index = j;
            }
        }
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
        
    }
    for (i = 0; i <10; i++) {
        printf("%d\n", array[i]);
    }
    return 0;
}
/* 
알고리즘의 시간 복잡도
10 + 9 + 8+ ... + 1
=> 10 * (10+1) / 2 = 55
=> N * (N + 1) / 2        // 컴퓨터는
=> N * N
=> O(N * N)   // 빅오 표기법(특정한 알고리즘의 수행시간을 가장 간략하게 표기하는 것)

선택정렬의 시간 복잡도는 O(N^2)

선택정렬은 비효율적인 알고리즘 중 하나이다.
*/