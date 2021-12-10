#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    unsigned short num, N;
    long double N1,N2;
    long long pot=0,i=1;
    float pi=3.1416;
    int n,cont=0;


    cout << "Ingrese el Numero del Problema a Ejecutar" << endl;
    cin >> num;

    switch (num) {

         case 2:
            cout << "Ingrese un Numero";
            cin>>N;
            if (N%2==0)cout << "Es par ";
            else cout << "Es impar ";
        break;
     //----------------------------------------------------------
         case 4:
        cout << "Ingrese el primer Numero";
        cin>>N1;
        cout << "Ingrese el Segundo Numero";
        cin>>N2;
        if (N1<N2)cout << "El Menor es "<<N1;
        else if (N2<N1) cout << "El Menor es "<<N2;
        else cout<< "Son iguales";
        cout<< endl;

        break;
    //----------------------------------------------------------
        case 6:

        int A,B;
        cout << "Ingrese el primer Numero";
        cin>>A;
        cout << "Ingrese el Segundo Numero";
        cin>>B;
        pot=A;

        if (B==0 && A<0) cout << A<<"**"<<B<<"="<<-1<< endl;
        else if (B==0) cout << A<<"**"<<B<<"="<<1<< endl;
        else if (B==-1) cout << A<<"**"<<B<<"="<<(1/A)<< endl;
        else {
        while (i<B){//Ciclo para calcular la potencia de el numero A a la B
          pot *= A;
         i+=1;
        }
        cout << A<<"**"<<B<<"="<<pot<< endl;
        }

       break;
    //----------------------------------------------------------
    case 8:

        cout << "Ingrese un Numero";

        cin>>n;

        pot=1;

        if (n<0) cout << "NO es posible calcular"<< endl;
        else {
            while (i<=n){
             pot *= i;
             i+=1;
             }
          cout << n<<"!"<< "="<<pot <<endl;
        }

       break;
    //----------------------------------------------------------
     case 9:
    cout<<"Ingrese el radio del Circulo";
    cin>>N;
    cout<<"Area: "<<pi*(N*N)<<endl;
    cout<<"Perimetro: "<<2*pi*N<<endl;

           break;
    //----------------------------------------------------------
    case 10:
        cout << "Ingrese un Numero";
        cin >>N;
        for(unsigned short i=1;N*i<=100;i=i+1) cout << N*i<<endl;
        //unsigned short i=1;
        //while (N*i<=100){
          //  cout << N+i <<endl;
            //i = i+1;
        //}
       break;
    //----------------------------------------------------------
    case 12:


        cout << "Ingrese un Numero";
        cin>>n;
        pot=n;
        B=1; //potencias y a al vez condicion del ciclo externo
        //for (unsigned short B=1;B==5;B++){
        while (B<=5){

        while (i<B){ //Ciclo para calcular la potencia de el numero n a la B(1,2,3,4,5)
          pot *= n;
         i+=1;
        }
        cout << n<<"**"<<B<<"="<<pot<< endl;
        B+=1;
        }

       break;
    //----------------------------------------------------------
    case 14:

    //for(1;50;1){
       while (i<=50){
        cout <<i<<"   "<<50-(i-1)<<endl;
        i+=1;
    }

       break;
    //----------------------------------------------------------
    case 16:
        N=0; //Switche para detener el ciclo xd
       i=0;
        cout<<"Ingrese Numeros y para terminar ingrese el 0 (cero)."<<endl;

        while (N==0){

            cin>>n;
            pot+=n;

        if (n==0) N=1;
        else {
            i+=1;
            }
        }
        if (i==0) cout<<"No se ingresaron Numeros"<<endl;
        else{
        cout<<"El promedio es: "<<float(pot/i)<< endl;
            }

       break;
    //----------------------------------------------------------
    case 18:

        cout << "Ingrese un Numero";
        cin>>n;

        while(cont<=n){
            pot=cont;
            pot *=pot;
            if (pot==n){
            //cout<<pot<<"es un cuadrado perfecto y su raiz cuadrada es: "<<cont<<endl;
                cout <<n<< " es un cuadrado perfecto. "<<endl;
            break;
                  }

            cont+=1;
            if ((pot!=n & cont==n/2)){
                cout <<n<< " NO es un cuadrado perfecto. "<<endl;
            }
        }

       break;
    //----------------------------------------------------------
    case 20:

        cout<<"Ingrese el Numero"<<endl;
        cin>>n;

      //  cout<<n[3]<<endl;


       break;
    //----------------------------------------------------------
    case 22:

        cout<<"Ingrese la cantidad entera de Segundos"<<endl;
        cin>>n;

        int hh,mm,ss;
        hh=(n/3600);
        mm=((n%3600)/60);
        //ss=((n%3600)&60);
        ss=n-((hh*3600)+(mm*60));
        cout<<hh<<":"<<mm<<":"<<ss<<endl;

       break;
    //----------------------------------------------------------
    case 24:
        cout << "Ingrese la dimension de Cuadro";
        cin>> N;
        for(unsigned short fil=0;fil<=N-1;fil=fil+1){
            for(unsigned short col=0;col<N;col=col+1){
                if (fil==0 || col==0 || fil==N-1 || col == N-1)cout<<'+';
                else cout<<' ';
            }
            cout<< endl;
        }

       break;
    //----------------------------------------------------------
    case 26:

       break;
    //----------------------------------------------------------
        case 28:

       break;
     //----------------------------------------------------------
        case 30:
        cout<<"Ingrese un Numero"<<endl;
        cin>>n;

        int valor;
        bool adi = false;
        valor = rand() % 100;
        //cout<<valor<<endl;

        while (adi==false){

            if(n==valor){
                cout<<"!!ADIVINASTE!! "<<"El numero era "<<valor<<endl;
                cout<<i<<"Intentos"<<endl;
                adi=true;
                }
            else if(n<valor){
                cout<<n<<" Es MENOR que el Numero a adivinar"<<endl;
                cout<< "ingrese otro Numero"<<endl;
                cin>>n;
                }
            else if(n>valor){
                cout<<n<<" Es MAYOR que el Numero a adivinar"<<endl;
                cout<< "ingrese otro Numero"<<endl;
                cin>>n;
                }
        i+=1;
        }


         break;



    }
    return 0;
}
