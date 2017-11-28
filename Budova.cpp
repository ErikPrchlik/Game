#include "Budova.h"

Budova::Budova(std::string nazov) //Funkcia*funkica
    /// Ulozim do vektoru
    /// Pri vytvorení novej budovy budem mať určený základ konštruktorom
    /// Vytvorím dedičné triedy konkrétnych budov
    /// Skopirujem do deidičnej triedy pvodné atributy
    /// V dedičnej triede vytvorím upgradivanie budovy do piateho levelu
        /// Zvysim maximalny pocet hodnout v atributoch
        ///
    :m_nazov(nazov)
{
    std::cout << "Nova budova vytvorena!" << std::endl;
    s_pocBud ++;
    new Kolo();
}
Budova::Budova(){
    s_pocBud ++;
}
Budova::~Budova()
{
    s_pocBud --;
}

int Budova::getPocBud(){
    return s_pocBud;
    }
///zlu fungujúca metoda... asi potrebujem do budovy ukladať v ktorom kole bola vytvorená a podľa neho počítať, o koľko kôl sa má znásabiť počet...
void Budova::vypocetAktualnehoPocObyv(){
    if (m_aktualnyPocObyv != m_maxPocObyv){
        if (m_pociatStavObyv+(10*Kolo::getPocKol())<m_maxPocObyv){
        m_aktualnyPocObyv = m_pociatStavObyv+(10*Kolo::getPocKol());
        } else m_aktualnyPocObyv = m_maxPocObyv;
    }
}
void Budova::vypocetAktualnehoPocVyr(){
    if (m_aktualnyPocVyr != m_maxPocVyr){
        if (m_pociatStavVyr+(10*Kolo::getPocKol())<m_maxPocVyr){
        m_aktualnyPocVyr = m_pociatStavVyr+(10*Kolo::getPocKol());
        } else m_aktualnyPocVyr = m_maxPocVyr;
    }
}
void Budova::vypisInfo(){

}
/*
int Budova::getPocetObyv(Budova*budova){
    m_celkvyPocObyv = budova->vypocetAktualnyPocObyv() + budova->vypocetAktualnyPocObyv();
    return m_celkvyPocObyv;
    }
*/
//pouzit vectory
/// hend po metodou pred implementaciu
