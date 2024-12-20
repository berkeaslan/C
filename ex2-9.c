/***********************************************/
/*                                             */
/*   ____            _                         */
/*  |  _ \          | |                        */
/*  | |_) | ___ _ __| | _____                  */
/*  |  _ < / _ \ '__| |/ / _ \                 */
/*  | |_) |  __/ |  |   <  __/                 */
/*  |____/ \___|_|_ |_|\_\___|                 */
/*      /\       | |                           */
/*     /  \   ___| | __ _ _ __                 */
/*    / /\ \ / __| |/ _` | '_ \                */
/*   / ____ \\__ \ | (_| | | | |               */
/*  /_/    \_\___/_|\__,_|_| |_|               */
/*                                             */
/*   I value your feedback, comments,          */
/*   improvements, and corrections.            */
/*                                             */
/*   Feel free to contact me anytime:          */
/*   trash(at)berkeaslan.nl                    */
/*                                             */
/*   Thank you for helping me improve!         */
/*                                             */
/***********************************************/

#include <stdio.h>

int bitcount(unsigned x);

int main(void) {
    unsigned num;
    int count;

    // Prompt the user for input
    printf("Enter an unsigned integer: ");
    
    // Read the unsigned integer from the user
    if (scanf("%u", &num) != 1) {
        printf("Invalid input. Please enter a valid unsigned integer.\n");
        return 1; // Exit with error code
    }

    // Calculate the number of set bits
    count = bitcount(num);

    // Display the result
    printf("Number of set bits in %u is %d\n", num, count);

    return 0; // Successful execution
}

/**
 * Counts the number of set bits (1s) in an unsigned integer.
 *
 * @param x The unsigned integer to count set bits in.
 * @return The number of set bits.
 */
int bitcount(unsigned x) {
    int b;

    for (b = 0; x != 0; x &= (x - 1))
        ++b;

    return b;
}
