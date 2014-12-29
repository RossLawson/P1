#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{  
    // Get amount of change due in $
    float change;
    printf("How much change is owed ($): \n");
    change = GetFloat();
    
    // Check if change is positive & prompt if not
    while (change<0)
    {
        printf("Invalid input. Retry: \n");
        change = GetFloat();  
    }

//  printf("Change is %.20f \n",change);
    
    // Convert $ into C (Note: Be careful of rounding imprecision)
    int cents;
    change = change*100;
    cents = round(change);
//  printf("Cents is %i \n",cents);
    
    //Algorithm
    
    int remainder1;
    int x;
    int no_of_quarters;
    
    remainder1 = cents%25; 
    x = cents - remainder; 
    no_of_quarters = x / 25;  
    
}
