// Code Topic: //,
#include <stdio.h>
int main()
{
    for (int i = 10; i > 0; i--)
    {
        if (i % 2 != 0)
        {
            printf("% 10d ", i);
        }
    }

    return 0;
}