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
#include<vector>

namespace Model
{
	class DLL MonteurJeu3J : public MonteurJeu
	{
	public:
		MonteurJeu3J() {}
		~MonteurJeu3J() {}

		virtual void creerPlateau() {}
	}; 

	EXTERNC DLL MonteurJeu3J*  MONTEURJEU3J_New() { return new MonteurJeu3J(); }
	EXTERNC DLL void MONTEURJEU3J_Delete(MonteurJeu3J* obj) { delete obj; }
} 

