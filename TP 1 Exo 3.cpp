#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	char caractereActuel = 0;
	FILE* fichier = NULL;
	FILE* fichier2 = NULL;

	fichier = fopen("C:\\Users\\Ogez E\\Documents\\Travaille\\Langage C\\Chapter 5 Algorithme Fichiers\\source.txt", "r");
	fichier2 = fopen("C:\\Users\\Ogez E\\Documents\\Travaille\\Langage C\\Chapter 5 Algorithme Fichiers\\dest2.txt", "w");

	if (fichier != NULL)
	{
		while (caractereActuel != -1)
		{

			caractereActuel = fgetc(fichier);
			if (caractereActuel != 'a') {
				fputc(caractereActuel, fichier2);
				printf("%c", caractereActuel);

			}
		}
		fclose(fichier);
		fclose(fichier2);
		
	}
}


/* Ouvrir le fichier « source.txt » en lecture, et un fichier que vous nommerez « dest2.txt » en
écriture, puis vous copier chaque caractère du fichier source dans le fichier de destination
mais sans copier la lettre ‘a’ dès que vous la trouverez dans le fichier source.
Refermez le fichier. */
