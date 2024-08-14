#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbOfLifes = 5, level = 1, playerAge, result;
    printf("Vous avez %d vies et vous etes au niveau %d\n", nbOfLifes, level);
    printf("Combien valent 2+2 ?");

    scanf("%d", &result);
    if(result != 4) {
        printf("**** BIM BAM BOUM ! ****\n");
        nbOfLifes--;
        printf("Perdu ! Il vous reste %d vies maintenant\n", nbOfLifes);
    } else {
        printf("Bravo !\n");
        level++;
        printf("Vous etes au niveau %d maintenant\n", level);
    }
    return 0;
}
