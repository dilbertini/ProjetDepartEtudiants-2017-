// Classe permettant de calculer un temps d'ex�cution en microsecondes
// Merci � Francis Lemaire (A2014) pour avoir trouv� le code brut � la source
// de cette classe.
//
// Usage : 
//   a) Instancier la classe
//   b) Faire appel � Start() pour d�marrer le chrono
//   c) Faire appel � Stop() pour arr�ter le chrono
//   d) Faire appel � Read() pour obtenir le temps calcul� par le chrono
//      en microsecondes. 
//
// Note : on peut refaire Start(), Stop() et Read() pour obtenir une deuxi�me
//        lecture sans avoir � r�instancier la classe
//
// par Pierre Prud'homme, octobre 2014
// r�vision Pierre P, octobre 2015
//--------------------------------------------------------------------------------
#ifndef _CHRONO_H_
#define _CHRONO_H_
#include <Windows.h>

class Chrono
{
   LARGE_INTEGER StartingTime_;
   LARGE_INTEGER EndingTime_;
   LARGE_INTEGER ElapsedMicroseconds_;
   LARGE_INTEGER Frequency_;

public:
   Chrono();
   void Start();
   void Stop();
   LONGLONG Read();
};

#endif