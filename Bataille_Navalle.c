#include "Bataille_Navalle.h"


void init_0(int n, int Tab[n][n])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            Tab[i][j] = 0;
        }
    }
}

void display(int n, int Tab[n][n])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", Tab[i][j]);
        }
        printf("\n");
    }
}

int main()
{

    return 0;
}