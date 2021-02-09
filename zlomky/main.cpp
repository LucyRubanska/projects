#include <iostream>
#include "zlomky.h"
#include <bits/stdc++.h>

int main()
{
    Zlomok Zlomok1;
    Zlomok Zlomok2(4,8);
    std::cout << "Dalsi zlomok je: " << Zlomok2 << std::endl;
    std::cout << "Sucet zlomkov je: " << Zlomok1+Zlomok2 << std::endl;
    std::cout << "Podiel zlomkov je: " << Zlomok1/Zlomok2 << std::endl;
    std::cout << "Rozdiel zlomkov je: " << Zlomok1-Zlomok2 << std::endl;
    std::cout <<"Sucin zlomkov je: " << Zlomok1*Zlomok2 << std::endl;
    std::cout << "Porovnanie zlomkov (ak vyjde 0, tak prvy nie je vacsi nez druhy,, ak vyjde 1, tak prvy je vacsi nez druhy) " << (Zlomok1>Zlomok2) << std::endl;
    return 0;
}

Zlomok::Zlomok() {
    std::cout << "Zadaj citatel: " << std::flush;
    std::cin >> c;
    std::cout << "Zadaj menovatel: " << std::flush;
    std::cin >> m;
    while (c == 0)
    {
        std::cout << ("Cislo je nula. Zadaj novy citatel: ") << std::flush;
        std::cin >> c;
    }
    while (m == 0)
    {
        std::cout << ("Menovatel nemoze byt 0. Zadaj novy menovatel: ") << std::flush;
        std::cin >> m;
    }
    nahradnyC = c;
    nahradnyM = m;
    reduceFraction(nahradnyC, nahradnyM);
}

Zlomok::Zlomok(int mojC, int mojM):c(mojC),m(mojM)
{

    while (c == 0)
    {
        std::cout << ("Cislo je nula. Zadaj novy citatel: ") << std::flush;
        std::cin >> c;
    }
    while (m == 0)
    {
        std::cout << ("Menovatel nemoze byt 0. Zadaj novy menovatel: ") << std::flush;
        std::cin >> m;
    }
    nahradnyC=c;
    nahradnyM=m;
    reduceFraction(nahradnyC, nahradnyM);
}

Zlomok::Zlomok(char typ, int castzlomku)
{
    switch(typ)
    {

        case 'c':
        {
            c = castzlomku;
            m = 1;
            while (c == 0)
            {
                std::cout << ("Cislo je nula. Zadaj novy citatel: ") << std::flush;
                std::cin >> c;
            }
            while (m == 0)
            {
                std::cout << ("Menovatel nemoze byt 0. Zadaj novy menovatel: ") << std::flush;
                std::cin >> m;
            }
            nahradnyC=c;
            nahradnyM=m;
            reduceFraction(nahradnyC, nahradnyM);
            break;
        }
        case 'm':
        {
            m = castzlomku;
            std::cout<<"Zadaj citatel " << std::endl;
            std::cin>>c;
            while (c == 0)
            {
                std::cout << ("Cislo je nula. Zadaj novy citatel: ") << std::flush;
                std::cin >> c;
            }
            while (m == 0)
            {
                std::cout << ("Menovatel nemoze byt 0. Zadaj novy menovatel: ") << std::flush;
                std::cin >> m;
            }
            nahradnyC=c;
            nahradnyM=m;
            reduceFraction(nahradnyC, nahradnyM);
            break;
        }
        default:
        {
            c = 0;
            m = 1;
            std::cout<< "Zadal si cislo 0" <<std::endl;
            break;
        }
    }

}


bool Zlomok::operator>(const Zlomok & druhyZlomok) const
{
    float hodnota1, hodnota2;
    hodnota1=c/m;
    hodnota2=druhyZlomok.c/druhyZlomok.m;
    return hodnota1 > hodnota2;
}

bool Zlomok::operator<(const Zlomok & druhyZlomok) const //nevadi tam  z int na float
{
    float hodnota1, hodnota2;
    hodnota1=c/m;
    hodnota2=druhyZlomok.c/druhyZlomok.m;
    return hodnota2 > hodnota1;
}

Zlomok Zlomok::operator+(const Zlomok & inyZlomok) const
{
    return {(c*inyZlomok.m)+(inyZlomok.c*m), m*inyZlomok.m};
}

Zlomok Zlomok::operator-(const Zlomok & inyZlomok) const
{
   return {(c*inyZlomok.m)-(inyZlomok.c*m), m*inyZlomok.m};
}

Zlomok Zlomok::operator*(const Zlomok & inyZlomok) const
{
    return {c*inyZlomok.c, m*inyZlomok.m};
}

Zlomok Zlomok::operator/(const Zlomok & inyZlomok) const
{
    return {c*inyZlomok.m, m*inyZlomok.c};
}

std::istream & operator>>(std::istream & is, Zlomok & zlomok)
{
        std::cout << "Zadaj citatel zlomku: " << std::endl;
        is>>zlomok.c;
        std::cout << "Zadaj menovatel zlomku: " << std::endl;
        is>>zlomok.m;

        return is;
}

std::ostream & operator<<(std::ostream & os, const Zlomok & zlomok)
{
    os << zlomok.c << "/" << zlomok.m<<std::endl;
    return os;
}

void Zlomok:: reduceFraction(int mojC, int mojM)
{
    using namespace std;
    int d;
    d = __gcd(mojC, mojM);

    c = mojC / d;
    m = mojM / d;
}

