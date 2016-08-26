// MotMystere.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;
void check(string solution, string proposition, int & erreurs);
string trouveMot();

int main()
{
	string motATrouver = "";
	string motShufflisé = "";
	string idéeMot = "";
	int erreurs = 0;
	motATrouver = trouveMot();
	motShufflisé = motATrouver;
	random_shuffle(motShufflisé.begin(), motShufflisé.end());
		cout << "Mot shufflisé: " + motShufflisé << endl;
	do {
		cout << "Entrez une proposition: " << endl;
		cin >> idéeMot;
		check(motATrouver, idéeMot, erreurs);

	} while (idéeMot != motATrouver);

	system("pause");
	return 0;

}

void check(string solution, string proposition, int & NombreErreurs) {
	if (solution == proposition)
	{
		cout << "Juste" << endl;
	}
	else
	{
		cout << "Faux" << endl;
		NombreErreurs++;
		cout << NombreErreurs << endl;
		cout << solution.substr(0, NombreErreurs) << endl;
	}
}

string trouveMot() {




















































	return "dinosaure";



	string motATrouver;
	cout << "Quel sera le mot a trouver" << endl;
	cin >> motATrouver;
	cout << "Mot à trouver: " + motATrouver << endl;
	return motATrouver;
}