#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	
int lev, sup = 1000, vlk = 1000;
char pes;

	system("cls");

	//cislo od ktereho odpocitavame
	printf("Zadej cislo od ktereho chces odpocitavat: ");
	scanf(" %i", &lev);

	do {
		
		//uzivatel dostane moznost upravit frekvenci a delku pipnuti
		system("cls");
		printf("Momentalni frekvence je %i Hz a delka je %i ms\nPrejes si nastavit frekvenci a delku pipnuti? y/n ", sup, vlk);
		scanf(" %c", &pes);
	
	}while (pes != 'y' && pes != 'n');	


	if (pes == 'y') {
		system("cls");

		//nastaveni frekvence
		printf("\nZadej frekvenci pipnuti: ");
		scanf("%i", &sup);

		//nastaveni delky pipnuti
		printf("\nZadej delku pipnuti v milisekundach: ");
		scanf("%i", &vlk);
	}
	
	//cyklus diky kteremu se bude provadet odpocet
	while (lev >= 0) {
	
		system("cls");
		printf("%i", lev);
		lev--;
		Beep(sup, vlk);
	}	
}	

