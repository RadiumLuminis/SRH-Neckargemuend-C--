//15.01.2021 - Wiederholung zum Thema Arrays

#include <iostream>
using namespace std;

void main()
{
	std::locale::global(std::locale("German_germany"));			//Umlaute Verwenden k�nnen

	char inbox[20], outbox[41];									//Inbox und Outbox anlegen, Outbox ist doppelt so gro�

	cout << "Wort: "; cin >> inbox;								//Wort soll eingegeben werden

	//in die Outbox schleifen

	/*
	int i;
	for (i = 0; inbox[i] != '\0'; i++)
	{
		outbox[i] = inbox[i];
	}
	outbox[i] = '\0';
	*/

	//Mit Sternchen in Outbox schleifen

	int i, a = 0;												//Zwei Z�hlvariablen anlegen
	for (i = 0; inbox[i] != '\0' ; i++)							//Schleife, l�uft bis zum Wortende (Nullterminierung)
	{
		outbox[a] = '*';										//Sternchen setzen
		a++;													//Schnelle Z�hlvariable erh�hen
		outbox[a] = inbox[i];									//Buchstaben setzen
		a++;													//Schnelle Z�hlvariable erh�hen
	}
	outbox[a] = '*';											//Sternchen setzen
	outbox[a+1] = '\0';											//Nullterminierung, um alles hinter dem letzten Buchstaben nicht als Datenm�ll zu haben

	cout << outbox << endl;										//Ausgabe des Wortes mit Sternchen
	cout << "L�nge des Wortes: " << i << endl;					//Ausgabe der L�nge des Wortes

	char outbox2[41];											//Noch ein Array

	int laenge = i-1, z;										//Zwei Z�hlvariablen anlegen
	for (z = 0; inbox[z] != '\0'; z++)							//Einfache Schleife, l�uft bis zur L�nge des Wortes (siehe vorher), man k�nnte auch z < i nehmen
	{
		outbox2[z] = inbox[laenge];								//Der gez�hlte Buchstabe des neuen Arrays wird zum umgekehrt gez�hlten Buchstaben der Inbox
		laenge--;												//Zweite Variable l�uft r�ckw�rts: z l�uft hoch, laenge l�uft runter
	}
	outbox2[z] = '\0';											//Nullterminierung nicht vergessen

	cout << outbox2 << endl;									//Ausgabe des umgekehrten Wortes

	system("pause");

}
