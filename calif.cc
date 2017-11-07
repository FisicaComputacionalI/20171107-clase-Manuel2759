#include <iostream>
using namespace std;
int main(){
  int exam;
  int part;
  int tar;
  float res;
  char variable;
  cout<<"introduce la calificacion de tu examen (max.10)"<<endl;
  cin>>exam;
  cout<<"introduce el numero de participaciones realizadas en clase (max.10)"<<endl;
  cin>>part;
  cout<<"introduce el numero de tareas entregadas (max.10)"<<endl;
  cin>>tar;
  cout<<"Si la calificacion de tu examen es menor a 8 elegir (A), y si es mayor o igual a 8 elegir (B)"<<endl;
  cin>>variable;

  switch (variable){
  case 'A' : res=(0.7)*exam + (0.15)*part + (0.15)*tar;
    cout<<"Tu calificacion final es "<<res<<endl;
    break;
  case 'B' : if(tar=0 && part=0){
      cout<<"Tu calificacion final es "<<exam<<endl;
      break;}

    break;
  default: cout<<"Vuelve a intentarlo"<<endl;
  }
    return 0;
  }
