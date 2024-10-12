#include "spis.h"
#include <iostream>

elisty::elisty(char val) : data(val), prev(0), next(0) {} 

replisty::replisty() : head(0), tail(0), count(0) {} 

replisty::~replisty() {
}

void replisty::Lista_Dodanie_na_poczatek(char v) {
    elisty* nws = new elisty(v);
    nws->next = head;
    head = nws; 
    if (count == 0) {
        tail = nws;
    }
    else {
        nws->next->prev = nws;
    }
    count++;
}

void replisty::Lista_wyswietl() {
    elisty* obecny_element = head; 

    while (obecny_element != 0) { 
        std::cout << obecny_element->data << " "; 
        obecny_element = obecny_element->next; 
    }
    std::cout << std::endl; 
}

void replisty::Lista_Dodanie_na_koniec(char v) {
    elisty* nws = new elisty(v); 
    nws->next = 0;          
    nws->prev = tail;          

    if (tail) {                 
        tail->next = nws;        
    }
    else {
        head = nws;              
    }
    tail = nws;                 
    count++;
}
void replisty::Lista_wyswietl_od_konca(){
}