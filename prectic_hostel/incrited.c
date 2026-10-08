#include <stdio.h>

int main()
{
    char array[2000];
    char array_2[2000];
    char array_3[2000];
    printf("enter :");
    scanf("%s",array);
    char array_n[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
                    // A   B   C   D   E   F   G   H   I   J   K   L   M   N   O   P   Q   R   S   T   U   V   W   X   Y   Z
    char array_e[26]={'N','Q','X','P','O','M','A','F','T','R','H','L','Z','G','E','C','Y','J','I','U','W','S','K','D','V','B'};
    for (int i = 0; array[i]!='\0'; i++)
    {
        int j=0;
        for (int j = 0; j < 26; j++)
        {
            if (array[i] == array_n[j])
            {
                array_2[i]=array_e[j];
                array_2[i+1]='\0';
                break;
            }
        }
    }
    printf("%s\n",array_2);
    printf("depcypition\n");
    for (int i = 0; array_2[i] != '\0'; i++)
    {
        int j = 0;
        for (int j = 0; j < 26; j++)
        {
            if (array_2[i] == array_e[j])
            {
                array_3[i] = array_n[j];
                array_3[i + 1] = '\0';
                break;
            }
        }
    }
    printf("%s", array_3);

    return 0;
}
