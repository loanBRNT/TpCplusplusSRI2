//
// Created by loant on 23/11/2022.
//

#ifndef UNTITLED_DOCUMENT_H
#define UNTITLED_DOCUMENT_H

#include <string>
#include "stdio.h"
#include "iostream"

using namespace std;

class Document {
protected:
    string& _titre;
    string _auteur;
    string* _resume;
public:
    Document(string& t= (string &) "titre", string a="auteur", string* r= new string("resume"));
    Document(Document& d);
    virtual Document* cloner();
    friend ostream& operator<<(ostream& out, Document& d);
    virtual void affichage();
    ~Document();
    Document operator=(Document& doc);
    string getTitre();
    virtual int cout()=0;
};


#endif //UNTITLED_DOCUMENT_H
