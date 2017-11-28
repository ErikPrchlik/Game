#include "Mesto.h"

Mesto::Mesto(std::string nazovMes){
    m_nazovMes = nazovMes;
    s_pocMiest ++;
    //vector
    }
int Mesto::getPocMiest(){
    return s_pocMiest;
    }

void Mesto::pocitanieObyvVMeste(){

 }
void Mesto::printInfo(Budova*budova) {
    std::cout << "Pocet budov v meste: " << budova->getPocBud() << std::endl;
    }
/*
std::vector Mesto::getKombinovaneBudovy(){
    return m_kombinovaneBudovy;
}
*/
void Mesto::postavBudovuKB(std::string nazov, Firma*firma){
    if (firma->getPeniaze()>=1250){
        m_kombinovaneBudovy.push_back(new KombinovanaBudova(nazov, firma));
    } else std::cout << "Nedostatok penazii na ucte! " << std::endl;
}
void Mesto::postavBudovuOB(std::string nazov, Firma*firma){
    if (firma->getPeniaze()>=1000){
        m_obytneBudovy.push_back(new ObytnaBudova(nazov, firma));
    } else std::cout << "Nedostatok penazii na ucte! " << std::endl;
}
void Mesto::postavBudovuVB(std::string nazov, Firma*firma){
    if (firma->getPeniaze()>=1500){
        m_vyrobneBudovy.push_back(new VyrobnaBudova(nazov, firma));
    } else std::cout << "Nedostatok penazii na ucte! " << std::endl;
}
