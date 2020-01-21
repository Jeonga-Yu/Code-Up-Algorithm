//
//  main.c
//  Bubble Sort.c
//
//  Created on 2020/01/21.
//  Copyright © 2020 Jeonga-Yu. All rights reserved.
//
//  버블정렬
//  가장 효율성이 떨어지는 정렬 알고리즘
//  한번의 정렬이 끝났을 때 큰 값이 가장 뒤로 이동하는 결과

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, j, temp;
    int array[10] = {1, 20, 5, 8, 7, 6, 4, 3, 2, 9};
    for (i=0; i<10; i++) {
        for (j=0; j<9-i; j++) {
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    
    for (i=0; i<10; i++) {
        printf("%d ", array[i]);
    }
    
    return 0;
}


//시간복잡도
//O(N * N)
//선택정렬과 시간복잡도는 같지만 실제 수행시간은 훨씬 느리다.
