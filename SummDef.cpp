#include <stdio.h>
#include <windows.h>
#define MAX 100000

int a[MAX];

int main()
{
    int j;
    int i;
    for(j = 0; j < MAX; j++)
        a[j]=j; 


DWORD start = GetTickCount();

    long Summa = 0;
        for(i = 0; i < MAX; i++)
        {
            Summa = Summa + a[i];
           for(j = 0; j < MAX; j++)
            Summa = Summa;
        }
    printf("Summ is %d ", Summa);

DWORD end = GetTickCount();
DWORD time = (end - start)/1000;

   printf("Time is %d", time);

    return 0;
}
