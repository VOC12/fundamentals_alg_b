#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char **argv) {
    const char *const even_or_odd[] = { "even", "odd" };
    for (int i = 1; i < argc; i ++) {
        const int n = atoi(argv[i]);
        printf("%d is %s\n", n, even_or_odd[(int)fmod((unsigned)n, 2.0)]);
    }
    return 0;
}