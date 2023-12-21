#include <stdio.h>
#include <stdlib.h>

int main() {
    int V, A, B, C;
    printf("Enter the initial amount of shampoo: \n");
    scanf("%d", &V);
    printf("Enter shampoo usage for the father, the mother and Takahashi respectively: \n");
    scanf("%d %d %d", &A, &B, &C);
    while(V>=0){
        if (V-A<0){
        printf("F \n");
        }
        else if (V-A-B<0){
        printf("M \n");
        }
        else if (V-A-B-C<0){
        printf("T \n");
        }
        V=V-A-B-C;
    }
    return 0;
}

