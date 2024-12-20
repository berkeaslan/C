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

/*
Common Use Cases for Bitwise Operators

1. Setting, Clearing, and Toggling Bits:
   // Set the nth bit
   a |= (1 << n);

   // Clear the nth bit
   a &= ~(1 << n);

   // Toggle the nth bit
   a ^= (1 << n);

2. Checking if a Bit is Set:
   if (a & (1 << n)) {
       // nth bit is set
   }

3. Packing and Unpacking Data:
   Combine multiple smaller data fields into a single variable or extract them.

4. Efficient Arithmetic Operations:
   Use shifts for multiplication or division by powers of two.

5. Cryptography and Hashing:
   Perform operations like XOR for simple encryption schemes.

6. Graphics Programming:
   Manipulate color channels or flags.
*/

// Some code to demonstrate the bitwise operators:
int main() {
    unsigned char a = 12; // Binary: 00001100
    unsigned char b = 10; // Binary: 00001010

    // Bitwise AND
    unsigned char and_result = a & b;
    printf("a & b = %d\n", and_result); // Output: 8

    // Bitwise OR
    unsigned char or_result = a | b;
    printf("a | b = %d\n", or_result); // Output: 14

    // Bitwise XOR
    unsigned char xor_result = a ^ b;
    printf("a ^ b = %d\n", xor_result); // Output: 6

    // Bitwise NOT
    unsigned char not_a = ~a;
    printf("~a = %d\n", not_a); // Output: 243 (for unsigned char)

    // Left Shift
    unsigned char left_shift = a << 2;
    printf("a << 2 = %d\n", left_shift); // Output: 48

    // Right Shift
    unsigned char right_shift = a >> 2;
    printf("a >> 2 = %d\n", right_shift); // Output: 3

    return 0;
}
