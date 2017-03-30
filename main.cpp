#include <iostream>

using namespace std;

/*int main()
{
    int c=4;
    cout<<c++;
    cout<<++c;


    return 0;
}*/
/*int main(){
    int a=2,b=3,z;
    if(a>b)
        z=a;
        cout<<z<<endl;
    else
        z=b;
        cout<<z;
    z=(a>b)?a:b;



    return 0;
}*/
/*int main(){
    int score[10];
    int c=0;


    cin>>score[0];
    cin>>score[1];
    cin>>score[2];
    cin>>score[3];
    cin>>score[4];

    cout<<score[0]<<endl;
    cout<<score[1]<<endl;
    cout<<score[2]<<endl;
    cout<<score[3]<<endl;
    cout<<score[4]<<endl;

    return 0;

}*/

/*int main(){
    int score[10];
    int c=0;


    cin>>score[c++];
    cin>>score[c++];
    cin>>score[c++];
    cin>>score[c++];
    cin>>score[c++];

    cout<<score[--c]<<endl;
    cout<<score[--c]<<endl;
    cout<<score[--c]<<endl;
    cout<<score[--c]<<endl;
    cout<<score[--c]<<endl;

    return 0;

}*/

int main(){
    int score[3];

    cin>>score[0];
    cin>>score[1];
    cin>>score[2];

    int c;
    c=score[0];
    score[0]=score[2];
    score[2]=c;

    cout<<score[0]<<endl;
    cout<<score[1]<<endl;
    cout<<score[2]<<endl;

    return 0;
}















