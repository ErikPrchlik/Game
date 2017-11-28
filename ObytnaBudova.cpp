#include "ObytnaBudova.h"

ObytnaBudova::ObytnaBudova(std::string nazov, Firma*firma)
    :Budova (nazov)
{
    m_maxPocObyv = 100;
    m_pociatStavObyv = 50;
    m_cenaBud = 1000;
    firma->ubytokPeniaze(firma->getPeniaze() - m_cenaBud);
}
ObytnaBudova::ObytnaBudova()
    :Budova()
{
    m_maxPocObyv = 100;
    m_pociatStavObyv = 50;
    m_aktualnyPocObyv = 100;
}
std::string ObytnaBudova::getNazov(){
    return m_nazov;
}
int ObytnaBudova::getMaxPocObyv() {
    return m_maxPocObyv;
}
int ObytnaBudova::getPociatStavObyv(){
    return m_pociatStavObyv;
}
int ObytnaBudova::getCenaBud(){
    return m_cenaBud;
}
int ObytnaBudova::getAktualnyPocObyv(){
    return m_aktualnyPocObyv;
}
void ObytnaBudova::printInfo(){
    std::cout << std::endl;
    std::cout << "Nazov budovy: " << m_nazov << std::endl;
    std::cout << std::endl;
    std::cout << "Max. poc. obyv. v budove: " << m_maxPocObyv << std::endl;
    std::cout << std::endl;
    std::cout << "Aktualny poc. obyv. v budove: " << m_aktualnyPocObyv << std::endl;
    std::cout << std::endl;
}
