#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#define taille_MAX 100
#include <stdio.h>
#include <string.h>

//Déclaration du type structuré Date
typedef struct {
    unsigned int jour; //Le mot clé "unsigned" va permettre que cette valeur entré entré par l'utilisateur soir toujours positif
    unsigned int mois; //Le mot clé "unsigned" va permettre que cette valeur entré entré par l'utilisateur soir toujours positif
    unsigned int annee;//Le mot clé "unsigned" va permettre que cette valeur entré entré par l'utilisateur soir toujours positif
}Date;
typedef struct {
    char* Nom;
    char* Prenom;
    char* Matricule;
    char* Sexe;
    unsigned int niveau;
    char* parcoursType;
    Date dateDeNaissance;
}Etudiant;

 typedef Etudiant groupeEtudiant[taille_MAX];

 int nbreFille (groupeEtudiant G, int n);//Définition de la fonction qui va détèrminer le nombre de filles du groupe

 int ageMoyen (groupeEtudiant G, int n);//Définition de la fonction qui permettra de calculer l'age moyen du groupe d'étudiants

 char* rechercheEtudiant (groupeEtudiant G, int n, char* matriculeEtu); //Permettra de rechercher un étudiant dans le groupe

 void afficheEtu (Etudiant E1);
 void afficherGroupe (groupeEtudiant G, int n);

#endif // STUDENT_H_INCLUDED
