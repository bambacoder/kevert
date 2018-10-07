#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    char szoveg[50]={0};
    scanf ("%s",szoveg);
    char szo[50]={0};
    int i= 0;
    int j= 0;
    int szohossz= 0;
    int sorrend[50]={0};
    srand(time(0));
    char kevert[50]={0};
    while (szoveg[j]!= '\0')
    {
        szo[i]= szoveg[j];
        i++;
        j++;
    }
    for (int k=1; k<strlen(szo); k++)
    {
        sorrend[k]=(rand()%(strlen(szo)-2))+1;
        szohossz++;
    }
    for (int l=1;l<szohossz; l++)
    {
        printf("%d, ", sorrend[l]);
    }
    kevert[0]=szo[0];
    kevert[szohossz]= szo[szohossz];
    for (int m= 1; m<szohossz; m++)
    {
        kevert[m] = szo [sorrend[m]];
    }
    printf("%s",kevert);

    return 0;
}
