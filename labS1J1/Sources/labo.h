/*
* Déclarer une structure de donnée qui va s'appeler String. La structure va avoir une propriété characters et une propriété length.
*/

	typedef struct {
		int length;
		char characters[64];
	}String;
/*
* Faire une fonction qui retourne un sous-tableau de character a partir de celui passer(paramètre texte).
*/
char* sousTexte(char* texte, int from, int to);


/*
* Faire une fonction qui copie le contenu du tableau de character dans la propriété de data
* de la structure string.
*/
void set_String(char* text, String* s);

/*
* Faire une fonction qui vérifie si un mot est un palindrome i.e. kayak, racecar...
* Si le mot est un palindrome retourner 1 sinon 0
*/
int String_is_palindrome(String* s);

/*
* Implémenter la fonction bubble sort et trier le tableau
*/
void bubbleSort(int elements[], int n);