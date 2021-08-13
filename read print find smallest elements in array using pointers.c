#include<stdio.h>
void read_array(int *arr, int n);
void print_array(int *arr, int n);
void find_smallest(int *arr, int n, int *small, int *pos);
int main()
{
    int n,num[10], small = 32768, pos;
    printf("\n Enter the size of the array: ");
    scanf("%d",&n);
    read_array(num, n);
    print_array(num, n);
    find_smallest(num,n,&small, &pos);
    printf("\n the smallest number in the array is %d at position %d",small, pos);
}

void read_array(int *arr, int n)
{
    int i;
    printf("\n Enter the array of elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

}

void print_array(int *arr, int n)
{
    int i;
    printf("\n The array elements are: ");
    for(i=0;i<n;i++)
        printf("\t %d",arr[i]);
}

void find_smallest(int *arr, int n, int *small, int *pos)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(*(arr+i) < *small)
        {
            *small = *(arr+i);
            *pos = i;
        }
    }
}
