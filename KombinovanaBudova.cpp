#include "KombinovanaBudova.h"
//uzivatel zadá názov budovy, ktoru chce vytvorit a za tym zada nazov firmy
//vyriešiť podmienkiu stavania budovy ak nemám dostatokm peňazí...
KombinovanaBudova::KombinovanaBudova(std::string nazov, Firma*firma)
    :Budova (nazov)
{
    m_maxPocVyr = 5;
    m_pociatStavVyr = 2;
    m_maxPocObyv = 50;
    m_pociatStavObyv = 25;    
    firma->ubytokPeniaze(firma->getPeniaze() - 1250);
}
KombinovanaBudova::KombinovanaBudova()
    :Budova()
{
    m_maxPocVyr = 5;
    m_pociatStavVyr = 2;
    m_maxPocObyv = 50;
    m_pociatStavObyv = 25;
    m_aktualnyPocObyv = 50;
    m_aktualnyPocVyr = 5;
    m_cenaBud = 1250;
}
std::string KombinovanaBudova::getNazov(){
    return m_nazov;
}
int KombinovanaBudova::getMaxPocVyr(){
    return m_maxPocVyr;
}
int KombinovanaBudova::getPociatStavVyr(){
    return m_pociatStavVyr;
}
int KombinovanaBudova::getMaxPocObyv() {
    return m_maxPocObyv;
}
int KombinovanaBudova::getPociatStavObyv(){
    m_pociatStavObyv;
}
int KombinovanaBudova::getCenaBud(){
    m_cenaBud;
}
int KombinovanaBudova::getAktualnyPocObyv(){
    return m_aktualnyPocObyv;
}
int KombinovanaBudova::getAktualnyPocVyr(){
    return m_aktualnyPocVyr;
}
void KombinovanaBudova::printInfo(){
    std::cout << std::endl;
    std::cout << "Nazov budovy: " << m_nazov << std::endl;
    std::cout << std::endl;
    std::cout << "Max. poc. obyv. v budove: " << m_maxPocObyv << std::endl;
    std::cout << std::endl;
    std::cout << "Aktualny poc. obyv. v budove: " << m_aktualnyPocObyv << std::endl;
    std::cout << std::endl;
    std::cout << "Max. poc. vyr. v budove: " << m_maxPocVyr << std::endl;
    std::cout << std::endl;
    std::cout << "Akualny poc. vyr v budove: " << m_aktualnyPocVyr << std::endl;
    std::cout << std::endl;
    //alebo Auto::printInfo();
}
