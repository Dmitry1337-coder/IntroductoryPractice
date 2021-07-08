#include "mainclass.h"

MainClass::MainClass()
{
    sofa=0;
    bed=0;
    table=0;
    chair=0;
    armchair=0;
    cupboard=0;
    chandelier=0;
    lamp=0;
}

void MainClass::EnlargeSofa()
{

    sofa++;
}

unsigned int MainClass::GetSofa() const
{
    return sofa;
}

void MainClass::EnlargeBed()
{

    bed++;
}

unsigned int MainClass::GetBed() const
{
    return  bed;
}

void MainClass::EnlargeTable()
{

    table++;
}

unsigned int MainClass::GetTable() const
{
    return table;
}

void MainClass::EnlargeChair()
{

    chair++;
}
unsigned int MainClass::GetChair() const
{
    return chair;
}


void MainClass::EnlargeArmchair()
{

    armchair++;
}

unsigned int MainClass::GetArmchair() const
{
    return armchair;

}

void MainClass::EnlargeCupboard()
{

    cupboard++;
}
unsigned int MainClass::GetCupboard() const
{
    return cupboard;
}

void MainClass::EnlargeChandelier()
{

    chandelier++;
}

unsigned int MainClass::GetChandelier() const
{
    return  chandelier;
}

void MainClass::EnlargeLamp()
{

    lamp++;
}

unsigned int MainClass::GetLamp() const
{
    return lamp;
}

