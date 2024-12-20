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

// The function prototype of any(s1, s2):
int any(char s1[], char s2[]);

int main()
{
	// Define two strings directly in the code:
    char s1[] = "hello world";
    char s2[] = "ow";

    // Call the any function and store the result:
    int result = any(s1, s2);

    // Print the result:
    if (result != -1)
    	printf("The first occurrence of any character from s2 in s1 is at index %d.\n", result);
    else
        printf("No characters from s2 are found in s1.\n");
    

    return 0;
}

int any(char s1[], char s2[])
{
	// Declare two counter variables: i and j.
	int i, j;

	// Iterate through all charachters of s1:
	for (i = 0; s1[i] != '\0'; ++i)
		// Iterate through all charachters of s2 for each charachter of s1:
		for (j = 0; s2[j] != '\0'; ++j)
			// If there is a match, return the i:
			if (s1[i] == s2[j])
				return i;

	// If there is no match return -1:
	return -1;
}