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

	//Inbox in Outbox Schleife, aber durch Vokalfilter jagen

	char vokalfilter[] = { 'a','e','i','o','u','A','E','I','O','U', '\0' };
	char outbox4[41];											//Vokalfilter angelegt, neues Array zum Reinschreiben

	int z3 = 0;													//Zweite Zählvariable
	bool toggle = false;										//Flagg, um auf Vokal zu verweisen

	for (int i3 = 0; inbox[i3] != '\0'; i3++)					//Die äußere Schleife, die wiederhol ich net nochmal (s.o.)
	{
		for (int a = 0; vokalfilter[a] != '\0'; a++)			//Die innere Schleife, Sie durchläuft den vorher bestimmten Vokalfilter
			//Wir könnten hier anstatt vokalfilter[a] != '0' auch die Länge des Vokalfilters angeben:
			// a <= sizeof(vokalfilter)
		{
			if (inbox[i3] == vokalfilter[a])					//Prüft, ob ein Vokal vorliegt
			{
				toggle = true;									//Wenn true, dann wird die Flagg auf true gesetzt
			}
		}														//Hier endet die inner Schleife

		if (toggle == false)									//Jetzt prüfen wir, ob die Flagg gesetzt wurde, sprich ob ein Vokal vorliegt
		{
			outbox4[z3] = inbox[i3];							//Wenn true, dann schreiben wir (wie gewohnt) den Wert der Inbox in die Outbox
			z3++;												//Zählvariable für die Outbox läuft nur mit, wenn diese auch benutzt wurde
		}
		else
		{
																//Wenn false, sprich wenn ein Vokal vorliegt, setzten wir die Flagg wieder zurück (=der Buchstabe wird nicht geschrieben)
		}
		{
			toggle = false;
		}

	}
	outbox4[z3] = '\0';											//Nullterminierung nicht vergessen

	cout << outbox4 << endl;									//Ausgabe des Wortes ohne Vokale



	system("pause");

}
