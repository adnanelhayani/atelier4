#include<iostream>
#include<string>
#include<list>

using namespace std;
void affichage (list <string> test){
    list<string>::iterator it ;
    for (it=test.begin();it !=test.end();it++){
        cout << *it <<endl;;
    }


}
int main(){

list <string> list2;
string val ;



 for (int i =0 ; i<50  ;i++ ){
cout <<"saisir votre nom prenom et l age   :";


getline(cin, val);
if (val.size() == 0)
break;
list2.push_back(val);
}
affichage(list2);
cout << endl;
list2.sort();
affichage (list2);
    return 0;
}
