#include <iostream>

using namespace std;

//1
/*int main()
{
    cout << "***Conversion de millas a kilometros***" << endl;
    float n, k=1000, milla=1.609;
    cout <<"ingrese la cantidad de millas que desea convertir:";
    cin>>n;
    cout<<n<<" millas equivale a :"<<n*milla<<" kilometros ";

    return 0;
}*/

//2
/*
int main()
{
    cout << "***TABLA DE GRADOS F° y C°***" << endl;
    cout<<"F°"<<"    "<<"C°"<<endl;
    float f,c;
    int a=0;
    for(f=0;f<=300;f=f+20){
        //cout<<f<<"     "<<c<<endl;

        c=(f-32)*5/9;
        cout<<f<<"    "<< c<<endl;
    }
    return 0;
}*/

//3
/*
int main()
{

    cout<<"----Verificar si el numero es par o impar----"<<endl;
    int n;
    cout<<"ingrese un numero: ";
    cin>>n;

    while(n!=-1){
        if(n%2==0){
            cout<<"es par"<<endl;
        }else{
            cout<<"es impar"<<endl;
        }
        cout<<"ingrese un numero: ";
        cin>>n;
    }
    return 0;
}*/

/*
//4
int potencia(int a,int b)
{
    int sol=1;
    for(int i=0; i<b;i++){sol=sol*a;}
    return sol;
}
int main()
{
    int a, b ;
    cout<<"ingrese la base: ";cin>>a;
    cout<<"ingrese el exponente: ";cin>>b;
    cout<<"potencia : "<<potencia(a,b);
}*/


//5
/*int main()
{
    int numero;
    cout<<"ingrese un numero del 0 al 9 : ";cin>>numero;

    while(numero!=-1){
        switch(numero){

        case 0:
            cout<<"cero"<<endl;
            break;
        case 1:
            cout<<"uno"<<endl;
            break;
        case 2:
            cout<<"dos"<<endl;
            break;
        case 3:
            cout<<"tres"<<endl;
            break;
        case 4:
            cout<<"cuatro"<<endl;
            break;
        case 5:
            cout<<"cinco"<<endl;
            break;
        case 6:
            cout<<"seis"<<endl;
            break;
        case 7:
            cout<<"siete"<<endl;
            break;
        case 8:
            cout<<"ocho"<<endl;
            break;
        case 9:
            cout<<"nueve"<<endl;
            break;
        default:
            cout<<"numero no permitido"<<endl;
            break;

        }
        cout<<"ingrese un numero del 0 al 9 : ";cin>>numero;

    }
}*/



/*//6
int main(){
    cout<<"ingrese una operacion:";
    char operacion;
    cin>>operacion;
    switch(operacion){
    case '+':
        cout<<a+b<<endl;
        break;


    case '*':
        cout<<a*b<<endl;
    default:
        cout<<"operacion incorrecta";
        break;
    }
}*/

//15. Escriba una función que evalue una cadena de caracteres y retorne true si la cadena representa un palindrome y false en caso contrario.
int palindrome(char palabra)
{
    if(palabra[0]==palabra[-1]){
        return true;
    }else{
        return false;
    }
}
int main()
{
    char palabra;
    cout<<"ingrese palabra  ";cin>>palabra;
    cout<< palindrome(palabra);
}
