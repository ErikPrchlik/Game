#ifndef VYROBNABUDOVA_H
#define VYROBNABUDOVA_H
#include <iostream>
#include "Budova.h"

class VyrobnaBudova: public Budova {
	public:
        VyrobnaBudova(std::string nazov, Firma*firma);
        VyrobnaBudova();
        std::string getNazov();
        int getMaxPocVyr();
        int getPociatStavVyr();
        int getCenaBud();
        int getAktualnyPocVyr();
        void printInfo();
	};

#endif
