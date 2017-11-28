#ifndef SVET_H
#define SVET_H
#include <iostream>
#include <vector>
#include "Mesto.h"
/**
 * @brief The Svet class
 *
 * atributy:
 * pocet obyvateľov
 * pocet nezamestnaných obyvateľov
 * počet miest
 * vektor miest
 *
 */
class Svet {

private:
    int m_pocetObyv;
    std::vector<Mesto*> m_miest;

public:
    Svet();
	void cekovoObyv();
    void printInfo(Mesto*mesto);
};

#endif
