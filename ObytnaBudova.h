#ifndef OBYTNABUDOVA_H
#define OBYTNABUDOVA_H
#include <iostream>
#include "Budova.h"

class ObytnaBudova: public Budova {
	public:
        ObytnaBudova(std::string nazov, Firma*firma);
        ObytnaBudova();
        std::string getNazov();
        int getMaxPocObyv();
        int getPociatStavObyv();
        static int getCenaBud();
        int getAktualnyPocObyv();
        void printInfo();
	};

#endif
