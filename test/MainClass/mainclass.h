#ifndef MAINCLASS_H
#define MAINCLASS_H

#include "MainClass_global.h"

class MAINCLASS_EXPORT MainClass
{
private:
    unsigned int sofa;
    unsigned int bed;
    unsigned int table;
    unsigned int chair;
    unsigned int armchair;
    unsigned int cupboard;
    unsigned int chandelier;
    unsigned int lamp;
public:
    MainClass();
    void EnlargeSofa();
    unsigned int GetSofa() const;
    void EnlargeBed();
    unsigned int GetBed() const;
    void EnlargeTable();
    unsigned int GetTable() const;
    void EnlargeChair();
    unsigned int GetChair() const;
    void EnlargeArmchair();
    unsigned int GetArmchair() const;
    void EnlargeCupboard();
    unsigned int GetCupboard() const;
    void EnlargeChandelier();
    unsigned int GetChandelier() const;
    void EnlargeLamp();
    unsigned int GetLamp() const;

};

#endif // MAINCLASS_H
