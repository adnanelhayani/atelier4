#include <iostream>
#include <list>
#include <iterator>
using namespace std;
class Point
{
    // il faut d'ajouter le type protegee pour accede a x et y
    protected:
//    private:
      double x;
      double y;
   // protected:
       string nom;
   public:
    Point(double x=0,double y=0,string nom=""){
        this->x=x;
        this->y=y;
        this->nom=nom;
    }
    double getx(){
        return this->x;
    }
    void setx(double x){
        this->x=x;
    }
    double gety(){
        return this->y;
    }
    void sety(double y){
        this->y=y;
    }
    string getnom(){
        return this->nom;
    }
    void setnom( char nom){
        this->nom=nom;
    }
    void afficher(){
        cout<<"le nom est:"<<this->nom<<endl;
        cout<<"la valeur de x est:"<<this->x<<endl;
        cout<<"la valeur de y est:"<<this->y<<endl;

    }
};

class PointCouleur:public Point
{
   private:
      unsigned int couleur;
   public:
    PointCouleur(unsigned int couleur=0,double x=0,double y=0,string nom=""){
           this->couleur=couleur;
           this->x=x;
           this->y=y;
           this->nom=nom;
           
    }
   unsigned int getcouleur(){
    return this->couleur;
    
   }
   void setcouleur(unsigned int couleur=0){
     this->couleur=couleur;
     
   }
   void afficher(){
      cout<<"le couleur est:"<<this->couleur<<endl;
      cout<<"le nom est:"<<this->nom<<endl;
      cout<<"la valeur de x est:"<<this->x<<endl;
      cout<<"la valeur de y est:"<<this->y<<endl;
   }

};
int main(){
    Point p (12,33,"point A");
    p.afficher();
    PointCouleur p1(34,25,27,"point B");
    p1.afficher();

    return 0;
}
