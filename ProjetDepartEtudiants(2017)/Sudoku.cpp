// Sudoku.h: implantation de la classe Sudoku.
//
//	Auteur : Pierre Prud'homme
//	Date :  Novembre 2017
//
//////////////////////////////////////////////////////////////////////

#include "Sudoku.h"
#include <string>
using namespace std; 

const int Sudoku::ORDRE = 9;
const int Sudoku::VALEUR_SENTINELLE = 0;


Sudoku::Sudoku(ifstream & in, ostream & out)
: rOut_(out)
{
	M_.SetNbLignes(ORDRE);
	M_.SetNbColonnes(ORDRE);
	for (int i = 0; i < ORDRE; ++i)
	{
		for (int j = 0; j < ORDRE; ++j)
		{
			if ()
			{
				M_[i][j] = ;
			}
			else
			{
				M_[i][j] = 0;
			}
		}
	}
	Afficher(0);
	rOut_ << endl;
	//system("pause");
}

void Sudoku::Solutionner()
{
	oPreciseTimer.Start();
	PlacerChiffre(0,0);
}

void Sudoku::PlacerChiffre(int ligne, int colonne)
{
}

bool Sudoku::Normaliser(int & x, int & y)
{
	if ( x < ORDRE && y < ORDRE) return true;
	if ( y >= ORDRE)
	{
		++x;
		y = 0;
	}
	if ( x < ORDRE) return true;
	return false;
}

void Sudoku::Afficher(int TempsAttente)
{
	// system("cls");
	string ligneIntermédiaire; ligneIntermédiaire = char (204);
	string ligneIntermédiairePart = string(14, char(205));
	ligneIntermédiairePart = ligneIntermédiairePart + char(206);
	for (int j = 0; j < 3; ++j) ligneIntermédiaire += ligneIntermédiairePart;
	ligneIntermédiaire[ligneIntermédiaire.size()-1] = char(185);
	
	rOut_ << ligneIntermédiaire << endl;

	for (int i=0; i<ORDRE; i++)
	{
		rOut_ << char(186) << "  ";
		for (int j=0; j<ORDRE; j++)
		{
			if (M_[i][j] != VALEUR_SENTINELLE && (j + 1) % 3 == 0)
				rOut_ << M_[i][j] << " " << char(186) << "  ";
			else if (M_[i][j] != VALEUR_SENTINELLE)
				rOut_ << M_[i][j] << " " << char(179) << "  ";  //" |  ";
			else
				if ((j + 1) % 3 == 0)
					rOut_ << "  " << char(186) << "  ";
				else
					rOut_ << "  " << char(179) << "  ";
		}
		rOut_ << endl;
		if ((i+1)%3 == 0)
			rOut_ << ligneIntermédiaire << endl;
		else
			rOut_ << char(186) << string(14, char(196)) 
			      << char (186) <<string(14, char(196)) 
			      << char (186) <<string(14, char(196)) << char (186) << endl;

	}

	if (TempsAttente > 0)
		Sleep(TempsAttente);
	else
		system("pause");
}

bool Sudoku::VerifierReussite()
{
	return true;
}