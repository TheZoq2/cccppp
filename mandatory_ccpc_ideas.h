#ifndef H_H
#define H_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#define private anti_ccpc
#define no_food void

#define comrades struct

#define our_char char
#define our_string char *

#define our_int int
#define our_float float
#define our_double double
#define our_long long


#define our_length sizeof
#define to_gulag malloc
#define report return

#define defect exit

//Basically a printf()
int publish_propaganda(const char *format, ...){
    va_list arg;
    int done;
    va_start(arg, format);
    done = vfprintf(stdout, format, arg);
    va_end(arg);
    return done;
}
//Free but communist
void release_from_gulag(void *ptr){
    free(ptr);
}
#endif