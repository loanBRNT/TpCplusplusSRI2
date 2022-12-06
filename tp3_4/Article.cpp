//
// Created by loant on 23/11/2022.
//

#include "Article.h"

Article::Article(string &t, string a, string *r, string tr, string e, string n) :
        Document(t,a,r), _titreRevue(tr) ,_editeur(e), _num(n){}

Article::Article(Article &a):Document(a._titre,a._auteur,a._resume),
_titreRevue(a._titreRevue) ,_editeur(a._editeur), _num(a._num) {}

void Article::affichage() {
    Document::affichage();
    cout << "Edite par " << this->_editeur << " dans la revue '" << this->_titreRevue
    << "' numero " << this->_num << endl;
}

Article *Article::cloner() {
    return new Article(*this);
}

Article Article::operator=(Article &ar) {
    if (this != &ar){
        delete this;
        Document::operator=(ar);
        this->_titreRevue = ar._titreRevue;
        this->_editeur = ar._editeur;
        this->_num = ar._num;
    }
    return *this;
}
