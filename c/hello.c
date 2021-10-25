/*
This is the comment for the module
its supposed to recreate the tensorflow api for numerical computation
*/

#include <stdio.h>

int main()
{
    char desiredWorkers[100];
    int workers;

    printf("Number of workers requires\n");

    scanf("%d %s", &workers, desiredWorkers);

    printf("%d\n %s\n", workers, desiredWorkers);
    return 0;
}