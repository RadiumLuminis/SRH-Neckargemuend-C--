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
	int z1, z2, n1, n2;																						//Anlegen der Variablen f�r die Z�hler und Nenner
	char p;																									//Anlegen einer Variable als Platzhalter

	cout << "Ersten Bruch eingeben: (zaehler/nenner)" << endl; cin >> z1 >> p >> n1;						//Variablen werden eingegeben
	cout << "Zweiten Bruch eingeben: (zaehler/nenner)" << endl; cin >> z2 >> p >> n2;

	cout << "Addieren, Subtrahieren, Multiplizieren oder Dupliziern? (a, s, m, d)" << endl; cin >> p;		//Eingabe, welche Rechenoperation durchgef�hrt werden soll

	if (p == 'a')																							//Abfrage, pr�ft ob Addiert werden soll
	{
		double ausgabe = addieren(z1, z2, n1, n2);																//Ruft die Unterfunktion addieren() mit Z�hlern und Nennern als Parameter auf
		cout << "Die Summe der Brueche lautet: " << endl << ausgabe << endl;									//Gibt das Ergebnis aus

		//Optionale Ausgabe als Bruch
		cout << "Als Bruch geschrieben: " << endl << z1 * n2 + z2 * n1 << "/" << n1 * n2 << endl;
	}
	else {
		if (p == 's')																						//Abfrage, pr�ft ob Subtrahiert werden soll
		{
			double ausgabe = subtrahieren(z1, z2, n1, n2);														//Ruft die Unterfunktion subtrahieren() mit Z�hlern und Nennern als Parameter  auf
			cout << "Die Differenz der Brueche lautet: " << endl << ausgabe << endl;							//Ausgabe

			//Optionale Ausgabe als Bruch
			cout << "Als Bruch geschrieben: " << endl << z1 * n2 - z2 * n1 << "/" << n1 * n2 << endl;
		}
		else {
			if (p == 'm')																					//Abfrage, pr�ft ob Multipliziert werden soll
			{
				double ausgabe = multiplizieren(z1, z2, n1, n2);												//Ruft die Unterfunktion multiplizieren() mit Z�hlern und Nennern als Parameter  auf
				cout << "Das Produkt der Brueche lautet: " << endl << ausgabe << endl;

				//Optionale Ausgabe als Bruch
				cout << "Als Bruch geschrieben: " << endl << z1 * z2 << "/" << n1 * n2 << endl;
			}
			else {
				if (p == 'd')																				//Abfrage, pr�ft ob Dividiert werden soll
				{
					double ausgabe = dividieren(z1, z2, n1, n2);												//Ruft die Unterfunktion dividieren() mit Z�hlern und Nennern als Parameter  auf
					cout << "Der Quotient der Brueche lautet: " << endl << ausgabe << endl;

					//Optionale Ausgabe als Bruch
					cout << "Als Bruch geschrieben: " << endl << z1 * n2  << "/" << n1 * z2 << endl;
				}
			}
		}
	}

	system("pause");
}

double addieren(int z1, int z2, int n1, int n2)															//Unterfunktion addieren() mit Z�hlern und Nennern als �bergabeparameter ---------------------
{
	if (n1 != n2)																							//Pr�ft, ob die Nenner gleich sind
	{
		z1 *= n2;																								//Wenn ungleich, wird Z�hler mit Nenner multiplziert, um auf gleichen Nenner zu kommen
		z2 *= n1;
		n1 *= n2;
	}

	int sum = z1 + z2;																						//Legt Variable mit Summer der Z�hler an (Sprich Addiert die Br�che)
	double ausgabe = (double) sum / (double) n1;															//Dividiert Z�hler durch Nenner															

	return ausgabe;																							//Gibt das Ergebnis als Wert zur�ck
}

double subtrahieren(int z1, int z2, int n1, int n2)														//Unterfunktion subtrahieren() mit Z�hlern und Nennern als �bergabeparameter -----------------
{
	if (n1 != n2)																							//Pr�ft, ob die Nenner gleich sind
	{
		z1 *= n2;																								//Wenn ungleich, wird Z�hler mit Nenner multiplziert, um auf gleichen Nenner zu kommen
		z2 *= n1;
		n1 *= n2;
	}

	int dif = z1 - z2;																						//Legt Variable mit Differenz der beiden Z�hler an (Subtrahiert die Br�che)
	double ausgabe = (double) dif / (double) n1;															//Dividiert Z�hler durch Nenner			

	return ausgabe;																							//Gibt das Ergebnis als Wert zur�ck
}

double multiplizieren(int z1, int z2, int n1, int n2)													//Unterfunktion multiplizieren() mit Z�hlern und Nennern als �bergabeparameter ---------------
{
	int z = z1 * z2;																						//Legt Variable f�r Z�hler mit Produkt der beiden Z�hler an
	int n = n1 * n2;																						//Legt Variable f�r Nenner aus Produkt der beiden Nenner an
																												//(Kommentar am Rande: So funktioniert Multiplizieren bei Br�chen)

	double ausgabe = (double) z / (double) n;																//Dividiert Z�hler durch Nenner

	return ausgabe;																							//Gibt das Ergebnis als Wert zur�ck
}

double dividieren(int z1, int z2, int n1, int n2)														//Unterfunktion dividieren() mit Z�hlern und Nennern als �bergabeparameter -------------------
{
	int z = z1 * n2;																						//Legt Variable f�r Z�hler an. Ist gleich Erster Z�hler mal zweiter Nenner
	int n = n1 * z2;																						//Legt Variable f�r Nenner an, entspricht dem ersten Nenner mal den zweiter Z�hler
																													//(Kommentar am Rande: So funktioniert Dividierern bei Br�chen)


	double ausgabe = (double) z / (double) n;																	//Dividiert Z�hler durch Nenner

	return ausgabe;																							//Gibt das Ergebnis als Wert zur�ck
}

