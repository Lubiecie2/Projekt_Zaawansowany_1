#ifndef SPIS_H
#define SPIS_H

class elisty { 
public:
    char data;      // <--- Zmienna przechowuj�ca dane 
    elisty* prev;   // <--- Wska�nik na poprzedni element
    elisty* next;   // <--- Wska�nik na nast�pny element 
    elisty(char val); 
};

class replisty {
public:
    elisty* head;     // <--- Wska�nik kt�ry zawiera pierwszy element listy
    elisty* tail;     // <--- Wska�nik kt�ry zawiera ostatni element listy 
    int count;        // <--- Zmienna kt�ra zawiera ilo�� element�w w li�cie 
    replisty();      
    ~replisty();     
    void Lista_Dodanie_na_poczatek(char v);
    void Lista_wyswietl();
    void Lista_Dodanie_na_koniec(char v);
    void Lista_wyswietl_od_konca();
    void Lista_Dodanie_do_srodka(char v, int index);
    void Lista_Usuwanie_pierwszego_elementu();
    void Lista_usuwanie_ostatniego_elementu();
    void Lista_Wyswietlanie_Nastepnego_elementu(int index);
    void Lista_Wyswietlanie_poprzedniego_elementu(int index);
};
#endif
