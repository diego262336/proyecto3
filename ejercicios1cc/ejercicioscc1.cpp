#include <iostream>

using namespace std;

//1
/*int main()
{
    cout << "***Conversion de millas a kilometros***" << endl;
    float n, k=1000, milla=1.609;
    cout <<"ingrese la cantidad de millas que desea convertir:";
    cin>>n;
    cout<<n<<" millas equivale a :"<<n*milla ;

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
}
*/
/*
//5
int main()
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
}
*/

/*
//6
int main(){
    int a=50,b=5;
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

//7
/*
void intercambio(int &a,int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
}

int main()
{
    int a=2,b=3;
    cout<<"el valor de a="<<a<<"el valor de b="<<b<<endl;
    intercambio(a,b);
    cout<<"el nuevo valor de a="<<a<<"el nuevo valor de b="<<b<<endl;
    return 0;
}*/

//8
/*
void intercambio_con_puntero(int *ap, int *bp)
{
    int s;
    s=*ap;
    *ap=*bp;
    *bp=s;
}
int main()
{
    int a=2,b=3;
    cout<<"el valor de a="<<a<<"el valor de b="<<b<<endl;
    intercambio_con_puntero(&a,&b);
    cout<<"el nuevo valor de a="<<a<<"el nuevo valor de b="<<b<<endl;
    return 0;
}
*/


//9
/*void insertSort(int arr[], int length);
void imprimir(int arreg[],int tam);

int main()
{
    int arreg[] = {4,6,3,7,5,9,2,8,1,10};
    insertSort(arreg,10);
    imprimir(arreg,10);
    return 0;
}
void insertSort(int arr[], int length)
{
    int j,tmp;
    for (int i = 1; i < length; i++) {
        j = i;
        while ( j > 0 && arr[j - 1] > arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }
    }
}
void imprimir(int arreg[], int tam)
{
    for (int j = 0; j < tam; j++)
    {
        cout << arreg[j];
    }
}

//10


//11




//12
/*int *reversa(int arreg[],const int lenght)
{
    int temp;
    for(int i=0,j=lenght-1;i<j-1;i++,j--)
    {
        temp=arreg[i];
        arreg[i] = arreg[j];
        arreg[j] = temp;
    }
}
int main(){
    int lenght=3,arreg[3]={5,8,2};
    cout<<reversa(arreg, lenght);
    for(int i=0;i<lenght;i++){
        cout<<arreg[i];
    }

}*/

//13






//14
int sumar(int a[],int n)
{ 
    if(n==1) { 
        return a[0]; 
    }else{ 
        return a[n-1]+sumar(a,n-1); 
    }
}


//15.
bool palindrome(string cadena,int tam)
{
    if(cadena[0]!=cadena[tam-1])
        return false;
    return true;
}
int main()
{
    string cadena;
    
    cout<<"ingrese cadena: ";
    cin>>cadena;
    cout<<palindrome(cadena,5);


    return 0;
}
