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

// Define the maximum length of the input line
#define MAX_LINE 1000

// Enum to control the loop
enum loop { NO, YES };

int main(void) {
    int c;                  // Variable to store each character
    int i;                  // Index for the buffer
    char s[MAX_LINE];      // Buffer to store the input line

    // Uncomment the following block to use the original for-loop with logical operators
    /*
    for (i = 0; i < MAX_LINE - 1 && (c = getchar()) != '\n' && c != EOF; ++i)
        s[i] = c;
    s[i] = '\0'; // Null-terminate the string
    */

    // Transformed loop without using logical operators
    enum loop okloop = YES; // Initialize loop control variable

    i = 0; // Initialize buffer index
    while (okloop == YES) {
        if (i >= MAX_LINE - 1) {          // Check if buffer limit is reached
            okloop = NO;
        }
        else {
            c = getchar();                  // Read the next character
            if (c == '\n') {                // Check for newline
                okloop = NO;
            }
            else if (c == EOF) {            // Check for end-of-file
                okloop = NO;
            }
            else {
                s[i] = c;                    // Store character in buffer
                ++i;                         // Increment buffer index
            }
        }
    }
    s[i] = '\0'; // Null-terminate the string

    // Output the entered line
    printf("You entered: %s\n", s);

    return 0;
}


