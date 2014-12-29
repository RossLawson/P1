#include <cs50.h>
#include <stdio.h>
#include <math.h>
 
int main(void)
{  
//Get amount of change due in $
    float change;
    printf("How much change is owed ($): \n");
    change = GetFloat();   
 
//Check if change is positive & prompt if not
    while (change < 0)
    {
    printf("Invalid input. Retry: \n");
    change = GetFloat();  
    }  
 
//Convert $ into C (Note: Be careful of rounding imprecision)
    int cents;
    change = change * 100;
    cents = round(change);  
 
//Algorithm - Quarters
    int remainder1;
    int div_factor;
    int no_of_quarters;
    
        remainder1 = cents % 25; 
        div_factor = cents - remainder1; 
        no_of_quarters = div_factor / 25;
 
//Algorithm - Dimes
    int no_of_dimes;
    
        remainder1 = cents % 25;
        no_of_dimes = remainder1 / 10;
        
//Algorithm - Nickles        
    int remainder2;
    int no_of_nickles;
    
        remainder2 = cents - ((no_of_quarters * 25) + (no_of_dimes * 10));
        no_of_nickles = remainder2 / 5;
        
//Algorithm - Pennies     
    int no_of_pennies;
    int remainder3;
    
        remainder3 = cents - ((no_of_quarters * 25) + (no_of_dimes * 10) + (no_of_nickles * 5));
        no_of_pennies = remainder3 / 1;
 
//Algorithm - Total Coins       
    int totalcoins;    
        totalcoins = no_of_quarters + no_of_dimes + no_of_nickles + no_of_pennies;
 
    printf("%i\n",totalcoins);   
}
