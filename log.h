#ifndef H_LOG
#define H_LOG

#include <stdio.h>

#define MESS_REALDEBUG	1
#define MESS_DEBUG	2
#define MESS_VERBOSE	3
#define MESS_NORMAL	4
#define MESS_ERROR	5
#define MESS_FATAL	6

void message(int level, char * format, ...);
void log(int fd, char * format, ...);
void logSetErrorFile(FILE * f);
void logSetMessageFile(FILE * f);

#endif
