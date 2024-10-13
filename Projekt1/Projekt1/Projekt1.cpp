#include <iostream>
#include "spis.h"

int main()
{
    replisty lista;

    lista.Lista_Dodanie_na_poczatek('1');   
    lista.Lista_Dodanie_na_poczatek('2');  
    
    std::cout << "Aktualna kolejnosc listy po dodaniu na poczatek: ";
    lista.Lista_wyswietl();

    lista.Lista_Dodanie_na_koniec('3');     
    lista.Lista_Dodanie_na_koniec('4');     

    std::cout << "Aktualna kolejnosc listy po dodaniu na koniec: ";
    lista.Lista_wyswietl();

    lista.Lista_Dodanie_do_srodka('5',3);     
    lista.Lista_Dodanie_do_srodka('6',1);     

    std::cout << "Aktualna kolejnosc listy po dodaniu pod wskazany indeks: ";
    lista.Lista_wyswietl();

    std::cout << "Elementy listy od poczatku: ";
    lista.Lista_wyswietl();

    std::cout << "Nastepny element po podanym indeksie: ";
    lista.Lista_Wyswietlanie_Nastepnego_elementu(4);

    std::cout << "Poprzedni element po podanym indeksie: ";
    lista.Lista_Wyswietlanie_Nastepnego_elementu(3);

    std::cout << "Elementy listy od konca: ";
    lista.Lista_wyswietl_od_konca();

    std::cout << "Lista po usunieciu pierwszego elementu: ";
    lista.Lista_Usuwanie_pierwszego_elementu();
    lista.Lista_wyswietl();

    std::cout << "Lista po usunieciu ostatniego elementu: ";
    lista.Lista_usuwanie_ostatniego_elementu();
    lista.Lista_wyswietl();

}