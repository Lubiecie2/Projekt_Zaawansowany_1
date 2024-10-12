#include <iostream>
#include "spis.h"

int main()
{
    replisty lista;

    lista.Lista_Dodanie_na_poczatek('1');   // <--- lista w kolejności 1
    lista.Lista_Dodanie_na_poczatek('2');   // <--- lista w kolejności 21
    
    lista.Lista_Dodanie_na_koniec('3');     // <--- lista w kolejności 213
    lista.Lista_Dodanie_na_koniec('4');     // <--- lista w kolejności 2134

    std::cout << "Elementy listy od poczatku: ";
    lista.Lista_wyswietl();

    std::cout << "Elementy listy od konca: ";
    lista.Lista_wyswietl_od_konca();
}