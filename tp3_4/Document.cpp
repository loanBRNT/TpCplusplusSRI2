//
// Created by loant on 23/11/2022.
//

#include "Document.h"

Document::Document(string& titre, string auteur, string *resume): _titre(titre), _auteur(auteur), _resume(new string(*resume)) {}

Document::Document(Document &d): _titre(d._titre), _auteur(d._auteur), _resume(new string(*d._resume)) {}

Document* Document::cloner() {
    return new Document(*this);
}

ostream &operator<<(ostream &out, Document &d) {
    out << "'" << d._titre << "' ecrit par " << d._auteur << ".\nResume : " << *d._resume;
    return out;
}

void Document::affichage() {
    cout << "Ce document s'appelle '" << this->_titre << "' ecrit par " << this->_auteur << ".\nResume : " << *this->_resume << endl;
}

Document::~Document() {
    delete _resume;
}

Document Document::operator=(Document &doc) {
    if (this != &doc){
        delete this;
        this->_titre = doc._titre;
        this->_auteur = doc._auteur;
        this->_resume = new string(*doc._resume);
    }
    return *this;
}

string Document::getTitre() {
    return _titre;
}


