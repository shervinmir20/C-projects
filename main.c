#include <stdio.h>
#include <stdlib.h>
int swap(int *a , int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(void) {
    int my_arr[] = {1,2,3,4,5};
    int* ptr = NULL;
    ptr = my_arr;
    printf("%d\n", *(ptr+1));
    int a = 10, b = 15;
    printf("a = %d , b = %d\n",a,b);
    swap(&a,&b);
    printf("a = %d , b = %d\n", a,b);

    int* ptrr = NULL;
    int n;
    printf("please enter number of your numbers? ");
    scanf("%d",&n);
    ptrr = (int*)malloc(n*sizeof(int));
    for (int i=0 ; i < n ; i++) {
        printf("enter Number? ");
        scanf("%d", ptrr+i);
    }
    int max = *(ptrr+0);
    for (int i = 0 ; i < n ; i++) {
        if (*(ptrr+i) > max)
            max = *(ptrr+ i);
    }
    printf(" max num = %d", max);
    free(ptrr);
}