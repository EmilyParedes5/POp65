#include <iostream>
using namespace std;
void notadeberes(double n1){
    do{
        cout<<"Ingrese nota en deberes: ";
        cin>>n1;
        if(n1>10 or n1<1){
            cout<<"Error limite de 10 puntos\n";
        }
    }while(n1>10 or n1<1);
}

void notatrabajos(double n2){
    do{
        cout<<"Ingrese nota en trabajos: ";
        cin>>n2;
        if(n2>10 or n2<1){
            cout<<"Error limite de 10 puntos\n";
        }
    }while(n2>10 or n2<1);

}

void notapruebas(double n3){
    do{
        cout<<"Ingrese nota en pruebas: ";
        cin>>n3;
        if(n3>10 or n3<1){
            cout<<"Error limite de 10 puntos\n";
        }
    }while(n3>10 or n3<1);


}

void notaexamenes(double n4){

    do{
        cout<<"Ingrese nota en Examen: ";
        cin>>n4;
        if(n4>10 or n4<1){
            cout<<"Error limite de 10 puntos\n";S
        }
    }while(n4>10 or n4<1);
}

int main (){
    double n1,n2,n3,n4;
    double nfinal;
    notadeberes(n1);
    notatrabajos(n2);
    notapruebas(n3);
    notaexamenes( n4);

    nfinal=((n1+n2+n3+n4) /4);

    cout<<"la nota final es: "<<nfinal<<endl;

    if(nfinal >=7){
        cout<<"Aprobado";
    }else if(nfinal>=5 or nfinal<7){
        cout<<"Suspendido";
    }else if(nfinal >=1 or nfinal <5){
        cout<<"Reprobado";
    }

    return 0;
}
