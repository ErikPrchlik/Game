#ifndef MESTO_H
#define MESTO_H
#include <iostream>
#include <vector>
#include "Budova.h"
#include "Firma.h"
#include "KombinovanaBudova.h"
#include "ObytnaBudova.h"
#include "VyrobnaBudova.h"
/**
 * @brief The Mesto class
 * počítať mestá
 */
class Mesto {

private:
    std::string m_nazovMes;
    int m_pocetObyvVMes;
    int m_pocetVyrVMes;
    int m_pocetBudovVMes;
    float m_cenaMes;
    static int s_pocMiest;
    std::vector<KombinovanaBudova*> m_kombinovaneBudovy;
    std::vector<ObytnaBudova*> m_obytneBudovy;
    std::vector<VyrobnaBudova*> m_vyrobneBudovy;

public:
        Mesto(std::string nazovMes);
        static int getPocMiest();

        void pocitanieObyvVMeste();
        /// includnut dedičnú triedu budovy do tejto triedy
        /// spočítať obyvateľov všetkých budov
        /// zadať hodnotu do atributu pocet obyateľov v meste

        void printInfo(Budova*budova);
        //std::vector getKombinovaneBudovy();
        void postavBudovuKB(std::string nazov, Firma*firma);
        void postavBudovuOB(std::string nazov, Firma*firma);
        void postavBudovuVB(std::string nazov, Firma*firma);
};
#endif
