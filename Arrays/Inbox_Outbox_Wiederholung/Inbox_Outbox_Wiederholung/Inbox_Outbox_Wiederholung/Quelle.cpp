//15.01.2021 - Wiederholung zum Thema Arrays

#include <iostream>
using namespace std;

void main()
{
	std::locale::global(std::locale("German_germany"));			//Umlaute Verwenden können

	char inbox[20], outbox[41];									//Inbox und Outbox anlegen, Outbox ist doppelt so groß

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

	int i, a = 0;												//Zwei Zählvariablen anlegen
	for (i = 0; inbox[i] != '\0' ; i++)							//Schleife, läuft bis zum Wortende (Nullterminierung)
	{
		outbox[a] = '*';										//Sternchen setzen
		a++;													//Schnelle Zählvariable erhöhen
		outbox[a] = inbox[i];									//Buchstaben setzen
		a++;													//Schnelle Zählvariable erhöhen
	}
	outbox[a] = '*';											//Sternchen setzen
	outbox[a+1] = '\0';											//Nullterminierung, um alles hinter dem letzten Buchstaben nicht als Datenmüll zu haben

	cout << outbox << endl;										//Ausgabe des Wortes mit Sternchen
	cout << "Länge des Wortes: " << i << endl;					//Ausgabe der Länge des Wortes


	//Inbox umgekehrt in Outbox schleifen

	char outbox2[41];											//Noch ein Array

	int laenge = i-1, z;										//Zwei Zählvariablen anlegen
	for (z = 0; inbox[z] != '\0'; z++)							//Einfache Schleife, läuft bis zur Länge des Wortes (siehe vorher), man könnte auch z < i nehmen
	{
		outbox2[z] = inbox[laenge];								//Der gezählte Buchstabe des neuen Arrays wird zum umgekehrt gezählten Buchstaben der Inbox
		laenge--;												//Zweite Variable läuft rückwärts: z läuft hoch, laenge läuft runter
	}
	outbox2[z] = '\0';											//Nullterminierung nicht vergessen

	cout << outbox2 << endl;									//Ausgabe des umgekehrten Wortes

	system("pause");

}
