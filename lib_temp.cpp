#include<stdio.h>

extern "C" void name(const char* p) {
    printf("Hello %s\n",p);
}
