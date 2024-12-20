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

// Function prototype of the squeeze(s1, s2) function:
void squeeze(char s1[], char s2[]);

int main()
{
    // Sample strings
    char s1[] = "hello, world!";
    char s2[] = "aeiou"; // Characters to remove from s1

    printf("Original string (s1): \"%s\"\n", s1);
    printf("Characters to remove (s2): \"%s\"\n", s2);

    // Call the squeeze function
    squeeze(s1, s2);

    printf("Modified string after squeeze: \"%s\"\n", s1);

    return 0;
}


// Time complexity of O(n^2), due to the two nested-for loops:
void squeeze(char s1[], char s2[])
{	
	int i, j, k;

	// We first iterate through all charachters in s1:
	for (i = k = 0; s1[i] != '\0'; ++i) {
		// Next, we take a "brute-force" approach in order to find
		// if s1[i] is present in s2, we iterate through all 
		for (j = 0; s2[j] != '\0' && s2[j] != s1[i]; ++j);

		// if s1[i] is not found in s2, we copy it to the position k,
		// next we increase the k, hence the postfix ++ operator: k++.
		if (s2[j] == '\0')
			s1[k++] = s1[i];
	}

	// Null-terminate the modified string
    s1[k] = '\0';
}