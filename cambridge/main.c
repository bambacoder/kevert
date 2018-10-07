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
    int randszamsor[50]={0};

    while (szoveg[j]!= '\0')
    {
        szo[i]= szoveg[j];
        i++;
        j++;
    }
    i= 0;
    j= 0;
    /*
    for (int k=1; k<strlen(szo); k++)
    {
        sorrend[k]=(rand()%(strlen(szo)-2))+1;
        if (k>1)
        {
            for( int n=1; n<k; n++)
            {
                if (sorrend[n]=sorrend[k])
                {
                    sorrend[n]= (rand()%(strlen(szo)-2))+1;
                }
            }
        }
        szohossz++;
    }
    */
    int szamok[50]={0};
    int ujsorrend[50]={0};
    int hanyadik=0;
    int ujhossz=strlen(szo);
    for(int o=1; o<ujhossz; o++)
    {
        szamok[i]=i;
    }
    for (int p=1; p<ujhossz; p++)
    {
        hanyadik= rand()%((ujhossz));
        printf("%d, ", hanyadik);
        ujsorrend[p]=szamok[hanyadik];
        for(int q=hanyadik; q<ujhossz; q++)
        {
            szamok[q]=szamok[q+1];
        }
        printf("%d ",ujsorrend[p]);
    }

    /*
    for (int l=1;l<szohossz; l++)
    {
        printf("%d, ", sorrend[l]);
    }
    */
    kevert[0]=szo[0];
    kevert[ujhossz]= szo[ujhossz];
    int emm;
    for (int m= 1; m<ujhossz; m++)
    {
        emm= ujsorrend[m];
        kevert[m] = szo [emm];
    }
    printf("%s",kevert);

    return 0;
}
