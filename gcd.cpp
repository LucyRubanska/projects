// najdenie NSD bez navratovej hodnoty- najvacsi spolocny delitel, nacitani C a M z klavesnice, nasledne pouzita f __gcd, ktora vypocita NSD, dalej vytvori základný
// tvar C aj M a vypise ich
// treba nahradnu

#include <bits/stdc++.h> 

using namespace std; 
 
void reduceFraction(int x, int y) 
{ 
	int d; 
	d = __gcd(x, y);
	
	x = x / d; 
	y = y / d; 
   cout << x << "/" << y << endl; 
} 

int main() 
{   int nahradna1, nahradna2;
	std::cout << "Zadaj citatel: ";
    std::cin>>nahradna1;
	std::cout << "Zadaj menovatel: ";
    std::cin>>nahradna2;
	reduceFraction(nahradna1, nahradna2);
	
	return 0; 
} 
