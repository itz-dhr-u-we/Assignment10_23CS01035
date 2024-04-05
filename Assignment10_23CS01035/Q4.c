#include <stdio.h>
union type
{
    int a1[5];
    float a2[5];
    char a3[5];
};

int main()
{
    union type integer;
    printf("Enter elements of Integer Array:"); 
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&integer.a1[i]);
    }
    union type floating;
    printf("Enter elements of Float Array:"); 
    for (int i = 0; i < 5; i++)
    {
        scanf("%f",&floating.a2[i]);
    }
    union type character;
    getchar();
    printf("Enter elements of Character Array:"); 
    for (int i = 0; i < 5; i++)
    {
        scanf("%c",&character.a3[i]);
    }
   

    printf("Elements of Integer Array are: "); 
    for (int i = 0; i < 5; i++)
    {
        printf("%d",integer.a1[i]);
    }
    printf("\n");
    printf("Elements of Float Array are: "); 
    for (int i = 0; i < 5; i++)
    {
        printf("%.1f ",floating.a2[i]);
    }
    printf("\n");
    printf("Elements of Character Array are: "); 
    for (int i = 0; i < 5; i++)
    {
        printf("%c",character.a3[i]);
    }
    
    return 0;
}
