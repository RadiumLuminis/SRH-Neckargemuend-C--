//Aufgabe zum Thema Bruchrechnen vom 05.02.2021
//Sven Krusch

#include <iostream>
using namespace std;

//Prototyping der (Unter-) Funktionen
double addieren(int, int, int, int);
double subtrahieren(int, int, int, int);
double multiplizieren(int, int, int, int);
double dividieren(int, int, int, int);
void Kuerzen(int [], int, int, int);

void main()																								//Hier wird das Hauptprogramm aufgerufen
{
	//Erstellen einer Primzahlenliste bis 100 -------------------------------------------------------------------------------------------------------------------

	int prime[100];										//Arrays aus Primzahlen
	prime[0] = 2;										//Erste Primzahl
	int Laenge = 1;										//L�nge des Arrays

	int x, i;
	for (x = 2; x <= 100; x++)
	{
		for (i = 2; i <= x; i++)
		{
			if (x % i == 0 && x != i)
			{
				break;
			}

			if (i == x)
			{
				prime[Laenge] = x;
				Laenge++;
			}
		}
	}

	//-----------------------------------------------------------------------------------------------------------------------------------------------------------

	int z1, z2, n1, n2;																						//Anlegen der Variablen f�r die Z�hler und Nenner
	char p;																									//Anlegen einer Variable als Platzhalter

	cout << "Ersten Bruch eingeben: (zaehler/nenner)" << endl; cin >> z1 >> p >> n1;						//Variablen werden eingegeben
	cout << "Zweiten Bruch eingeben: (zaehler/nenner)" << endl; cin >> z2 >> p >> n2;

	cout << "Addieren, Subtrahieren, Multiplizieren oder Dupliziern? (a, s, m, d)" << endl; cin >> p;		//Eingabe, welche Rechenoperation durchgef�hrt werden soll

	if (p == 'a')																							//Abfrage, pr�ft ob Addiert werden soll
	{
		double ausgabe = addieren(z1, z2, n1, n2);																//Ruft die Unterfunktion addieren() mit Z�hlern und Nennern als Parameter auf
		cout << "Die Summe der Brueche lautet: " << endl << ausgabe << endl;									//Gibt das Ergebnis aus

		//K�rzen
		Kuerzen(prime, Laenge, z1 * n2 + z2 * n1, n1 * n2);
		//cout << "Als Bruch geschrieben: " << endl << z1 * n2 + z2 * n1 << "/" << n1 * n2 << endl;
	}
	else {
		if (p == 's')																						//Abfrage, pr�ft ob Subtrahiert werden soll
		{
			double ausgabe = subtrahieren(z1, z2, n1, n2);														//Ruft die Unterfunktion subtrahieren() mit Z�hlern und Nennern als Parameter  auf
			cout << "Die Differenz der Brueche lautet: " << endl << ausgabe << endl;							//Ausgabe

			//K�rzen
			Kuerzen(prime, Laenge, z1 * n2 - z2 * n1, n1 * n2);
			//cout << "Als Bruch geschrieben: " << endl << z1 * n2 - z2 * n1 << "/" << n1 * n2 << endl;
		}
		else {
			if (p == 'm')																					//Abfrage, pr�ft ob Multipliziert werden soll
			{
				double ausgabe = multiplizieren(z1, z2, n1, n2);												//Ruft die Unterfunktion multiplizieren() mit Z�hlern und Nennern als Parameter  auf
				cout << "Das Produkt der Brueche lautet: " << endl << ausgabe << endl;

				//K�rzen
				Kuerzen(prime, Laenge, z1 * z2, n1 * n2);
				//cout << "Als Bruch geschrieben: " << endl << z1 * z2 << "/" << n1 * n2 << endl;
			}
			else {
				if (p == 'd')																				//Abfrage, pr�ft ob Dividiert werden soll
				{
					double ausgabe = dividieren(z1, z2, n1, n2);												//Ruft die Unterfunktion dividieren() mit Z�hlern und Nennern als Parameter  auf
					cout << "Der Quotient der Brueche lautet: " << endl << ausgabe << endl;

					//K�rzen
					Kuerzen(prime, Laenge, z1 * n2, n1 * z2);
					//cout << "Als Bruch geschrieben: " << endl << z1 * n2 << "/" << n1 * z2 << endl;
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

//Zusatzaufgabe 12.02 - Kuerzen und Unechte Br�che ---------------------------------------------------------------------------------------------------------------------------------------------------

void Kuerzen(int prime[], int Laenge, int z, int n)														//Unterfunktion Kuerzen mit Primzahlenliste, L�nge dieser sowie Z�hler und Nenner als Parameter
{
	for (int i = 0; i < Laenge; i++)																	//Schleife, die �ber die Primzahlenliste dr�ber l�uft														
	{
		if (z % prime[i] == 0 && n % prime[i] == 0)														//Pr�ft, ob Z�hler und Nenner durch die Primzahl teilbar sind
		{
			z /= prime[i];																				//Wenn dem so ist, werden beide dadurch geteilt
			n /= prime[i];																				
			i--;																						//Eine Zahl kann mehrmals durch Primzahlen geteilt werden, daher wird der Z�hlwert bei
		}																								//erfolgreichem Teilvorgang um eins zur�ckgesetzt (selbe Primzahl nochmal probiert)
		else
		{
			if (z < prime[i] || n < prime[i])															//Kurzer Abschnitt zur Codeeffizient, optional
			{
				break;
			}
		}
	}

	if ((double)z / (double)n > 1)
	{
		UnechterBruch(z, n);
	}
	else
	{
		cout << "Als gekuerzter Bruch:\n" << z << "/" << n << endl;
	}

}

void UnechterBruch(int z, int n)
{


}

