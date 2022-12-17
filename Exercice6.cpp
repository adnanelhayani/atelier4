#include <iostream>
using namespace std;
class Test{
public:
static int tableau[] ;
public :
 float division(int indice, int diviseur){
return tableau[indice]/diviseur;
}
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main() {

int x, y;
Test tab;
cout << "Entrez l’indice de l entier à diviser: " ;
cin >> x ;
cout << "Entrez le diviseur: " ;

try
{
    cin >> y ;
    if (y==0){
      throw "impossible de divise sur 0";
    }
    cout << "Le résultat de la division est: ";
    cout <<tab.division(x, y) << endl;
}
catch(const char * e)
{
    cout <<"l exception est :"<<e;
}


return 0; 
}
