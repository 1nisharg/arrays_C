#include <stdio.h>

void main()
{
    int marksList[30];
    int  i;
    int grace=5;
    printf("\n Enter the list of marks one by one");
    for (i=0;i<30;i++)
    {
        scanf("%d", &marksList[i]);
        marksList[i] = marksList[i]+grace;
        }

        printf("\n Print the final list");
        printf("\n S. No. \t Marks");
        for (i=0;i<30;i++)
        printf("\n %d \t %d", i, marksList[i]);
}