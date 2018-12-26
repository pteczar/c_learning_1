#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    int len;
    scanf("%d", &len);

    char arr[len];

    memset(arr, 0, sizeof arr);

    for (int i = 0; i < len; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
