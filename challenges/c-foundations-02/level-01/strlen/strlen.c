#include <stddef.h>

size_t	strlen(const char *s)
{
	int l;
	l = 0;
	while(s[l])
		l++;
	return l;
}
