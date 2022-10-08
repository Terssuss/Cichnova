#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int easyscore = 0, mediumscore = 0, hardscore = 0;
int main() {
	
	srand (time(0));
	
	int input = 0, nahodna = 0, easypokus = 5, mediumpokus = 8, hardpokus = 12;
	char obtiznost, konec;

		printf("> VYBER SI OBTIZNOST <\n\n  [1]Easy   - do 10\n  [2]Medium - do 50\n  [3]Hard   - do 100\n\n  [4]Jak hra funguje\n  [5]Score\n  [6]Konec\n\nZadej: ", easyscore);
		
			scanf(" %c", &obtiznost);
		
		//pro ty chytre lidi co zadali neco jineho nez je v nabidce
		if (obtiznost != '1' && obtiznost != '2' && obtiznost != '3' && obtiznost != '4' && obtiznost != '5' && obtiznost != '6') {
			
			system("cls");
			main();
		}
		
		
		//uzivatel si vybral obtiznost Easy		
		if (obtiznost == '1') {
			
			system("cls");
		
			nahodna = rand()%10+1;
			
			printf("Vybral sis obtiznost Easy, zadavej v rozmezi 0 - 10. Mas 5 pokusu na uhodnuti cisla.\n\n");
			
				while(easypokus != 0) {
					
					printf("\nZbyvajici pokusy (%i) \nZadej: ", easypokus);
					
						scanf("%i", &input);
						
					
						if (input < nahodna && input >= 0 && input <=10) 
							
							printf("\nZadane cislo je moc male.\n");
							
						if (input > nahodna && input >= 0 && input <=10)
							
							printf("\nZadane cislo je moc velke.\n");
							
						if (input < 0 || input > 10)
							
							printf("\nCislo co jsi zadal neni v rozmezi, tvuj problem stracis jeden pokus.\n");
							
						//uzivatel vyhral	
						if (input == nahodna)
						
							break;		
							
					easypokus--;	
				}
			
			//program zjistuje jestli uzivatel prohral nebo ne
			if (easypokus == 0) 
				
				printf("\nSmula, prohral jsi.");
	
			else
				
				printf("\nGratuluji, vyhral jsi.\nPocet pokusu co ti zbyly - %i", easypokus);
			
			//program prida skore podle toho kolik pokusu potreboval hrac na uhadnuti hodnoty	
			if (easypokus != 0 && easypokus > easyscore) 
			
				easyscore = easypokus;			
			}
		
		//uzivatel si vybral obtiznost Medium	
		if (obtiznost == '2') {
			
			system("cls");
		
			nahodna = rand()%50+1;
			
			printf("Vybral sis obtiznost Medium, zadavej v rozmezi 0 - 50. Mas 8 pokusu na uhodnuti cisla.\n\n");
			
				while(mediumpokus != 0) {
					
					printf("\nZbyvajici pokusy (%i) \nZadej: ", mediumpokus);
					
						scanf("%i", &input);
						
					
						if (input < nahodna && input >= 0 && input <=50) 
							
							printf("\nZadane cislo je moc male.\n");
							
						if (input > nahodna && input >= 0 && input <=50)
							
							printf("\nZadane cislo je moc velke.\n");
							
						if (input < 0 || input > 50)
							
							printf("\nCislo co jsi zadal neni v rozmezi, tvuj problem stracis jeden pokus.\n");
					
						//uzivatel vyhral	
						if (input == nahodna)
						
							break;	
							
					mediumpokus--;				
				
					}
			
			//program zjistuje jestli uzivatel prohral nebo ne
			if (mediumpokus == 0) 
				
				printf("\nSmula, prohral jsi.");
	
			else
				
				printf("\nGratuluji, vyhral jsi.\nPocet pokusu co ti zbyly - %i", mediumpokus);		
				
			//program prida skore podle toho kolik pokusu potreboval hrac na uhadnuti hodnoty	
			if (mediumpokus != 0 && mediumpokus > mediumscore) 
			
				mediumscore = mediumpokus;
			}
		
		//uzivatel si vybral obtiznost Easy		
		if (obtiznost == '3') {
			
			system("cls");
		
			nahodna = rand()%100+1;
			
			printf("Vybral sis obtiznost Hard, zadavej v rozmezi 0 - 100. Mas 12 pokusu na uhodnuti cisla.\n\n");
			
				while(hardpokus != 0) {
					
					printf("\nZbyvajici pokusy (%i) \nZadej: ", hardpokus);
					
						scanf("%i", &input);
						
					
						if (input < nahodna && input >= 0 && input <=100) 
							
							printf("\nZadane cislo je moc male.\n");
							
						if (input > nahodna && input >= 0 && input <=100)
							
							printf("\nZadane cislo je moc velke.\n");
							
						if (input < 0 || input > 100)
							
							printf("\nCislo co jsi zadal neni v rozmezi, tvuj problem stracis jeden pokus.\n");
							
						//uzivatel vyhral	
						if (input == nahodna)
						
							break;		
							
					hardpokus--;	
				}
			
			//program zjistuje jestli uzivatel prohral nebo ne
			if (hardpokus == 0) 
				
				printf("\nSmula, prohral jsi.");
	
			else
				
				printf("\nGratuluji, vyhral jsi.\nPocet pokusu co ti zbyly - %i", hardpokus);		
			
			//program prida skore podle toho kolik pokusu potreboval hrac na uhadnuti hodnoty	
			if (hardpokus != 0 && hardpokus > hardscore) 
			
				hardscore = hardpokus;
			}
			
		//hrac nevi jak se hraje hra
		if (obtiznost == '4') {
			
			system("cls");
			
			printf("> JAK FUNGUJE HRA <\n\n");
			printf("Pocitac si mysli cislo a tvym ukolem je jej uhodnout.\n");
			printf("Vzdy mas vybrane rozmezi cisel ve kterem si pocitac vybira a pocet pokusu podle vybrane obtiznosti.");
		}


		//tabulka nejlepsich skore ktere hrac dokazal zahrat
		if (obtiznost == '5'){
			
			system("cls");
			
			printf("> TVE NEJVYSSI SKORE <\n\n  Easy    (%i)   nejvyssi mozne skore je 5\n  Medium  (%i)   nejvyssi mozne skore je 8\n  Hard    (%i)   nejvyssi mozne skore je 12", easyscore, mediumscore, hardscore);
		}

		//uzivatel si preje vypnout hru
		if (obtiznost == '6') {
				
				system("cls");
			
				printf("Opravdu si prejes ukoncit program? [y/n] ");
				
					scanf(" %c", &konec);
					
				if (konec == 'y') {
					
					system("cls");
					
					printf("Doopravdy? [y/n] ");

						scanf(" %c", &konec);
						
					if (konec == 'y')
					
						exit(0);
						
					else {
							
						system("cls");
						main();
					}	
				}
			
				else {
					
					system("cls");
					main();
				}					
			}
	
		//Hrac se vraci do menu	
		printf("\n\nPro vraceni do hlavniho menu stiskni enter.");
			getchar(); getchar();
			
		system("cls");
		main();
}
