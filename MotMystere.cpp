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
	string motShufflis� = "";
	string id�eMot = "";
	int erreurs = 0;
	motATrouver = trouveMot();
	motShufflis� = motATrouver;
	random_shuffle(motShufflis�.begin(), motShufflis�.end());
		cout << "Mot shufflis�: " + motShufflis� << endl;
	do {
		cout << "Entrez une proposition: " << endl;
		cin >> id�eMot;
		check(motATrouver, id�eMot, erreurs);

	} while (id�eMot != motATrouver);

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
	cout << "Mot � trouver: " + motATrouver << endl;
	return motATrouver;
}