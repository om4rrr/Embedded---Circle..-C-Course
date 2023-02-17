#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int *ptr = (int *) calloc(5,sizeof(int));
    for(int *i = ptr; i < ptr + 5; i++){
        printf("Enter Element %ld : ",i - ptr + 1);
        scanf("%d",i);
    }
    printf("<------------Reallocating To 11 ------------>\n");
    ptr = (int *)realloc(ptr,11 * sizeof(int));
    for(int *i = ptr + 5; i < ptr + 11; i++){
        printf("Enter Element %ld : ",i - ptr + 1);
        scanf("%d",i);
    }
    printf("------------------------------------\n");
    for(int *i = ptr; i < ptr + 11; i++)
    printf("%d ",*i);
    free(ptr);
}
