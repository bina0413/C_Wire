#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Vérifier si un argument a été passé
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <nom_du_fichier>\n", argv[0]);
        return 1;  // Code d'erreur
    }

    // Le nom du fichier est passé dans argv[1]
    const char *filename = argv[1];

    // Ouverture du fichier
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        return 1;  // Code d'erreur
    }

    printf("Le fichier %s a été ouvert avec succès !\n", filename);
    int a,c, b,d;
    while(1)
    {
            if(fscanf(file, "%d;%d;%d;%d\n", &a,&b,&c,&d)==EOF){break;}
            printf("a=%d b=%d c=%d d=%d\n", a,b,c,d);  
            //arbre(a,b,c,d);
    }


    // Lire et traiter le fichier...

    fclose(file);

    return 0;  // Succès
}
