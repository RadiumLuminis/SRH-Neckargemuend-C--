//Neues Thema Typecasting begonnen am 29.01.2021

#include <iostream>
using namespace std;

void main()
{


	//--------Anlegen der Variablen und Eingabe---------------------------------------------------------------------------------------------------------


	std::locale::global(std::locale("German_germany"));			//Umlaute Verwenden können, kein Zwang

	char inbox[20], outbox[41];									//Inbox und Outbox anlegen, Outbox ist doppelt so groß

	cout << "Wort: "; cin >> inbox;								//Wort soll eingegeben werden



	//--------Aufgabe 1: Alle Großbuchstaben in Kleinbuchstaben umwandeln-------------------------------------------------------------------------------

	int i = 0;													//Globale Varibale Anlegen, damit die Zählvariable i nicht nur in der Schleife nutzbar ist
	int zwischenspeicher = 0;									//Ein Zwischenspeicher für den Konvertierten Text anlegen 

	for (i = 0; inbox[i] != '\0'; i++)							//Schleife, die über die Länge des Wortes läuft
	{
		zwischenspeicher = (int)inbox[i];						//Nun konvertiere ich den entsprechenden Buchstaben an Position der Zählvariable[i] in den entsprechenden ASCII-Wert

		if (zwischenspeicher >= 65 && zwischenspeicher <= 90)	//Ich Prüfe, ob der ASCII-Wert zwischen 65 und 90 liegt (entspricht den Großbuchstaben A-Z)
		{
			zwischenspeicher = zwischenspeicher + 32;				//Wenn dies der Fall ist, rechne ich 32 auf den ASCII-Wert drauf (entspricht den Großbuchstaben in Kleinbuchstaben umwandeln)
			outbox[i] = (char)zwischenspeicher;						//Dann konvertiere ich den ASCII-Wert wieder in

			//outbox[i] = (int)inbox[i] + 32;					//Gleiche Anweisung, nur ohne Zwischenspeicher - Wert konvertieren, + 32 Rechnen, wieder in Charakter konvertieren (da outbox ein char-Array ist)
			
		}
		else													//Wenn dies nicht der Fall ist (Sprich kein Großbuchstabe vorhanden)
		{
			outbox[i] = inbox[i];									//Dann schreibe ich den Buchstaben der Eingabe ohne Sonstiges in die Ausgabe
		}
		

	}
	outbox[i] = '\0';											//Nullterminierung am Ende des Wortes

	cout << outbox << endl;										//Ausgabe des Wortes, wobei Groß- in Kleinbuchstaben konvertiert wurden

	system("pause");

}
