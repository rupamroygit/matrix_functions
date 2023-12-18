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
int addtion(int arr1[ROW][COL],int arr2[COL][ROW],int arrsum[ROW][COL])
{
    int i,j;
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            arrsum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    return arrsum[ROW][COL];
}
void matrix_multiply(int arr1[ROW][COL],int arr2[ROW][COL],int arrmul[ROW][COL])
{
    int i,j,k;
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            arrmul[i][j]=0;
            for(k=0;k<COL;k++)
            {
                arrmul[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
}
void main()
{
    int array1[ROW][COL],array2[ROW][COL],arrstore[ROW][COL];
    input(array1);
    input(array2);
    printf("Array No 1:\n");
    display(array1);
    printf("Array No 2:\n");
    display(array2);
    //arrstore[ROW][COL]=addtion(array1,array2);
    addtion(array1,array2,arrstore);
    printf("Array Sum:\n");
    display(arrstore);

    matrix_multiply(array1,array2,arrstore);
    printf("Array Multiply:\n");
    display(arrstore);
}