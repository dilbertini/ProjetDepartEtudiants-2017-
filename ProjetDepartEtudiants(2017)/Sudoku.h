// Sudoku.h: interface de la classe Sudoku.
//
//	Auteur : Pierre Prud'homme
//	Date :  Novembre 2017
//
//////////////////////////////////////////////////////////////////////
#pragma once
#pragma warning (disable : 4290)
#include "matrice.h"
// #include <exception>
#include <fstream>
#include <iostream>
#include "Chrono.h"
#include "Matrice.h"
using namespace std;

class Sudoku 
{
	static const int ORDRE;
	static const int VALEUR_SENTINELLE;

	Matrice <int> M_;
	Chrono oPreciseTimer;
	ostream & rOut_;
public:
	Sudoku (ifstream & in, ostream & out);
	void Solutionner();
	void Ecrire (ostream & out = cout);

private:
	void PlacerChiffre (int i, int j);
	bool Normaliser    (int & x, int & y);
	void Afficher      (int TempsAttente);
	bool VerifierReussite();
};
