#include <stdio.h>
#include <limits.h>
#define NUMBER 5

// Array 배열
//  - 배열 선언
//      TYPE NAME[ARRAY_SIZE] = {};
//  - 배열의 순서 (Index)
//      0부터 시작


int main(int argc, const char * argv[]) {
    // 5개의 정수중에서 최대값과 최대값의 위치를 출력
    //    int i, max, min, index;
    //    int array[NUMBER];
    //    max = 0;
    //    index = 0;
    //
    //    for (i = 0; i < NUMBER; i++) {
    //        scanf("%d", &array[i]);
    //        if (max < array[i]) {
    //            max = array[i];
    //            index = i;
    //        }
    //    }
    //    printf("가장 큰 값은 %d입니다. 그리고 %d번째에 있습니다.\n", max, index + 1);
    //
    //    min = INT_MAX;
    //    for (i = 0; i < NUMBER; i++) {
    //        scanf("%d", &array[i]);
    //        if (min > array[i]) {
    //            min = array[i];
    //            index = i;
    //        }
    //    }
    //    printf("가장 작은 값은 %d입니다. 그리고 %d번째에 있습니다.\n", min, index + 1);
    
    // 5개의 정수중에서 짝수 최대값과 홀수 최대값을 구하는 프로그램
    int array[NUMBER];
    int i, oddMax, evenMax;
    oddMax = 0;
    evenMax = 0;
    for (i = 0; i < NUMBER; i++) {
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0) {
            if (evenMax < array[i]) {
                evenMax = array[i];
            }
        } else {
            if (oddMax < array[i]) {
                oddMax = array[i];
            }
        }
    }
    printf("%d %d\n", oddMax, evenMax);
    return 0;
}
