#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#define taille_MAX 100
#include <stdio.h>
#include <string.h>

//D�claration du type structur� Date
typedef struct {
    unsigned int jour; //Le mot cl� "unsigned" va permettre que cette valeur entr� entr� par l'utilisateur soir toujours positif
    unsigned int mois; //Le mot cl� "unsigned" va permettre que cette valeur entr� entr� par l'utilisateur soir toujours positif
    unsigned int annee;//Le mot cl� "unsigned" va permettre que cette valeur entr� entr� par l'utilisateur soir toujours positif
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

 int nbreFille (groupeEtudiant G, int n);//D�finition de la fonction qui va d�t�rminer le nombre de filles du groupe

 int ageMoyen (groupeEtudiant G, int n);//D�finition de la fonction qui permettra de calculer l'age moyen du groupe d'�tudiants

 char* rechercheEtudiant (groupeEtudiant G, int n, char* matriculeEtu); //Permettra de rechercher un �tudiant dans le groupe

 void afficheEtu (Etudiant E1);
 void afficherGroupe (groupeEtudiant G, int n);

#endif // STUDENT_H_INCLUDED
