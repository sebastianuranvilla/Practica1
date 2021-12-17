#include <iostream>
#include <cstdlib>
using namespace std;


/*bool espalindromo(string cadena, int size){
    for (int i = 0; i<size/2;i++)
        return false;
    return true;
}*/

int main()
{
    unsigned short num, N;
    long double N1,N2;
    long long pot=0,i=1;
    float e,pi=3.1416;
    int A,B,a,b,c,n,cont=0;
    bool adi = false;


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

        //int A,B;
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
            if ((pot!=n && cont==n/2)){
                cout <<n<< " NO es un cuadrado perfecto. "<<endl;
            }
        }

       break;
    //----------------------------------------------------------
    case 20:
       A=1;
       B=0;
       cout<<"Ingrese el Numero"<<endl;
       cin>>n;
       N1=n;

       while (A>0){
       A= N1/10;
       B = (10*B)+(N1-(A*10));
       N1 = A;
    }
       if (B==n) cout <<n<<" es un numero palindromo."<<endl;

       else cout<<n<<" NO es un numero palindromo."<<endl;

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

        //unsigned a,b,c;
        cout << "Ingrese el Primer Numero"<<endl;
        cin>>a;
        cout << "Ingrese el Segundo Numero"<<endl;
        cin>>b;
        cout << "Ingrese el Tercer Numero"<<endl;
        cin>>c;

        if ((a+b>c) || (a+c>b) || (b+c>a)) cout<<"Las longitudes ingresadas no forman un triangulo."<<endl;
        else if (a==b && a==c) cout << "Se forma un triangulo equilatero."<<endl;
        else if ((a==b && a!=c) || (a==c && a!=b) || (b==c && c!=a)) cout << "Se forma un triangulo isosceles."<<endl;
        else if ((a!=b && a!=c && b!=c)) cout << "Se forma un triangulo escaleno."<<endl;


       break;
    //----------------------------------------------------------
        case 28:
        pi=0;
        cout << "Ingrese el Numero de terminos";
        cin>>n;

        for(short i=0;i<n;i++){
            if(i%2==0) pi += 1.0/(2*i+1);
            else pi -= 1.0/(2*i+1);
        }
        cout <<"pi es aproximadamente:"<<4*pi<< endl;

       break;
     //----------------------------------------------------------
        case 30:
        cout<<"Ingrese un Numero"<<endl;
        cin>>n;

        int valor;
        //bool adi = false;
        srand(time_t(NULL));
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

       //----------------------------------------------------------
            case 32:

    {
        int b50,b20,b10,b5,b2,b1,m500,m200,m100,m50,fal;

        cout<<"Ingrese un Numero"<<endl;
        cin>>n;

        b50 = n/50000;
        b20 = (n%50000)/20000;
        b10 = ((n%50000)%20000)/10000;
        b5 = (((n%50000)%20000)%10000)/5000;
        b2 = ((((n%50000)%20000)%10000)%5000)/2000;
        b1 = (((((n%50000)%20000)%10000)%5000)%2000)/1000;
        m500 = ((((((n%50000)%20000)%10000)%5000)%2000)%1000)/500;
        m200 = (((((((n%50000)%20000)%10000)%5000)%2000)%1000)&500)/200;
        m100 = ((((((((n%50000)%20000)%10000)%5000)%2000)%1000)%500)%200)/100;
        m50 = (((((((((n%50000)%20000)%10000)%5000)%2000)%1000)%500)%200)%100)/50;
        fal = n-((b50*50000)+(b20*20000)+(b10*10000)+(b5*5000)+(b2*2000)+(b1*1000)+(m500*500)+(m200*200)+(m100*100)+(m50*50));
        cout<<fal<<endl;

        cout<<"50000 : "<<b50<<endl;
        cout<<"20000: "<<b20<<endl;
        cout<<"10000 : "<<b10<<endl;
        cout<<"5000: "<<b5<<endl;
        cout<<"2000 : "<<b2<<endl;
        cout<<"1000: "<<b1<<endl;
        cout<<"500 : "<<m500<<endl;
        cout<<"200: "<<m200<<endl;
        cout<<"100 : "<<m100<<endl;
        cout<<"50: "<<m50<<endl;
        cout<<"Faltante: "<<fal<<endl;
    }

           break;
       //----------------------------------------------------------

        //----------------------------------------------------------
             case 34:

        cout << "Ingrese el Primer Numero"<<endl;
        cin>>a;
        cout << "Ingrese el Segundo Numero"<<endl;
        cin>>b;
        if (a/100 >=24 || a%100>=60) cout<<a<<" es un tiempo invalido."<<endl;
        else if (b/100 >=24 || b%100>=60) cout<<b<<" es un tiempo invalido."<<endl;
        else {
            hh=((a/100)+(b/100));
            mm=(a%100)+(b%100);
            if (mm>=60){
                hh += mm/60;
                 mm = (mm%60);
                }
             cout<<hh<<mm<<endl;

        }

            break;
        //----------------------------------------------------------
        //----------------------------------------------------------
             case 36:

        //la variable pot es el factorial
        //int fact;
      e=0;
      cout << "Ingrese el Numero de terminos";
      cin>>A;
      pot=1;
      for(short p=0;p<A;p++){

         //88888888888888888888888888
        n=p;
        while (i<=n){
          pot *= i;
          i+=1;
          }
        e += 1.0/pot;
        //88888888888888888888888888
      }
        cout <<"e es aproximadamente: "<<e<< endl;

            break;
        //----------------------------------------------------------
        //----------------------------------------------------------
             case 38:

        cout << "Ingrese el Primer Numero"<<endl;
        cin>>a;
        cout << "Ingrese el Segundo Numero"<<endl;
        cin>>b;
        cout << "Ingrese el Tercer Numero"<<endl;
        cin>>c;
            A=0;
            B=0;
        for(unsigned short i=1;a*i<c;i=i+1){
            A += a*i;
            cout << a*i<<" + ";
        }
        for(unsigned short i=1;b*i<c;i=i+1){

            if ((b*i)%a!=0){
                B += b*i;
                if ((c/(b*i))==1){
                cout << b*i<<" = ";
                    }
                else cout << b*i<<" + ";
                }
            }
            cout<<A+B<<endl;

            break;
        //----------------------------------------------------------
        //----------------------------------------------------------
         case 40:

            cout<<"Ingrese un Numero"<<endl;
            cin>>a;
            c=0;

            while (c!=a){

                n=i;
                A=0;
                cont=0;
                while (A<=n){
                    A+=1;
                    if (n%A==0){cont+=1;}
                    }

                if (cont==2){c+=1;}
                i+=1;
            }

            if ((a/c)==1){cout <<"El primo numero "<<a<<" es: "<<n<<"."<<endl;}

            break;
        //----------------------------------------------------------
        //----------------------------------------------------------
             case 42:

        cout << "Ingrese un Numero"<<endl;
        cin>>a;

        b=0;
        while (i<=a){

            n=i;
            A=0;
            cont=0;
            if(n==2 || n%2!=0){
                while (A<=n){
                    A+=1;
                    if (n%A==0){cont+=1;}
                    }
                //if (cont==2){cout<<n<<" es PRIMO"<<endl;}
                if(a%n==0){
                    if(n>b && n<a && n!=1){
                    b=n;
                    cout<<n<<" es PRIMO"<<endl;}
                }

            }
            i+=1;

        }
        if (b==0){cout<<a<<" NO tiene factor primo."<<endl;}
        else cout<<"El mayor factor primo de "<<a<<" es: "<<b<<"."<<endl;


            break;
        //----------------------------------------------------------
        //----------------------------------------------------------
             case 44:

        c=0;
        a=0;
        b=0;
        e=0;
        for(unsigned short f=100;f<=999;f++){
            for(unsigned short i=100;i<=999;i++){

                A=1;
                B=0;
                n=f*i;
                N1=n;

                while (A>0){
                A= N1/10;
                B = (10*B)+(N1-(A*10));
                N1 = A;
                    }
                if (B==n){
                    if(n>c){ c=n,a=f,b=i;}
                        }
                    //cout <<n<<" es un numero palindromo."<<f<<"*"<<i<<endl;}

                //else cout<<n<<" NO es un numero palindromo."<<endl;
                e+=100.0/(899.0*899.0);
                cout<<"Cargando..."<<e<<"%"<<endl;
            }

           }
        cout<<endl;
        cout << a<< "*"<<b<<"="<<c<<endl;

          break;
        //----------------------------------------------------------
        //----------------------------------------------------------
             case 46:

        cout << "Ingrese un Numero"<<endl;
        cin>>n;

        a=0;
        b=0;
        for(unsigned short f=1;f<=n;f++){
            c=f;//elemento
            cont=0;
            //cout<<"para la semilla "<<f<<": ";
            while (c>=1){
                //if (c==1)cout<<c<<endl;
                //else cout<<c<<", "; //debo hacer la correccion de la ultima , con el 1
                if (c%2==1 && c!=1 ){c=3*c+1; cont+=1;}
                else {c=c/2; cont+=1;}
            }
            if (cont>b){b=cont; a=f;}
        }

        cout<<"La serie mas larga es con la semilla: "<<a<<", teniendo "<<b<<" terminos."<<endl;

        //Repito el codigo para imprimir la serie despues de encontar la mas larga.
        c=a;//elemento de la serie mas larga.
        cout<<"para la semilla "<<a<<": ";
        while (c>=1){
            if (c==1)cout<<c<<endl;
            else cout<<c<<", ";
            if (c%2==1 && c!=1 )c=3*c+1;
            else c=c/2;
        }

            break;
        //----------------------------------------------------------

    }
    return 0;
}
