#include <stdio.h>

int main(void){
    int num[6] = {45, 34, 79, 40, 56, 7898};
    int i, j;

    printf("Bubble Sort\n");
    
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6 - i; j++) {
            if (num[j] > num[j + 1]) {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 6; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}