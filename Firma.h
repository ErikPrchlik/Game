#ifndef FIRMA_H
#define FIRMA_H
#include <iostream>

class Firma {

private:
        std::string m_nazovF;
        std::string m_meno;
        int m_peniaze;

public:
        Firma();
        void setMeno(std::string meno);
        int getPeniaze();
        void ubytokPeniaze(int zostatok);
        void printInfo();
};
#endif
