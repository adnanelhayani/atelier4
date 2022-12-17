#include<iostream>
#include<set>
#include<vector>
#include<iterator>
using namespace std;
void affichage(set<int,greater<int>> s2){
     set<int,greater<int>>::iterator it;
    
    for(it=s2.begin();it!=s2.end();it++){
        cout <<*it<<" ";
    }

}
bool recherche(set<int,greater<int>> s3,int x){
  
    set<int,greater<int>>::iterator it;
    
    for(it=s3.begin();it!=s3.end();it++){
        if(*it==x){
            return true;
        //   cout<<"la valeur existe ";
        }  
    }
    for(it=s3.begin();it!=s3.end();it++){
        if(*it!=x){
            return false;
        //    cout<<"la valeur n'existe pas ";
        }   
    }
 return 0;
}
bool recherche_deux_set(set<int,greater<int>> s3,set<int,greater<int>> s4){
  
    set<int,greater<int>>::iterator it1,it2;
    
    for(it1=s3.begin();it1!=s3.end();it1++){
        for(it2=s3.begin();it2!=s3.end();it2++){
        if(*it1==*it2){
            return true;
        //   cout<<"la valeur existe ";
        } 
        } 
    }
     for(it1=s3.begin();it1!=s3.end();it1++){
        for(it2=s3.begin();it2!=s3.end();it2++){
        if(*it1!=*it2){
            return false;
        //    cout<<"la valeur n'existe pas ";
        }  
        } 
    }
 return 0;
}

bool recherche_deux_vector(vector<string> v1,vector<string> v4){
  
    vector<string>::iterator it1,it2;
    
    for(it1=v1.begin();it1!=v1.end();it1++){
        for(it2=v4.begin();it2!=v4.end();it2++){
        if(*it1==*it2){
            return true;
        //   cout<<"la valeur existe ";
        } 
        } 
    }
     for(it1=v1.begin();it1!=v1.end();it1++){
        for(it2=v4.begin();it2!=v4.end();it2++){
        if(*it1!=*it2){
            return false;
        //    cout<<"la valeur n'existe pas ";
        }  
        } 
    }
 return 0;
}



int main(){

    int x ;
    set<int,greater<int>> s1, s2;
    
    for (int i=1;i<=100;i++){
        
        s1.insert(i);
    }
      for (int i=1;i<=100;i++){
        
        s2.insert(i);
    }
    vector<string> v1,v2;
    v1.push_back("bonjour");
    v2.push_back("bonsoir");
    
   cout<<" les valeurs de la liste sont : ";
  affichage(s1);
  cout<<endl;
    cout<<"saisir la valeur a recherche :";
  cin>>x;
  cout<<"la valeur a recherche existe si le resultat est 1 et n'existe pas si 0: ";
  cout<<recherche(s1,x);
   cout<<endl;
   cout<<"les deux sets sont  les memes si le resultat est 1 et sont different si 0: ";
   cout<<recherche_deux_set(s1,s2);
   cout<<endl;
    cout<<"les deux vectors sont  les memes si le resultat est 1 et sont different si 0: ";
   cout<<recherche_deux_vector(v1,v2);
 
    return 0;
}
