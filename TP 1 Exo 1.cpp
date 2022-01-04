#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int caractereActuel = 0;
	FILE* fichier = NULL;

	fichier = fopen("C:\\Users\\Ogez E\\Documents\\Travaille\\Langage C\\Chapter 5 Algorithme Fichiers\\source.txt", "r+");


	if (fichier != NULL)
	{
		do
		{
			caractereActuel = fgetc(fichier);
			printf("%c", caractereActuel);
		} 
		while (caractereActuel != EOF);
	}
	else
	{
		printf("Impossible d'ouvrir le fichier source.txt");
	}

	fclose(fichier);

	return 0;
}

/* Avec une application écrite en C, vous allez ouvrir le fichier « source.txt » en lecture, et
afficher son contenu caractère par caractère à l’écran à l’aide de la fonction getc.
Refermez ensuite le fichier. */
