//
// Created by loant on 23/11/2022.
//

#include "Biblio.h"


Biblio::Biblio(): tab(list<Document*>()) {}

Biblio::Biblio(Biblio &biblio):tab(list<Document*>()) {
   for (list<Document*>::iterator it = biblio.tab.begin(); it != biblio.tab.end() ; it++){
       tab.push_back(*it);
   }
}

void Biblio::ajouter(Document *doc) {
    this->tab.push_back(doc);
}

Document* Biblio::rechercher(string titre) {
    Document* doc = nullptr;
    for (list<Document*>::iterator it = tab.begin(); it != tab.end() ; it++){
        if ((*it)->getTitre() == titre){
            doc = (*it);
        }
    };
    return doc;
}

void Biblio::afficher() {
    cout << "======= BIBLIO ========" << endl;
    for (list<Document*>::iterator it = tab.begin(); it != tab.end() ; it++){
        (*it)->affichage();
        cout << "- - - - - - - - - - -" << endl;
    }
    cout << "======================" << endl;
}
