#include <stdio.h>
union data
{
    int x;
    float y;
    char z;
};

int main()
{
    union data assign;
    assign.x = 70;
    assign.y = 100;
    assign.z = 'A';

    printf("int:   %d\n",assign.x);
    printf("float: %.2f\n",assign.y);
    printf("char:  %c\n",assign.z);

    return 0;
}