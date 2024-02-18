
#include <stdio.h>
int main()
{
   
    int n;
    printf("enter the size of array"); 
    scanf("%d",&n);
    int sum = 0; 
     int arr[n];
    int *ptr; 
    ptr = arr; 
      printf("Enter the elements of the array: "); 
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", ptr);
    
        sum += *ptr; 
        ptr++; 
    }
    printf("Sum of array elements = %d\n", sum);
    return 0;
}