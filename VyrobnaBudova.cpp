#include "VyrobnaBudova.h"

VyrobnaBudova::VyrobnaBudova(std::string nazov, Firma*firma)
    :Budova(nazov)
{
    m_maxPocVyr = 10;
    m_pociatStavVyr = 5;
    m_cenaBud = 1500;
    firma->ubytokPeniaze(firma->getPeniaze() - m_cenaBud);
}
VyrobnaBudova::VyrobnaBudova()
    :Budova()
{
    m_maxPocVyr = 10;
    m_pociatStavVyr = 5;
    m_aktualnyPocVyr = 10;
}
std::string VyrobnaBudova::getNazov(){
    return m_nazov;
}
int VyrobnaBudova::getMaxPocVyr() {
    return m_maxPocVyr;
}
int VyrobnaBudova::getPociatStavVyr(){
    return m_pociatStavVyr;
}
int VyrobnaBudova::getCenaBud(){
    return m_cenaBud;
}
int VyrobnaBudova::getAktualnyPocVyr(){
    return m_aktualnyPocVyr;
}
void VyrobnaBudova::printInfo(){
    std::cout << std::endl;
    std::cout << "Max. poc. vyr. v budove: " << m_maxPocVyr << std::endl;
    std::cout << std::endl;
    std::cout << "Akualny poc. vyr v budove: " << m_aktualnyPocVyr << std::endl;
    std::cout << std::endl;
}
