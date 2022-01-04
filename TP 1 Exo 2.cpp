#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	char caractereActuel = 0;
	FILE* fichier = NULL;
	FILE* fichier2 = NULL;

	fichier = fopen("C:\\Users\\Ogez E\\Documents\\Travaille\\Langage C\\Chapter 5 Algorithme Fichiers\\source.txt", "r");
	fichier2 = fopen("C:\\Users\\Ogez E\\Documents\\Travaille\\Langage C\\Chapter 5 Algorithme Fichiers\\dest1.txt", "w");

	if (fichier != NULL)
	{
		while (caractereActuel != -1)
		{
			caractereActuel = fgetc(fichier);
			fputc(caractereActuel, fichier2);
			printf("%c", caractereActuel);
		}

		fclose(fichier);
		fclose(fichier2);
	}

}

/* Ouvrir le fichier « source.txt » en lecture, et un fichier que vous nommerez « dest1.txt » en
écriture, puis copier chaque caractère du fichier source dans le fichier de destination.
Refermez le fichier. */

