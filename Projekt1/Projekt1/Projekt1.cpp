﻿#include <iostream>
#include "spis.h"

int main()
{
    replisty lista;

    lista.Lista_Dodanie_na_poczatek('1');
    lista.Lista_Dodanie_na_poczatek('2');

    std::cout << "Elementy listy: ";
    lista.Lista_wyswietl();
}