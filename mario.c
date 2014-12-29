#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    printf("What is the height of the pyramid: \n");
    height = GetInt();

    while (height < 0 || height > 23)
    {
    printf("Invalid input, 0-23 only.Please retry: \n");
    height = GetInt();  
    }
    
    int row;  

    for (row = 0; row < height; row++)
    {       
        int space;
            for (space = height-1-row; space > 0; space--)
            {         
            printf(" ");
            }   
        
        int hash;
            for (hash = 0; hash < (2+row); hash++)
            {
            printf("#");
            }
    
    printf("\n");
    }
}
