//Aufgabe zum Thema Bruchrechnen vom 05.02.2021
//Sven Krusch

#include <iostream>
using namespace std;

//Prototyping der (Unter-) Funktionen
double addieren(int, int, int, int);
double subtrahieren(int, int, int, int);
double multiplizieren(int, int, int, int);
double dividieren(int, int, int, int);
double Kuerzen(int, int);

void main()																								//Hier wird das Hauptprogramm aufgerufen
{
	int z1, z2, n1, n2;																						//Anlegen der Variablen für die Zähler und Nenner
	char p;																									//Anlegen einer Variable als Platzhalter

	cout << "Ersten Bruch eingeben: (zaehler/nenner)" << endl; cin >> z1 >> p >> n1;						//Variablen werden eingegeben
	cout << "Zweiten Bruch eingeben: (zaehler/nenner)" << endl; cin >> z2 >> p >> n2;

	cout << "Addieren, Subtrahieren, Multiplizieren oder Dupliziern? (a, s, m, d)" << endl; cin >> p;		//Eingabe, welche Rechenoperation durchgeführt werden soll

	if (p == 'a')																							//Abfrage, prüft ob Addiert werden soll
	{
		double ausgabe = addieren(z1, z2, n1, n2);																//Ruft die Unterfunktion addieren() mit Zählern und Nennern als Parameter auf
		cout << "Die Summe der Brueche lautet: " << endl << ausgabe << endl;									//Gibt das Ergebnis aus

		//Optionale Ausgabe als Bruch
		cout << "Als Bruch geschrieben: " << endl << z1 * n2 + z2 * n1 << "/" << n1 * n2 << endl;
	}
	else {
		if (p == 's')																						//Abfrage, prüft ob Subtrahiert werden soll
		{
			double ausgabe = subtrahieren(z1, z2, n1, n2);														//Ruft die Unterfunktion subtrahieren() mit Zählern und Nennern als Parameter  auf
			cout << "Die Differenz der Brueche lautet: " << endl << ausgabe << endl;							//Ausgabe

			//Optionale Ausgabe als Bruch
			cout << "Als Bruch geschrieben: " << endl << z1 * n2 - z2 * n1 << "/" << n1 * n2 << endl;
		}
		else {
			if (p == 'm')																					//Abfrage, prüft ob Multipliziert werden soll
			{
				double ausgabe = multiplizieren(z1, z2, n1, n2);												//Ruft die Unterfunktion multiplizieren() mit Zählern und Nennern als Parameter  auf
				cout << "Das Produkt der Brueche lautet: " << endl << ausgabe << endl;

				//Optionale Ausgabe als Bruch
				cout << "Als Bruch geschrieben: " << endl << z1 * z2 << "/" << n1 * n2 << endl;
			}
			else {
				if (p == 'd')																				//Abfrage, prüft ob Dividiert werden soll
				{
					double ausgabe = dividieren(z1, z2, n1, n2);												//Ruft die Unterfunktion dividieren() mit Zählern und Nennern als Parameter  auf
					cout << "Der Quotient der Brueche lautet: " << endl << ausgabe << endl;

					//Optionale Ausgabe als Bruch
					cout << "Als Bruch geschrieben: " << endl << z1 * n2  << "/" << n1 * z2 << endl;
				}
			}
		}
	}

	system("pause");
}

double addieren(int z1, int z2, int n1, int n2)															//Unterfunktion addieren() mit Zählern und Nennern als Übergabeparameter ---------------------
{
	if (n1 != n2)																							//Prüft, ob die Nenner gleich sind
	{
		z1 *= n2;																								//Wenn ungleich, wird Zähler mit Nenner multiplziert, um auf gleichen Nenner zu kommen
		z2 *= n1;
		n1 *= n2;
	}

	int sum = z1 + z2;																						//Legt Variable mit Summer der Zähler an (Sprich Addiert die Brüche)
	double ausgabe = (double) sum / (double) n1;															//Dividiert Zähler durch Nenner															

	return ausgabe;																							//Gibt das Ergebnis als Wert zurück
}

double subtrahieren(int z1, int z2, int n1, int n2)														//Unterfunktion subtrahieren() mit Zählern und Nennern als Übergabeparameter -----------------
{
	if (n1 != n2)																							//Prüft, ob die Nenner gleich sind
	{
		z1 *= n2;																								//Wenn ungleich, wird Zähler mit Nenner multiplziert, um auf gleichen Nenner zu kommen
		z2 *= n1;
		n1 *= n2;
	}

	int dif = z1 - z2;																						//Legt Variable mit Differenz der beiden Zähler an (Subtrahiert die Brüche)
	double ausgabe = (double) dif / (double) n1;															//Dividiert Zähler durch Nenner			

	return ausgabe;																							//Gibt das Ergebnis als Wert zurück
}

double multiplizieren(int z1, int z2, int n1, int n2)													//Unterfunktion multiplizieren() mit Zählern und Nennern als Übergabeparameter ---------------
{
	int z = z1 * z2;																						//Legt Variable für Zähler mit Produkt der beiden Zähler an
	int n = n1 * n2;																						//Legt Variable für Nenner aus Produkt der beiden Nenner an
																												//(Kommentar am Rande: So funktioniert Multiplizieren bei Brüchen)

	double ausgabe = (double) z / (double) n;																//Dividiert Zähler durch Nenner

	return ausgabe;																							//Gibt das Ergebnis als Wert zurück
}

double dividieren(int z1, int z2, int n1, int n2)														//Unterfunktion dividieren() mit Zählern und Nennern als Übergabeparameter -------------------
{
	int z = z1 * n2;																						//Legt Variable für Zähler an. Ist gleich Erster Zähler mal zweiter Nenner
	int n = n1 * z2;																						//Legt Variable für Nenner an, entspricht dem ersten Nenner mal den zweiter Zähler
																													//(Kommentar am Rande: So funktioniert Dividierern bei Brüchen)


	double ausgabe = (double) z / (double) n;																	//Dividiert Zähler durch Nenner

	return ausgabe;																							//Gibt das Ergebnis als Wert zurück
}

