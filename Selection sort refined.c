#include<stdio.h>

int main()
{
    int numbers[10], i, j, n, temp;
    
    printf("Enter how many numbers to sort (max 10): ");
    scanf("%d", &n);
    
    if(n > 10 || n < 1) {
        printf("Please enter a number between 1 and 10.\n");
        return 1;
    }
    
    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    
    printf("\nOriginal elements: ");
    for(i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    
    // Selection sort
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(numbers[i] > numbers[j]) {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    
    printf("\nSorted elements: ");
    for(i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}