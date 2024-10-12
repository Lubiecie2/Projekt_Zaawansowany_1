#ifndef SPIS_H
#define SPIS_H

class elisty { 
public:
    char data;      // <--- Zmienna przechowuj¹ca dane 
    elisty* prev;   // <--- WskaŸnik na poprzedni element
    elisty* next;   // <--- Wska¿nik na nastêpny element 
    elisty(char val); 
};

class replisty {
public:
    elisty* head;     // <--- WskaŸnik który zawiera pierwszy element listy
    elisty* tail;     // <--- WskaŸnik który zawiera ostatni element listy 
    int count;        // <--- Zmienna która zawiera iloœæ elementów w liœcie 
    replisty();      
    ~replisty();     
    void Lista_Dodanie_na_poczatek(char v);
    void Lista_wyswietl();
    void Lista_Dodanie_na_koniec(char v);
    void Lista_wyswietl_od_konca();
};
#endif
