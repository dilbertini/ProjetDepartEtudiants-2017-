// Programme Sudoku
//
// Programme qui consiste � lire un fichier contenant une
// grille de Sudoku � compl�ter et le programme affichera
// la solution compl�t�e.
//
// par Pierre Prud'homme, novembre 2017
//------------------------------------------------------------
#include "Sudoku.h"
#include "Fonctions.h"
#include <iostream>
using namespace std;

// point d'entr�e du programme
int main()
{
	system("Color F0");
	char cReponse = 'O';
	string sFichierGrille = DemanderNom("Entrez le nom du fichier contenant la grille :");

	while ( sFichierGrille != "" )
	{
		ifstream in (sFichierGrille.c_str());
		string sOut = "Solution-" + sFichierGrille;
		ofstream out (sOut.c_str());   // � utiliser si on envoie le r�sultat dans un fichier

		if (!in.fail())
		{
			Sudoku Jeu(in,cout);
			Jeu.Solutionner();
		}
		else
		{
			cout << "Probleme a la lecture de la grille..." << endl;
		}
		out.close();
		sFichierGrille = DemanderNom("Entrez le nom du fichier contenant la grille :");
	}
}
