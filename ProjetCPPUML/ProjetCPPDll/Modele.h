﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#pragma once
#define WANTDLLEXP
#ifdef WANTDLLEXP		//exportation dll
#define DLL  __declspec( dllexport )
#define EXTERNC extern "C"
#else
#define DLL		//standard
#define EXTERNC
#endif
#include "MonteurJeu.h"
#include "Jeu.h"
#include<vector>

namespace Model
{
	class DLL Modele
	{

		protected :

			MonteurJeu* monteurJeu;
			Jeu jeu;

		public :
			Modele() {}
			~Modele() {}
			virtual void creerPartie(int nbJoueurs) { 
				int lala = 5; 
			}

	}; 

	EXTERNC DLL Modele* MODELE_New() { return new Modele(); }
	EXTERNC DLL void MODELE_Delete(Modele* obj) { delete obj; }
	EXTERNC DLL void MODELE_creerPartie(Modele* m, int nbJoueurs) { m->creerPartie(nbJoueurs); }
} 
