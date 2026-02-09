/*NUMBER GUESSING GAME*/
#include<stdio.h>
#include<stdlib.h> 
#include<time.h> 
int n, a, g=1; //g=number of attempts, 1 because first time value is initialized outside loop
int main()
{
    srand(time(NULL)); 
    // n=rand(); //initialize variable as a random number
    // printf("%d\n", n); 
    n=(rand()%100)+1; //% will give remainder between 0-99 (including 0 & 99); +1--> Remainder= 1-100
    printf("Guess a number between 1-100:\n");
    scanf("%d", &a); 
    while(a>n || a<n)
    {
        if(a>n) //smaller number please
        {
            printf("Guess a smaller number\n"); 
            printf("Enter another number:\n");
            scanf("%d", &a);
        }
        else if(a<n) //higher number please
        {
            printf("Guess a larger number\n");
            printf("Enter another number:\n");
            scanf("%d", &a);
        }
        g++;
    }
    if(a==n)
    {
        printf("That's right\n");
    }
    printf("You tried %d times to get the right answer\n", g); //g+1 if first time value is given from outside loop and g starts from 0
    return 0;
}