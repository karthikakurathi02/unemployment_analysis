#include <stdio.h>
#include <math.h>  
int isPerfectSquare(int num) 
{
	if (num < 0) 
	{
        return 0; 
    }
	int sqrtVal = (int)sqrt(num);  
    return (sqrtVal * sqrtVal == num);  
}
int sumOfPositiveSquares(int arr[], int n) 
{
    int sum = 0;
    int i;
		for (i = 0; i < n; i++) 
    {
        if (arr[i] > 0 && isPerfectSquare(arr[i])) 
		{
            sum += arr[i]; 
        }
    }
 return sum;
}
int main() 
{
    int n, i;  
	printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
	int arr[n];
	printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
	int result = sumOfPositiveSquares(arr, n);
    printf("Sum of positive square elements: %d\n", result);
    return 0;
}
