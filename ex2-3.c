// This small program already shows all the intricacies and the beauty of C (e.g., '\0' added to the end of the string arary by the compiler, auto array size determination), or rather it's compiler.
#include <stdio.h>

// We define the following symbolic constants
#define YES 1
#define NO 0

// This function converts a string of hexadecimal digits into it's equivalent integer value:
int htoi(char s[]) 
{
	int hextoint, i, inhex, n;

	// Hexadecimal numbers start with 0x or 0X in C, so we should that part of the hexadecimal number.
	if (s[i] == '0') // Check if 0 is there, then skip.
	{ 
		++i; 
		if (s[i] == 'x' || s[i] == 'X') // Check if x or X is there, then skip.
			++i;
	}

	n = 0;
	inhex = YES;
	for ( ; inhex == YES; ++i) // Test for the different cases and convert hexadecimal into integer.
	{
		if (s[i] >= 0 && s[i] <= 9)
			hextoint = s[i] - '0'; // This is a trick used to convert hexadecimal to int.
		else if (s[i] >= 'a' && s[i] <= 'f')
			hextoint = s[i] - 'a' + 10; 
		else if (s[i] >= 'A' && s[i] <= 'F')
			hextoint = s[i] - 'A' + 10;
		else
			inhex = NO; // Once outside of the hex, we break out of the loop.

		// If we are still in the hex, we compute the current value of the integer:
		if (inhex == YES)
			n = 16 * n + hextoint;
	}
}

// Main function
int main() 
{
    char hexString[] = "0x1A3F"; // Example hexadecimal string, we don't need to give the array size, as C automatically initializes to the number of char's in the string.
    int result = htoi(hexString); // Convert to integer
    printf("The integer value of %s is %d\n", hexString, result); // Print the result

    return 0;
}