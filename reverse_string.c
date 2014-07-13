#ifndef REVERSE_STRING_C_
#define REVERSE_STRING_C_

#include "reverse_string.h"

void reverse_string(char* s)
{
	char t;
	char *end = s + strlen(s);
	while(--end > s)
	{
		t = *s;
		*s++=*end;
		*end=t;
	}
}

#endif /* REVERSE_STRING_C_ */
