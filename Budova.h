#ifndef BUDOVA_H
#define BUDOVA_H
#include <iostream>
#include <vector>
#include "Kolo.h"
#include "Firma.h"

class Budova {
protected:
        std::string m_nazov;
        int m_maxPocObyv;
        int m_pociatStavObyv;
        int m_aktualnyPocObyv;
        int m_maxPocVyr;
        int m_pociatStavVyr;
        int m_aktualnyPocVyr;
        static int m_cenaBud;

private:
        int m_urovenBud; // zvyšovať úrovaň v dedičných triedach!!!
        int m_celkovyPocObyv;
        int m_celkovyPocOVyr;
        static int s_pocBud;

protected:
    void vypocetAktualnehoPocObyv();
    void vypocetAktualnehoPocVyr();
    int getPocetObyv(Budova*budova); //nahradí sa vektorom
    void vypisInfo();

public:
    Budova(std::string nazov);
    Budova();
    ~Budova();
    static int getPocBud();
};
#endif
