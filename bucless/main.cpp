#include <iostream>
using namespace std;

int main()
{
    int z;
    int a=5,b=4;
    while(a>b){

        cout<<a<<" "<<b;
        a++;
        b++;

    }
    z=(a>b)? a:b;
    return 0;
}
int main()
{
    int a=0;
    for(int i=0;i<10;i++){
        cout<<a<<" "<<i<<endl;
    }
    return 0;
}


int main(){
    int tam,temp;
    cout<<"tamaño:";
    cin>>tam;

    int arreglo[tam];
    for(int i=0;i<tam;i++){
        cin>>arreglo[i];
    }
    for(int i=0, j=tam-1;i<j;i++,j--){
        temp=arreglo[i];
        arreglo[i] = arreglo[j];
        arreglo[j] = temp;
    }
    for(int i=0;i<tam;i++){
        cout<<arreglo[i];
    }
    return 0;
}


//100 primeros numeros primos
int main()
{
    int i=3, contador=1,n,f,d=2;
    cout<<"ingrese cantidad:"<<endl;
    cin>>n;
    cout<<d;
    while(contador<n){
        f=0;
        for(int j=2;j<=i/2;j++)
            if(i%j==0)
            {
                f=1;
            }
        if(f==0)
        {
            cout<<","<<i;
            contador++;
        }
        i++;
    }
    return 0;
}


//suma de elementos de un array
int main(){
    int array[5]={1,2,3,4,5};
    int suma=0;
    for(int i=0; i<5;i++){
        suma=suma+array[i];
    }
    cout<<"la suma de los elementos es: "<<suma<<endl;
    return 0;
}


//mayor numero de un array
int main(){
    int array[5]={1,277,5,85,99};
    int i=0;
    int mayor = array[i];

    while(i<=4){
        if(mayor<array[i]){
            mayor=array[i];
        }
        i=i+1;
    }
    cout<<"el mayor numero es : "<<mayor;
}

