//
// Created by loant on 04/12/2022.
//

#ifndef UNTITLED_DOCUMENTABSTRACT_H
#define UNTITLED_DOCUMENTABSTRACT_H

#include <string>
#include "stdio.h"
#include "iostream"


using namespace std;

class DocumentAbstract {
protected:
    string& _titre;
    string _auteur;
    string* _resume;
public:
    DocumentAbstract(string& t= (string &) "titre", string a="auteur", string* r= new string("resume"));
    DocumentAbstract(DocumentAbstract& d);
    virtual int cout()=0;
    ~DocumentAbstract();

};

#endif //UNTITLED_DOCUMENTABSTRACT_H