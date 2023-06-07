#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    // int i, j;
    // ////////////////////////////
    // //* standart while loop
    // ///////////////////////////

    // i = 0;        //////* initialization
    // while (i < 3) //* loop condition to coninue
    // {
    //     printf("std while i=%d", i);
    //     i++;
    // }

    // ////////////////////////////////
    // //*do while loop
    // ///////////////////////////////
    // do
    // {
    //     printf("enter a positive number(0 to exit): ");
    //     scanf("%d", &i);          //* update
    //                              //* condition
    //     if (i > 0)
    //     {
    //         printf("do-while: You typed: %d", i);
    //     }
    //     i++;
    // } while (i > 0);
    // for(i=0, j=1, i<2; i++, j++;) {
    //     printf("for: i=%d, j=%d\n", i,j);
    // }
    //     ////////////////////////////////        
    //     //* for loop counting down
    //     //////////////////                      
    //     for(i=5; i >0; i--) {
    //         printf("%d ", i);
    //     }
    //     printf("....Blastoff\n");

    //     for(i=0; i <3; i++) {
    //         for(j=0; j>0; j--) {
    //             printf("masted: i=%d, j=%d\n", i,j);
    //         }
    //     }


        int i, n, sum =0, keepGoing =1;
        
        ////////////////////////////////
        //* A while logo that uses a flag to leave early. The flag
        //* becomes negative if a negative value is read or 
        //* if the sum of the values exceed 1000. The loop
        //* reads a maximum of 10 values
        ////////////////////////////////

        i = 0;

        while(i < 10 && keepGoing ==1) {
                printf("Enter up to 10 numbers (0 to stop): ");
                scanf("%d", &n);
                sum +=n;
                keepGoing = n !=0 && sum < 1000;
                i++;
        }
        printf("The first sum=%d\n", sum);

        ////////////////////////////////////////
        //* Use an if nested inside a loop to sum the 
        //* absolute values of some numbers
        ////////////////////////////////////////
        sum = 0;
        printf("Enter a number (0 to stop): ");
        scanf("%d", &n);
        while (n >0)
        {
            if(n > 0) sum +=n;
            else sum += -n;
        }
        printf("The second sum=%d\n", sum);
        
        /////////////////////////////
        //* The dangline else arises when programmers do
        //* not indent their code correctly
        //////////////////////////////

        if(n > 1000) 
            if(i == 10)
            printf("i is big\n");
            else 
                printf("n < 1000\n");

        
    return 0;
}
