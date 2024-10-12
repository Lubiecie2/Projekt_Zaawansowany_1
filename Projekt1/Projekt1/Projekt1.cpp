#include <iostream>
#include "spis.h"

int main()
{
    replisty lista;

    lista.Lista_Dodanie_na_poczatek('1');   // <--- lista w kolejności 1
    lista.Lista_Dodanie_na_poczatek('2');   // <--- lista w kolejności 21
    
    lista.Lista_Dodanie_na_koniec('3');     // <--- lista w kolejności 213
    lista.Lista_Dodanie_na_koniec('4');     // <--- lista w kolejności 2134

    lista.Lista_Dodanie_do_srodka('5',3);     // <--- Lista w kolejności 21354
    lista.Lista_Dodanie_do_srodka('6',1);     // <--- Lista w kolejności 261354

    std::cout << "Elementy listy od poczatku: ";
    lista.Lista_wyswietl();

    std::cout << "Elementy listy od konca: ";
    lista.Lista_wyswietl_od_konca();

    std::cout << "Lista po usunieciu pierwszego elementu: ";
    lista.Lista_Usuwanie_pierwszego_elementu();
    lista.Lista_wyswietl();

    std::cout << "Lista po usunieciu ostatniego elementu: ";
    lista.Lista_usuwanie_ostatniego_elementu();
    lista.Lista_wyswietl();
}