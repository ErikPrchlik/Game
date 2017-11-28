#ifndef KOMBINOVANABUDOVA_H
#define KOMBINOVANABUDOVA_H
#include <iostream>
#include "Budova.h"
#include "Firma.h"

class KombinovanaBudova: public Budova{
	public:
        KombinovanaBudova(std::string nazov, Firma*firma);
        KombinovanaBudova();
        std::string getNazov();
        int getMaxPocVyr();
        int getPociatStavVyr();
        int getMaxPocObyv();
        int getPociatStavObyv();
        int getCenaBud();
        int getAktualnyPocObyv();
        int getAktualnyPocVyr();
        void printInfo();
};

#endif
