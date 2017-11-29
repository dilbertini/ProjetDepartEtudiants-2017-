//  Implantation des fonctions utilisées. 
//
//	Auteur : Pierre Prud'homme
//	Date :  Novembre 2017
//
//////////////////////////////////////////////////////////////////////
#include "Fonctions.h"
#include <iostream>
using namespace std;

string DemanderNom(string sPrompt)
{
	string sNomLu;

	cout << sPrompt;
	cin.ignore(cin.rdbuf()->in_avail());
	getline(cin, sNomLu);
	return sNomLu;
}
