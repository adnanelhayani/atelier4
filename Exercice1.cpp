#include<iostream>
#include<Cmath>
using namespace std;


class complex
{
private:
    int re;
    int im;

public:
    complex(int re=0, int im=0){
          this->re=re;
          this->im=im;

    }
  
    void afficher(){
        cout << re;
        if (im >= 0){
           cout << " + ";
        cout << im << "i" << endl;
         } 
         else{
            cout << im << "i" << endl;
         }
    }
    complex operator+(complex a){
       complex sum;
       sum.re = re + a.re;
       sum.im = im + a.im;
       return sum;

    }
        complex operator-(complex a){
       complex sum;
       sum.re = re - a.re;
       sum.im = im - a.im;
       return sum;

    }
       complex operator*(complex a){
       complex sum;
       sum.re = re * a.re;
       sum.im = im * a.im;
       return sum;

    }
           complex operator/(complex a){
       complex sum;
         
       sum.re =((((re)*a.re))+((im)*(a.im)))/(pow(a.re,2)+pow(a.im,2));
       sum.im = (((a.re)*(im))+((re)*(a.im)))/(pow(a.re,2)+pow(a.im,2));
       return sum;

    }


    

};
int main(){

 float re1, im1;
cout << "Premier nombre "<<endl;
cout << "Entrez la partie reelle: ";
cin >> re1;
cout << "Entrez la partie imaginaire: ";
cin >> im1;
 complex e(re1,im1);
  float re2, im2;
cout << "deusieme nombre "<<endl;
cout << "Entrez la partie reelle: ";
cin >> re2;
cout << "Entrez la partie imaginaire: ";
cin >> im2;
 
  complex e2(re2,im2);
  complex d ;
  d=(e+e2);
  cout<<"la somme de deux nbr complex est: ";
  d.afficher();
   d=(e-e2);
   cout<<"la soustraction de deux nbr complex est: ";
   d.afficher();
   d=e*e2;
   cout<<"la divesion de deux nbr complex est: ";
   d.afficher();
   d=e/e2;
   cout<<"la multiplication de deux nbr complex est: ";
   d.afficher();

return 0;
}
