#include <stdio.h>
#include <string.h>

union Data {
        int i;
        int p*;
        float f;
        float q*;
        char c;
        char r*;
};

int main() {
        union Data data;
        printf( "Union Data size : %d\n", sizeof(union Data));

        return 0; }

