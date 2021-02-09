//
// Created by avar on 26. 1. 2021.
//

#ifndef ZLOMKY_ZLOMKY_H
#define ZLOMKY_ZLOMKY_H

class Zlomok
{
private:

    int  c; //citatel
    int  m; //menovatel

public:
    Zlomok();
    Zlomok(int mojC, int mojM);
    Zlomok(char typ, int castzlomku);

    int nahradnyC; //boli nutne 2 nahradne premenne-ked neboli tak to malo milion problemov
    int nahradnyM;

    void reduceFraction(int x, int y); //metoda, ktora upravi na zakladny tvar

    friend std::ostream & operator<<(std::ostream & os, const Zlomok & zlomok);
    friend std::istream & operator>>(std::istream & is, Zlomok & zlomok);

    bool operator>(const Zlomok & druhyZlomok) const;
    bool operator<(const Zlomok & druhyZlomok) const;
    Zlomok operator+(const Zlomok & inyZlomok) const;
    Zlomok operator-(const Zlomok &inyZlomok) const;
    Zlomok operator/(const Zlomok & inyZlomok) const;
    Zlomok operator*(const Zlomok & inyZlomok) const;

};
#endif //ZLOMKY_ZLOMKY_H
