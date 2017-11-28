#include "Kolo.h"

Kolo::Kolo(){
    s_pocet ++;
}
Kolo::~Kolo(){
    s_pocet --;
}
int Kolo::getPocKol() {
    return s_pocet;
    }
void Kolo::dalsieKolo(Firma*firma){
    s_pocet ++;
    firma->ubytokPeniaze(firma->getPeniaze() + 1000);
    std::cout<<"Ziskal si 1000 na svoj ucet!"<<std::endl;
}
