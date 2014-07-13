#ifndef GETCHAR_SILENT_C_
#define GETCHAR_SILENT_C_

#include "getchar_silent.h"

int getchar_silent()
{
	int ch;
	struct termios oldt, newt;

	/* Retrieve old terminal settings */
	tcgetattr(STDIN_FILENO, &oldt);

	/* Disable canonical input mode, and input character echoing. */
	newt = oldt;
	newt.c_lflag &= ~( ICANON | ECHO );

	/* Set new terminal settings */
	tcsetattr(STDIN_FILENO, TCSANOW, &newt);

	/* Read next character, and then switch to old terminal settings. */
	ch = getchar();
	tcsetattr(STDIN_FILENO, TCSANOW, &oldt);

	return ch;
}

#endif /* GETCHAR_SILENT_C_ */
