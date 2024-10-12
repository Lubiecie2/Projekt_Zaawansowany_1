#include "spis.h"
#include <iostream>

elisty::elisty(char val) : data(val), prev(0), next(0) {} 

replisty::replisty() : head(0), tail(0), count(0) {} 

replisty::~replisty() {
}

void replisty::Lista_Dodanie_na_poczatek(char v) {
    elisty* p = new elisty(v);
    p->next = head;
    head = p; 
    if (count == 0) {
        tail = p;
    }
    else {
        p->next->prev = p;
    }
    count++;
}

