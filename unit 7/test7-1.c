#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("%u\t", (unsigned)sizeof 1);
    printf("%u\t", (unsigned)sizeof +1);
    printf("%u\t", (unsigned)sizeof -1);
    printf("%u\t", (unsigned)sizeof (unsigned)-1);
    printf("%u\t", (unsigned)sizeof (double)-1);
    printf("%u\t", (unsigned)sizeof (double)-1);
    printf("%u\t", (unsigned)sizeof n+2);
    printf("%u\t", (unsigned)sizeof (n+2));
    printf("%u\t", (unsigned)sizeof (n+2.0));
    return 0;
}
