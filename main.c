#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j;
    char carac;
    srand(time(NULL));
    do {
        fflush(stdin);
        printf("\n Nombre de caractere(s) : ");
    }
    while ((scanf("%d", &i) == 0) && i < 1);

    printf("\n\n Votre code est : ");
    for (j = 0; j < i; j++) {

        switch (rand() % 4) {
            case 0:
                carac = ((rand() % 26) + 'A');
                break;
            case 1:
                carac = ((rand() % 26) + 'a');
                break;
            case 2:
                carac = ((rand() % 9) + '1');
                break;
            case 3:
                if (rand() % 2 == 0)
                    carac = '!';
                else
                    carac = '?';
        }
        printf("%c", carac);
    }
	getch();
	return 0;
}