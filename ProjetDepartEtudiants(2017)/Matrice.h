//  Classe permettant de généraliser la création 
//  d'une matrice sans égard au type
//
//  par Pierre Prud'homme, septembre 2017
//--------------------------------------------------
#pragma once
#include <vector>
#include <exception>
using namespace std;

template <class T>
class Matrice
{
public:
	//--- Constructeurs
	Matrice( ) { }
	Matrice( int iNbLignes, int iNbColonnes ) : vecteur_( iNbLignes )
	{
		for( int i = 0; i < iNbLignes; i++ )
			vecteur_[ i ].resize( iNbColonnes );
	}
	Matrice( const Matrice & oDroite ) : vecteur_( oDroite.vecteur_ ) { }

	//--- Accesseurs et Mutateurs
	int GetNbLignes( ) const
	{ return static_cast<int>(vecteur_.size( )); }

	int GetNbColonnes( ) const
	{ return GetNbLignes( ) > 0 ? static_cast<int>(vecteur_[ 0 ].size( )) : 0; }

	void SetNbLignes( int iNbLignes )
	{ vecteur_.resize(iNbLignes); }

	void SetNbColonnes ( int iNbColonnes )
	{  for( int i = 0; i < static_cast<int>(vecteur_.size()); i++ )
    	vecteur_[ i ].resize( iNbColonnes );
	}

	//--- Surcharge de l'opérateur [ ] 
	//    pour lecture et écriture dans la matrice 
	const vector<T> & operator[]( int ligne ) const
	{ return vecteur_[ ligne ]; }
	vector<T> & operator[]( int ligne )
	{ return vecteur_[ ligne ]; }

	const vector<T> & at (int ligne) const
	{	return vecteur_.at( ligne );	}
	vector<T> & at (int ligne) 
	{	return vecteur_.at( ligne );	}

private:
	vector< vector<T> > vecteur_;
};
