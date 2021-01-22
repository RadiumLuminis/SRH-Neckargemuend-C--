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

	//Inbox ohne e/E in die Outbox schleifen

	char outbox3[41];											//Und wieder, und wieder, und wieder...

	int z2 = 0;													//Zweite Zählvariable und so

	for (int i2 = 0; inbox[i2] != '\0'; i2++)					//Die Schleife kennen wir schon, läuft bis zum Ende des Eingabe
	{
		if (inbox[i2] != 'e' && inbox[i2] != 'E')				//Prüft, ob KEIN e oder E vorhanden ist
		{
			outbox3[z2] = inbox[i2];							//Wenn Prüfung = True (Kein e/E), dann Inbox in Outbox (zweite Zählvariable)
			z2++;												//Wichtig: Nur dann zweite Zählvariable erhöhen
		}
	}
	outbox3[z2] = '\0';											//Nullterminierung nicht vergessen

	cout << outbox3 << endl;									//Ausgabe des Wortes ohne jegliche e/E




	system("pause");

}
