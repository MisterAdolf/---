

#include <iostream>
using namespace std;

#include <iostream>

using namespace std;

class Seacocktail {
    string s;
public:
    Seacocktail(string s = "Peace of Seacocktail") {
        this->s = s;
    }
    string getName() {
        return s;
    }
};

class Margarita {
    string m;
public:
    Margarita(string m = "Peace of Margarita") {
        this->m = m;
    }

    string getName() {
        return m;
    }
};

class Carbonara {
    string c;
public:
    Carbonara(string c = "Peace of Carbonara") {
        this->c = c;
    }

    string getName() {
        return c;
    }
};

class QuattroFormaggi {
    string q;
public:
    QuattroFormaggi(string q = "Peace of class QuattroFormaggi") {
    
        this->q = q;
    }

    string getName() {
        return q;
    }
};

class Hawai {
    string h;
public:
    Hawai(string h = "Peace of Hawai") {
        this->h = h;
    }
    string getName() {
        return h;
    }
};

class Extracheese {
    string e;
public:
    Extracheese(string e = "Peace of Extracheese") {
        this->e = e;
    }

    string getName() {
        return e;
    }
};

class Pepperoni {
    string p;
public:
    Pepperoni(string p = "Peace of Pepperoni") {
        this->p = p;
    }

    string getName() {
        return p;
    }
};

class BBQ {
    string t;
public:
    BBQ(string t = "Peace of BBQ") {
        this->t = t;
    }

    string getName() {
        return t;
    }
};

class Pizza {
    BBQ* bbq;
public:
    Pizza(BBQ* bbq) {
        this->bbq = bbq;
    }

    void eatPizza() {
        cout << this->bbq->getName();
        delete bbq;
    }
};

int main() {
    BBQ* bbq = new BBQ();

    Pizza pizza = Pizza(bbq);

    pizza.eatPizza();
}



int main()
{
    
}

