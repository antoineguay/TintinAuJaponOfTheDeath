// dllmain.cpp : Définit le point d'entrée pour l'application DLL.
#include "stdafx.h"
#include "Artefact.h"         
#include "FabriqueCase.h"     
#include "Battlecruiser.h"    
#include "FabriqueCaseAbs.h"  
#include "CanonLaser.h"       
#include "Jeu.h"              
#include "CapsuleDeSurvie.h"  
#include "Joueur.h"           
#include "Case.h"             
#include "Laser.h"            
#include "CaseArtefact.h"     
#include "Modele.h"           
#include "Transporteur.h"
#include "CaseAsteroide.h"    
#include "MonteurJeu.h"       
#include "Vaisseau.h"
#include "CaseBase.h"         
#include "MonteurJeu2J.h"     
#include "VaisseauMere.h"
#include "CaseEnergie.h"      
#include "MonteurJeu3J.h"    
#include "CaseVide.h"         
#include "MonteurJeu4J.h"    
#include "Des.h"              
#include "Plateau.h"          
#include "Direction.h"         
#include "targetver.h"



BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

