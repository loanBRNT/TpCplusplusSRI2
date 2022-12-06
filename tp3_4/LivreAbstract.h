//
// Created by loant on 04/12/2022.
//

#ifndef UNTITLED_LIVREABSTRACT_H
#define UNTITLED_LIVREABSTRACT_H
#include "DocumentAbstract.h"

class LivreAbstract : public DocumentAbstract{
private:
    string _editeur;
    string _annee;
public:
    LivreAbstract(string& t, string a, string* r, string e, string an);
    LivreAbstract(LivreAbstract& l);
    virtual int cout();
};
#endif //UNTITLED_LIVREABSTRACT_H
