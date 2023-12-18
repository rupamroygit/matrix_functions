#include<stdio.h>
#define ROW 3
#define COL 3

/*To calculate addition, subtraction and multiplication of 2-
dimensional matrix using function.*/

//display the matrix
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
//end of @display

// take input from user
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
//end of @input 

//addtion the value of the matrix & sotre in a matrix
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
//end of @addition 

//subtraction of matrix
void subtraction(int arr1[ROW][COL],int arr2[ROW][COL],int arrsub[ROW][COL])
{
    int i,j;
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            arrsub[i][j]=arr1[i][j]-arr2[i][j];
        }
    }
}
//end of @subtraction


//multiply the matrix 
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
//end of @multiply


void main()
{
    int array1[ROW][COL],array2[ROW][COL],arrstore[ROW][COL];

    //take input from user
    input(array1);
    input(array2);

    //display the array one
    printf("Array No 1:\n");
    display(array1);

    //display the array two
    printf("Array No 2:\n");
    display(array2);

    //display the array addtion
    addtion(array1,array2,arrstore);
    printf("Array Sum:\n");
    display(arrstore);

    //display the array subtraction
    subtraction(array1,array2,arrstore);
    printf("Array Subtraction:\n");
    display(arrstore);

    //display the array multiply
    matrix_multiply(array1,array2,arrstore);
    printf("Array Multiply:\n");
    display(arrstore);
}
//end of main

//end of code