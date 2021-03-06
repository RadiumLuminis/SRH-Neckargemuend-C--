//15.01.2021 - Wiederholung zum Thema Arrays

#include <iostream>
using namespace std;

void main()
{
	//--------Anlegen der Variablen und Eingabe---------------------------------------------------------------------------------------------------------


	std::locale::global(std::locale("German_germany"));			//Umlaute Verwenden k�nnen, kein Zwang

	char inbox[20], outbox[41];									//Inbox und Outbox anlegen, Outbox ist doppelt so gro�

	cout << "Wort: "; cin >> inbox;								//Wort soll eingegeben werden





	//-------------Aufgabe 1: in die Outbox schleifen----------------------------------------------------------------------------------------------------


	/*
	int i;
	for (i = 0; inbox[i] != '\0'; i++)
	{
		outbox[i] = inbox[i];
	}
	outbox[i] = '\0';
	*/




	//-------------Aufgabe 2: Mit Sternchen in Outbox schleifen-------------------------------------------------------------------------------------------
	

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




	//-------------Aufgabe 3: Inbox umgekehrt in Outbox schleifen-------------------------------------------------------------------------------------------


	char outbox2[41];											//Noch ein Array

	int laenge = i-1, z;										//Zwei Z�hlvariablen anlegen
	for (z = 0; inbox[z] != '\0'; z++)							//Einfache Schleife, l�uft bis zur L�nge des Wortes (siehe vorher), man k�nnte auch z < i nehmen
	{
		outbox2[z] = inbox[laenge];								//Der gez�hlte Buchstabe des neuen Arrays wird zum umgekehrt gez�hlten Buchstaben der Inbox
		laenge--;												//Zweite Variable l�uft r�ckw�rts: z l�uft hoch, laenge l�uft runter
	}
	outbox2[z] = '\0';											//Nullterminierung nicht vergessen

	cout << outbox2 << endl;									//Ausgabe des umgekehrten Wortes

	//Inbox ohne e/E in die Outbox schleifen

	char outbox3[41];											//Und wieder, und wieder, und wieder...

	int z2 = 0;													//Zweite Z�hlvariable und so

	for (int i2 = 0; inbox[i2] != '\0'; i2++)					//Die Schleife kennen wir schon, l�uft bis zum Ende des Eingabe
	{
		if (inbox[i2] != 'e' && inbox[i2] != 'E')				//Pr�ft, ob KEIN e oder E vorhanden ist
		{
			outbox3[z2] = inbox[i2];							//Wenn Pr�fung = True (Kein e/E), dann Inbox in Outbox (zweite Z�hlvariable)
			z2++;												//Wichtig: Nur dann zweite Z�hlvariable erh�hen
		}
	}
	outbox3[z2] = '\0';											//Nullterminierung nicht vergessen

	cout << outbox3 << endl;									//Ausgabe des Wortes ohne jegliche e/E




	//-------------Aufgabe 4: Ohne Vokale ausgeben, mit Vokalfilter-------------------------------------------------------------------------------------------


	char vokalfilter[] = { 'a','e','i','o','u','A','E','I','O','U', '\0' };

	char outbox4[41];											//^Vokalfilter angelegt^, neues Array zum Reinschreiben

	int z3 = 0;													//Zweite Z�hlvariable
	bool toggle = false;										//Flagg, um auf Vokal zu verweisen

	for (int i3 = 0; inbox[i3] != '\0'; i3++)					//Die �u�ere Schleife, die wiederhol ich net nochmal (s.o.)
	{
		for (int a = 0; vokalfilter[a] != '\0'; a++)			//Die innere Schleife, Sie durchl�uft den vorher bestimmten Vokalfilter
			//Wir k�nnten hier anstatt vokalfilter[a] != '0' auch die L�nge des Vokalfilters angeben:
			// a <= sizeof(vokalfilter)
		{
			if (inbox[i3] == vokalfilter[a])					//Pr�ft, ob ein Vokal vorliegt
			{
				toggle = true;									//Wenn true, dann wird die Flagg auf true gesetzt
			}
		}														//Hier endet die inner Schleife

		if (toggle == false)									//Jetzt pr�fen wir, ob die Flagg gesetzt wurde, sprich ob ein Vokal vorliegt
		{
			outbox4[z3] = inbox[i3];							//Wenn true, dann schreiben wir (wie gewohnt) den Wert der Inbox in die Outbox
			z3++;												//Z�hlvariable f�r die Outbox l�uft nur mit, wenn diese auch benutzt wurde
		}
		else
		{
			toggle = false;										//Wenn false, sprich wenn ein Vokal vorliegt, setzten wir die Flagg wieder zur�ck (=der Buchstabe wird nicht geschrieben)

			//Kleine (nicht notwendige!) �nderung zur Verdeutlichung
			outbox4[z3] = ' ';
			z3++;
			//EInfach Zeilen Auskommentieren, wenn "normales" Ergebnis erwartet wird
		}

	}
	outbox4[z3] = '\0';											//Nullterminierung nicht vergessen

	cout << outbox4 << endl;									//Ausgabe des Wortes ohne Vokale




	//-------------Aufgabe 5: Nur Vokale ausgeben, mit Konsonantenfilter-------------------------------------------------------------------------------------------

	char konstantenfilter[] = {'b', 'B', 'c', 'C', 'd', 'D', 'f', 'F', 'g', 'G', 'h', 'H', 'j', 'J', 'k', 'K', 'l', 'L', 'm', 'M', 'n', 'N', 'p', 'P', 'q', 'Q', 'r', 'R', 's', 'S', 't', 'T', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z', 'Z', '\0'};

	char outbox5[41];											//^Konstantenfilter angelegt^, neues Array zum Reinschreiben

	int z4 = 0;													//Zweite Z�hlvariable
	bool toggle2 = false;										//Flagg, um auf Vokal zu verweisen

	for (int i4 = 0; inbox[i4] != '\0'; i4++)					//Die �u�ere Schleife, die wiederhol ich net nochmal (s.o.)
	{
		for (int a2 = 0; konstantenfilter[a2] != '\0'; a2++)	//Die innere Schleife, Sie durchl�uft den vorher bestimmten Konsonantenfilter
			//Wir k�nnten hier anstatt konstantenfilter[a2] != '\0' auch die L�nge des Konsonantenfilters angeben:
			// a2 <= sizeof(konstantenfilter)
		{
			if (inbox[i4] == konstantenfilter[a2])				//Pr�ft, ob ein Vokal vorliegt
			{
				toggle2 = true;									//Wenn true, dann wird die Flagg auf true gesetzt
				break;											//Optimierung, geht direkt aus der inneren Schleife raus, wenn Konsonant gefunden wurde
			}
		}														//Hier endet die inner Schleife

		if (toggle2 == false)									//Jetzt pr�fen wir, ob die Flagg gesetzt wurde, sprich ob ein Vokal vorliegt
		{
			outbox5[z4] = inbox[i4];							//Wenn true, dann schreiben wir (wie gewohnt) den Wert der Inbox in die Outbox
			z4++;												//Z�hlvariable f�r die Outbox l�uft nur mit, wenn diese auch benutzt wurde
		}
		else
		{
			toggle2 = false;									//Wenn false, sprich wenn ein Vokal vorliegt, setzten wir die Flagg wieder zur�ck (=der Buchstabe wird nicht geschrieben)

			//Kleine (nicht notwendige!) �nderung zur Verdeutlichung
			outbox5[z4] = ' ';
			z4++;												
			//EInfach Zeilen Auskommentieren, wenn "normales" Ergebnis erwartet wird
		}

	}
	outbox5[z4] = '\0';											//Nullterminierung nicht vergessen

	cout << outbox5 << endl;									//Ausgabe des Wortes ohne Vokale


	system("pause");

}
