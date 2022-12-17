#include<iostream>
#include<cstring>
using namespace std ;
void affichage (const string & temps){
    if (temps.length()!=12){
        cout << "la caine est incorrecte";
    }
    else{
        cout<<"Date :"<<temps.substr(0,2)<<"/"<<temps.substr(2,2)<<temps.substr(4,4)<<endl;
        cout<<"Heure :"<<temps.substr(8,2)<<"H "<<temps.substr(10,2)<<"min"<<endl;
    }
}

using namespace std ;
int main(){
     string date ;
     cout <<"siaire une date ";
     cin >>date;
     affichage(date);

    return 0 ;

}
