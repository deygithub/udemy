#include <stdio.h>

void main()
{
    // //star pattern 1
    // for(int i=1; i<=5; i++){
    //     for(int j=1; j<=i; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    //star pattern 2
    // for(int i=1; i<=5; i++){
    //     for(int j=5; j>=i; j--){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    //star pattern 2 other sol
    // for(int i=5; i>=1; i--){
    //     for(int j=1; j<=i; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    //number pattern
    // for(int i=1; i<=6; i++){
    //     for(int j=1; j<=i; j++){
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }

    //numer pattern 2
    // for(int i=6; i>=1; i--){
    //     for(int j=1; j<=i; j++){
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }

    //star pattern 3
    // for(int i=5; i>=1; i--){               //can also be used
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            // if(i+j<=5)                    //can also be used
            if(5-j>=i)
            printf(" ");
            else
            printf("*");
        }
        printf("\n");
    }
}