#include <stdio.h>
#include <stdlib.h>
#include "STUDENT.h"
#include <string.h>

int main(int argc, char *argv[])
{
    char quitter[5];
    while (strcmp(quitter, "NON"))
    {
        int choix;
        printf("Hello World!\n");
        printf("\nVOICI LA LISTE D'ETUDIANTS :\n");
        Etudiant etu1;
        etu1.Nom = "Yangue";
        etu1.Prenom = "Nick Brice";
        etu1.dateDeNaissance.jour=14;
        etu1.dateDeNaissance.mois=2;
        etu1.dateDeNaissance.annee=2005;
        etu1.Matricule="19S33698";
        etu1.niveau=2;
        etu1.parcoursType="Informatique";
        etu1.Sexe='F';

        Etudiant etu2;
        etu2.Nom="Matho";
        etu2.Prenom="Melonie";
        etu2.dateDeNaissance.jour=23;
        etu2.dateDeNaissance.mois=4;
        etu2.dateDeNaissance.annee=2002;
        etu2.Matricule="19S50000";
        etu2.niveau=3;
        etu2.parcoursType="Informatique";
        etu2.Sexe='F';

        Etudiant etu3;
        etu3.Nom="Kamgaing";
        etu3.Prenom="Paloma";
        etu3.dateDeNaissance.jour=3;
        etu3.dateDeNaissance.mois=10;
        etu3.dateDeNaissance.annee=2002;
        etu3.Matricule="20S40000";
        etu3.niveau=2;
        etu3.parcoursType="Informatique";
        etu3.Sexe='F';

        Etudiant etu4;
        etu4.Nom="Ndomo";
        etu4.Prenom="Odette";
        etu4.dateDeNaissance.jour=11;
        etu4.dateDeNaissance.mois=10;
        etu4.dateDeNaissance.annee=2000;
        etu4.Matricule="19S40000";
        etu4.niveau=3;
        etu4.parcoursType="Informatique";
        etu4.Sexe='F';
        afficheEtu (etu1);
        afficheEtu (etu2);
        afficheEtu (etu3);
        afficheEtu (etu4);

        groupeEtudiant G;
        G[1]=etu1;
        G[2]=etu2;
        G[3]=etu3;
        G[4]=etu4;
        printf("\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
        printf("========================================== MENU ================================================\n");
        printf("++++++++++++++++++++++++++++++++++QUE VOULEZ-VOUS FAIRE ?+++++++++++++++++++++++++++++++++++\n");
        printf("\n\t 1) Determiner le nombre de filles dans le groupe ?");
        printf("\n\t 2) Rechercher un etudiant ?");
        printf("\n\t 3) Determiner l'age moyen du groupe ?");
        printf("\n\t 4) Afficher les membres du groupe ?\n");
        printf("Alors, que choisissez-vous?\n");
        scanf("%d", &choix);

            switch(choix)
        {
            case 1:
                printf("Dans ce groupe d'etudiants, il y a : %d filles", nbreFille(G , 4));
                printf("\nVoulez-vous executer une autre action (OUI ou NON) ?\n");
                scanf("%s", quitter);
                break;
            case 2:
                printf("Entrez le matricule de l'etudiant que vous recherchez : \n");
                char* matriculeE;
                scanf("%s", matriculeE);
                //printf("L'Etudiant avec le matricule %s est : ", matriculeE);
                rechercheEtudiant (G, 4, matriculeE);
                printf("\nVoulez-vous executer une autre action (OUI ou NON) ?\n");
                scanf("%s", quitter);
            case 3:
                printf("L'age moyen du groupe est : %d ans", ageMoyen(G, 4));
                printf("\nVoulez-vous executer une autre action (OUI ou NON) ?\n");
                scanf("%s", quitter);
            case 4:
                printf("Voici notre groupe d'etudiants :\n");
                afficherGroupe (G, 4);
                printf("\nVoulez-vous executer une autre action (OUI ou NON) ?\n");
                scanf("%s", quitter);
            default:
                printf("Votre choix est incorrect\nVoulez vous reessayer ?\n");
                scanf("%s", choix);
        }
}
    printf("\n");

    return 0;
}
