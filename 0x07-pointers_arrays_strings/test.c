#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[3][2] = {
		{'g','h'},
		{'r','u'},
		{'y','c'}

	};
	char *s = (char *) a;
	printf("%s\n", (char *) a);
	printf("%c\n", s[0]);
}
