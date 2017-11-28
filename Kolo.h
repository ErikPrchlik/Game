#ifndef KOLO_H
#define KOLO_H
#include <iostream>
#include "Firma.h"
class Kolo {

private:
        static int s_pocet;

public:
        Kolo();
        ~Kolo();
        static int getPocKol();
        static void dalsieKolo(Firma*firma);
};
#endif
