#include<stdio.h>
#define ROW 3
#define COL 3

/*To calculate addition, subtraction and multiplication of 2-
dimensional matrix using function.*/

void display(int arr[ROW][COL])
{
    int i,j;
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
void input(int arr[ROW][COL])
{
    int i,j;
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("Enter array %d&%d Element\n: ",i,j);
            scanf("%i",&arr[i][j]);
        }
    }
}
void main()
{
    int array[ROW][COL];
    input(array);
    display(array);
}