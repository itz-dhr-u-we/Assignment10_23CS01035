#include <stdio.h>
struct example
{
    int a1;
    int b1;
}ex;

union uni
{
    int a2;
    int b2;
}un;

int main()
{
    int structsize = sizeof(ex);
    int unionsize = sizeof(un);

    printf("Size of Structure: %d\n",structsize);
    printf("Size of Union: %d\n",unionsize);
    return 0;
}