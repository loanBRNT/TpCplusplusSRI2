//
// Created by loant on 23/11/2022.
//

#ifndef UNTITLED_ARTICLE_H
#define UNTITLED_ARTICLE_H

#include "Document.h"

class Article : public Document{
private:
    string _titreRevue;
    string _editeur;
    string _num;
public:
    Article(string& t, string a, string* r, string tr, string e, string n);
    Article(Article& a);
    void affichage();
    Article* cloner();
    Article operator=(Article& ar);
};


#endif //UNTITLED_ARTICLE_H
