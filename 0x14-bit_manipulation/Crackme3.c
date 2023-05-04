#include <stdio.h>

int main(void) {
char donnees[] = "Congratulations!";
FILE *fichier = fopen("101-password", "w");
if (fichier == NULL) {
    printf("Impossible d'ouvrir le fichier\n");
    return 1;
}
fwrite(donnees, sizeof(char), strlen(donnees), fichier);
fclose(fichier);
return (0);
}
