#include <stdio.h>
#include <string.h>

union Data {
        int i;
        int p* = &i;
        float f;
        float q* = &f;
        char c;
        char r* = &c;
};

int main() {
        union Data data;
        printf( "Union Data size : %d\n", sizeof(union Data));

        data.i = 13;
        printf( "Data.i : %d\n", data.i);

        data.f = 13.11;
        printf( "Data.f : %f\n", data.f);

        data.c = "a";
        printf( "Data.c : %c\n", data.c);


        return 0; }

