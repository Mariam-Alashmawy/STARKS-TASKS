#include <stdio.h>
#include <stdlib.h>

int main()
{
    int class1[10], class2[10], class3[10], i, j;
    int grades[3][10] = {grades[0][0]=60, grades[3][10]=40, grades[2][10]=70, grades[3][10]=97,
    grades[3][5]=15};
    int passed = 0, failed = 0, highest = 0, lowest = 100, sum = 0;
    for (j = 0; j < 10; j++)
    {
        sum += grades[i][j];
        if (grades[i][j] >= 50)
            {
            passed++;
            }
            else {
            failed++;
            }
            if (grades[i][j] > highest)
            {
                highest = grades[i][j];
            }
            if (grades[i][j] < lowest) {
                lowest = grades[i][j];
            }
    }
    printf("Number of passed students: %d\n", passed);
    printf("Number of failed students: %d\n", failed);
    printf("Highest grade: %d\n", highest);
    printf("Lowest grade: %d\n", lowest);
    printf("Average grade: %.2f\n", (float)sum / 10);
    return 0;
}
