#include <iostream>
#include<list>
#include <iterator>
using namespace std;
void affichage (list <int> test){
    list<int>::iterator it ;
    for (it=test.begin();it !=test.end();it++){
        cout << *it <<"\t";
    }


}

int main(){
   int n ,m;
   cout <<" donne la taile de liste :";
   cin>>n;

 list <int> list1;
  for (int i =0;i<n;i++ ){
    cout <<" saisir des entiers :";
     cin>>m;
    list1.push_back(m);
  }
  cout<<"la liste avant le trier:  "<<endl;
affichage(list1);

 // trier la liste dans l'oreder crissente
list1.sort();
cout<<endl;
cout<<"la liste apres le trier:  "<<endl;
affichage(list1);

    return 0;

}
