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

#include "FabriqueCaseAbs.h"
#include<vector>

namespace Model
{
	/// <remarks>monteur</remarks>
	class DLL MonteurJeu
	{
		private :

			FabriqueCaseAbs* fabriqueCaseAbs;

			virtual void creerPlateau() = 0;
			void creerJoueur() {}
			void creerVaisseau() {}

		public :
			void creerJeu() {}
	}; 

	//EXTERNC DLL void MONTEURJEU_creerJeu(MonteurJeu*);
} 
