#include <math.h>
#include <stdio.h>
#include <stdbool.h>

// Function to check if n can be expressed as a sum of two squares
bool isSumOfSquares(int n)
{
    // Edge case: if n is negative, it cannot be expressed as the sum of squares
    if (n < 0)
        return false;

    // Two-pointer technique
    int left = 0;
    int right = sqrt(n);  // Initialize right pointer to sqrt(n)

    while (left <= right)
    {
        int sum = left * left + right * right;
        
        if (sum == n)
        {
            return true;  // Found two numbers whose squares sum to n
        }

        else if (sum < n)
        {
            left++;  // If the sum is less than n, increment left to increase the sum
        }

        else
        {
            right--;  // If the sum is greater than n, decrement right to decrease the sum
        }
    }
    

    return false;
}

int main()
{
    int n;
    
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (isSumOfSquares(n))
    {
        printf("%d can be expressed as the sum of the squares of two integers.\n", n);
    }

    else
    {
        printf("%d cannot be expressed as the sum of the squares of two integers.\n", n);
    }

    return 0;
}
