#include <string.h>
#include <stdio.h>
#include "STUDENT.h"

int nbreFille (groupeEtudiant G, int n){
    int nbre = 0;
    int i = 0;
    for (i=0; i<n; i++)
        if (G[i].Sexe == 'F')
            nbre++;
    return i;
}
int ageMoyen (groupeEtudiant G, int n){
    int addAge = 0;
    int i = 0;
    for (i=0; i<=n; i++)
        addAge = 2021 - (G[i].dateDeNaissance.annee);
        addAge++;
    return addAge/n;
}
char* rechercheEtudiant (groupeEtudiant G, int n, char* matriculeEtu){
    int i=0;
    char* verification = "Abscent";
    while((i<n) && strcmp(G[i].Matricule, matriculeEtu))
        i+=1;
    if(i < n)
        verification = "Present";
    return verification;
}
void afficheEtu (Etudiant E1){
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("Nom : %s \tPrenom \t: %s \t Matricule : %s \t Sexe : %c \t Niveau : %d \t ", E1.Nom, E1.Prenom, E1.Matricule, E1.Sexe, E1.niveau);
    printf("\n Parcours-type : %s Date de Naissance : %d/%d/%d", E1.parcoursType, E1.dateDeNaissance.jour,E1.dateDeNaissance.mois,E1.dateDeNaissance.annee);
   // printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
}
void afficherGroupe (groupeEtudiant G, int n){
    printf("\n Voici le membres de ce groupe d'Etudiants :");
    int i = 0;
    while  (i<=n)
        afficheEtu(G[i]);
        i++;
}
