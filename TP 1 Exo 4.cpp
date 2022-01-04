#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

//Partie Fonction

int octets(FILE * fichier) {

	char oct = 0;
	int c = 0;

	while (oct != -1) {
		oct = fgetc(fichier);
		if (oct != -1) {
			c++;
		}
	}
	return c;
}

//Partie Affichage

int main()
{
	FILE* fichier = NULL;
	FILE* fichier2 = NULL;
	FILE* fichier3 = NULL;

	fichier = fopen("C:\\Users\\Ogez E\\Documents\\Travaille\\Langage C\\Chapter 5 Algorithme Fichiers\\source.txt", "r");
	fichier2 = fopen("C:\\Users\\Ogez E\\Documents\\Travaille\\Langage C\\Chapter 5 Algorithme Fichiers\\dest1.txt", "r");
	fichier3 = fopen("C:\\Users\\Ogez E\\Documents\\Travaille\\Langage C\\Chapter 5 Algorithme Fichiers\\dest2.txt", "r");

	if (fichier != NULL) {
		printf("Premier fichier: %d \n", octets(fichier));
	}
	if (fichier2 != NULL) {
		printf("Deuzieme fichier: %d \n", octets(fichier2));
	}
	if (fichier3 != NULL) {
		printf("Troisieme fichier: %d", octets(fichier3));
	}

	fclose(fichier);
	fclose(fichier3);
	fclose(fichier2);
}

/* Ecrire une fonction ayant un pointeur de fichier en argument (pointeur sur un fichier qui sera
déjà ouvert dans le programme principal) et qui retournera un entier. Cette fonction aura pour
but de calculer et de retourner la taille du fichier (en octets).
Essayez votre fonction avec les trois fichiers utilisés (source.txt, dest1.txt,dest2.txt).
La fermeture du fichier se fera dans le programme principal. */