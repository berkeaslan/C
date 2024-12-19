// We can rewrite this expression:

for (i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i)
	s[i] = c;

// Into, without using the logical operators (i.e., && and ||):

enum loop { NO, YES }; // Where, NO has value 0, and YES has value 1
enum loop okloop = YES;

i = 0;
while (okloop = YES) {
	if (i >= lim - 1)
		okloop = NO;
	else if ((c = getchar()) == '\n')
		okloop = NO;
	else if (c == EOF)
		okloop = NO;
	else {
		s[i] = c;
		++i;
	}
}

