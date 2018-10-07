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
    char kevert[50]={0};
        while (szoveg[j]!= '\0')
        {
            szo[i]= szoveg[j];
            i++;
            j++;
        }
        for (int k=1; k<strlen(szo); k++)
        {

        }
        printf("%s\n",szo) ;

    return 0;
}
