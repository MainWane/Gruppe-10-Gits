#include <iostream>

class Kunde {
public:
    double rente;
    double formue = 0;
    int abonnement;
    void indsæt_penge(double);
    void beregn_abonnement();
    void beregn_rente();
};

void Kunde::indsæt_penge(double beløb) {
    formue = formue + beløb;
}

void Kunde::beregn_abonnement() {
    if (formue < 100000.0) {
        abonnement = 0;
    }
    else if (formue > 100000.0 && formue < 250000.0) {
        abonnement = 50;
    }
    else if (formue >= 250000.0) {
        abonnement = 100;
    }
}

void Kunde::beregn_rente() {
    if (formue < 100000) {
        rente = formue * (2.5 / 100);
    }
    else if (formue > 100000 && formue < 250000) {
        rente = formue * (3.75 / 100);
    }
    else if (formue >= 250000) {
        rente = formue * (5.0 / 100);
    }
}

int main() {
    Kunde ucl;
    std::cout << ucl.formue << std::endl;
    ucl.formue = 50000.0;
    ucl.beregn_abonnement();
    std::cout << ucl.formue << std::endl;
    std::cout << ucl.abonnement << std::endl;
    ucl.beregn_rente();
    std::cout << ucl.rente << std::endl;
    std::cout << ucl.formue << std::endl;


    return 0;
}