#include <iostream>
#include <vector>
#include "Firma.h"
#include "Budova.h"
#include "Kolo.h"
#include "Mesto.h"
#include "Svet.h"
#include "ObytnaBudova.h"
#include "VyrobnaBudova.h"
#include "KombinovanaBudova.h"
#include "Nastaveniefirma.h"
int Kolo::s_pocet=1;
int Budova::s_pocBud=0;
int Mesto::s_pocMiest=0;
int Budova::m_cenaBud=0;

int main()
{
    Firma* f1 = new Firma();
    std::cout<<"Zadaj meno zivatela: "<<std::endl;
    std::string meno;
    std::cin>>meno;
    f1->setMeno(meno);
    system("cls");
    f1->printInfo();
    Mesto* m1 = new Mesto("Brno");
    Mesto* m2 = new Mesto("Praha");
    Mesto* m3 = new Mesto("Ostrava");
    ObytnaBudova* OB1 = new ObytnaBudova();
    ObytnaBudova* OB2 = new ObytnaBudova();
    ObytnaBudova* OB3 = new ObytnaBudova();
    ObytnaBudova* OB4 = new ObytnaBudova();
    ObytnaBudova* OB5 = new ObytnaBudova();
    ObytnaBudova* OB6 = new ObytnaBudova();
    ObytnaBudova* OB7 = new ObytnaBudova();
    ObytnaBudova* OB8 = new ObytnaBudova();
    ObytnaBudova* OB9 = new ObytnaBudova();
    ObytnaBudova* OB10 = new ObytnaBudova();
    ObytnaBudova* OB11 = new ObytnaBudova();
    ObytnaBudova* OB12 = new ObytnaBudova();
    ObytnaBudova* OB13 = new ObytnaBudova();
    ObytnaBudova* OB14 = new ObytnaBudova();
    ObytnaBudova* OB15 = new ObytnaBudova();
    ObytnaBudova* OB16 = new ObytnaBudova();
    ObytnaBudova* OB17 = new ObytnaBudova();
    VyrobnaBudova* VB1 = new VyrobnaBudova();
    VyrobnaBudova* VB2 = new VyrobnaBudova();
    KombinovanaBudova* KB1 = new KombinovanaBudova();
    KombinovanaBudova* KB2 = new KombinovanaBudova();
    KombinovanaBudova* KB3 = new KombinovanaBudova();
    while (Kolo::getPocKol()<5){
    std::cout<<"---------------------------------------------------"<<std::endl;
    std::cout<<"Cislo kola: "<<Kolo::getPocKol()<<std::endl;
    std::cout<<"Pre zobrazenie poctu kol napis                  0" <<std::endl;
    std::cout<<"Pre zobrazenie info o firme napis               1"<<std::endl;
    std::cout<<"Pre zobrazenie stavu penazi na ucte napis       2"<<std::endl;
    std::cout<<"Pre postavenie budovy napis                     3"<<std::endl;
    std::cout<<"Pre posun do dalsieho kola napis                4"<<std::endl;
    int prikaz;
    std::cin>>prikaz;
    system("cls");
    if (prikaz == 0){
        std::cout<<"Pocet kol: "<<Kolo::getPocKol()<<std::endl;
    } else if (prikaz == 1){
        f1->printInfo();
    } else if (prikaz == 2){
        std::cout<<"Stav na ucte: "<<f1->getPeniaze()<<std::endl;
    } else if (prikaz == 3){
        std::cout<<"Pre postavenie budovy v meste c. 1 napis    0"<<std::endl;
        std::cout<<"Pre postavenie budovy v meste c. 2 napis    1"<<std::endl;
        std::cout<<"Pre postavenie budovy v meste c. 3 napis    2"<<std::endl;
        std::cin>>prikaz;
        system("cls");
        if (prikaz == 0){
            std::cout<<"Pre postavenie obytnej budovy napis         0"<<std::endl;
            std::cout<<"Cena je 1000"<<std::endl;
            std::cout<<"Pre postavenie vyrobnej budovy napis        1"<<std::endl;
            std::cout<<"Cena je 1500"<<std::endl;
            std::cout<<"Pre postavenie kombinovanej budovy napis    2"<<std::endl;
            std::cout<<"Cena je 1250"<<std::endl;
            std::cin>>prikaz;
            system("cls");
            if (prikaz == 0){
                m1->postavBudovuOB("Dom",f1);
                //m1->getKombinovaneBudovy().back()->printInfo();
            } else if (prikaz == 1){
                m1->postavBudovuVB("Fabrika",f1);
                //m2->getKombinovaneBudovy().back()->printInfo();
            } else if (prikaz == 2){
                m1->postavBudovuKB("Obchodny dom",f1);
                //m3->getKombinovaneBudovy().back()->printInfo();
            }
        } else if (prikaz == 1){
            std::cout<<"Pre postavenie obytnej budovy napis         0"<<std::endl;
            std::cout<<"Cena je 1000"<<std::endl;
            std::cout<<"Pre postavenie vyrobnej budovy napis        1"<<std::endl;
            std::cout<<"Cena je 1500"<<std::endl;
            std::cout<<"Pre postavenie kombinovanej budovy napis    2"<<std::endl;
            std::cout<<"Cena je 1250"<<std::endl;
            std::cin>>prikaz;
            system("cls");
            if (prikaz == 0){
                m2->postavBudovuOB("Dom",f1);
                //m1->getKombinovaneBudovy().back()->printInfo();
            } else if (prikaz == 1){
                m2->postavBudovuVB("Fabrika",f1);
                //m2->getKombinovaneBudovy().back()->printInfo();
            } else if (prikaz == 2){
                m2->postavBudovuKB("Obchodny dom",f1);
                //m3->getKombinovaneBudovy().back()->printInfo();
            }
        } else if (prikaz == 2){
            std::cout<<"Pre postavenie obytnej budovy napis         0"<<std::endl;
            std::cout<<"Cena je 1000"<<std::endl;
            std::cout<<"Pre postavenie vyrobnej budovy napis        1"<<std::endl;
            std::cout<<"Cena je 1500"<<std::endl;
            std::cout<<"Pre postavenie kombinovanej budovy napis    2"<<std::endl;
            std::cout<<"Cena je 1250"<<std::endl;
            std::cin>>prikaz;
            system("cls");
            if (prikaz == 0){
                m3->postavBudovuOB("Dom",f1);
                //m1->getKombinovaneBudovy().back()->printInfo();
            } else if (prikaz == 1){
                m3->postavBudovuVB("Fabrika",f1);
                //m2->getKombinovaneBudovy().back()->printInfo();
            } else if (prikaz == 2){
                m3->postavBudovuKB("Obchodny dom",f1);
                //m3->getKombinovaneBudovy().back()->printInfo();
            }
        }
    } else if (prikaz == 4){
        Kolo::dalsieKolo(f1);
        std::cout<<"Pocet kol: "<<Kolo::getPocKol()<<std::endl;
    }
    }
    std::cout<<"Koniec hry!"<<std::endl;


    /*while(prikaz != 'X')
    {

        cin >> prikaz;
    }*/

    delete OB1;
    delete OB2;
    delete OB3;
    delete OB4;
    delete OB5;
    delete OB6;
    delete OB7;
    delete OB8;
    delete OB9;
    delete OB10;
    delete OB11;
    delete OB12;
    delete OB13;
    delete OB14;
    delete OB15;
    delete OB16;
    delete OB17;
    delete VB1;
    delete VB2;
    delete KB1;
    delete KB2;
    delete KB3;
    delete m1;
    delete m2;
    delete m3;
    return 0;
}
