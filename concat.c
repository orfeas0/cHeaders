#ifndef CONCAT_C_
#define CONCAT_C_

#include "concat.h"

char* concat(char* string1, char* string2)
{
	char* temp = malloc(sizeof(char)*(strlen(string1)+strlen(string2)+1));
	memmove(temp, string1, strlen(string1));
	memmove(temp+strlen(string1), string2, strlen(string2));
	temp[strlen(string1)+strlen(string2)] = '\0';
	return temp;
}

#endif /* CONCAT_C_ */
