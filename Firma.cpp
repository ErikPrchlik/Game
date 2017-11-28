#include "Firma.h"

Firma::Firma(){
    m_nazovF = "Dopravny podnik Slovensko";
    m_meno = " ";
    m_peniaze = 2000;
}
void Firma::setMeno(std::string meno){
    m_meno = meno;
}
int Firma::getPeniaze() {
    return m_peniaze;
    }

void Firma::ubytokPeniaze(int zostatok){
    m_peniaze = zostatok;
}

void Firma::printInfo() {
    std::cout << "Nazov firmy: " << m_nazovF << std::endl;
    std::cout << "Uzivatel: " << m_meno << std::endl;
    std::cout << "Peniaze: " << getPeniaze() << std::endl;
    }
