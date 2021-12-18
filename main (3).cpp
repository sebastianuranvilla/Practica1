#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;



int main()
{
    int month;
    int day;
    unsigned short num, N;
    int  total1, X;
    int num1, num2, entero;
    bool primo = true;
    long double N1,N2;
    long long pot=0,i=1;
    float e,pi=3.1416;
    char palabra;
    int A,B,a,b,c,n,valor,cont=0;
    bool adi = false;
    int b50,b20,b10,b5,b2,b1,m500,m200,m100,m50,fal;
    int hh,mm,ss;
    int suma1, mod, x;
    int j = n - 1;
    int aux = 1;
    int count;
    int sum, MCM;
    int prime;
    int I;
    int k,a1;




    cout << "Ingrese el Numero del Problema a Ejecutar" << endl;
    cin >> num;

    switch (num) {
    case 1:
      cout << "ingrese primer numero: ";
      cin >> num1;
      cout << "ingrese segundo numero: ";
      cin >> num2;
      cout << "El residuo de la divion es: " << num1%num2  << endl;

    break;

//----------------------------------------------------------

         case 2:
            cout << "Ingrese un Numero";
            cin>>N;
            if (N%2==0)cout << "Es par ";
            else cout << "Es impar ";
        break;
 //----------------------------------------------------------
    case 3:

        cout << "Ingrese un primer numero: ";
        cin >> num1;
        cout << "Ingrese un segundo  numero: ";
        cin >> num2;
        if (num1 > num2) cout << "El numero mayor es: " << num1;
        else cout << "El numero mayor es: " << num2;
        cout <<  endl;

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
    case 5:

      float a, b, total;
      //float decimal;
      cout << "Ingrese un primer numero: ";
      cin >> a;
      cout << "Ingrese un segundo  numero: ";
      cin >> b;
      total = int((a/b)+0.5);
      cout   << "El total de la diviosn es: " << total;
      cout <<  endl;

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
    case 7:
      int conta, resultado, L;
      conta = 1;
      resultado = 0;
      cout << "Ingrese el numero N: ";
      cin >> L;
          while (conta <= L ) {
              resultado += conta;
              conta++;
          }
      cout  << "La sumatoria desde 0 hasta el "<< L <<  " es: " << resultado;
      cout <<  endl;


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
     float radio;
     float Pi, perimetro, area;
     Pi = 3.1416;
     cout << "Ingrese el radio: ";
     cin >> radio;
     perimetro = (2*Pi*radio);
     area = (Pi*(radio*radio));
     cout  << "Perimetro es : " << perimetro << endl;
     cout  << "Area es  :" << area  <<  endl;

     break;
//----------------------------------------------------------
    case 10:
        cout << "Ingrese un Numero";
        cin >>N;
        for(unsigned short i=1;N*i<=100;i=i+1) cout << N*i<<endl;

       break;
    //----------------------------------------------------------
    case 11:
      int numero;
      cout << "Ingrese un numero: "; cin >> numero;

      for (int i=1;i<=10 ;i++ ) {
          cout << numero << "X" << i << "=" << numero*i << endl;

      }

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
    case 13:
      int divisor, c;
      c=0;
      cout << "Ingrese un numero: "; cin >> divisor;
      cout << "Sus divisores son: "<< endl;
      for (int i=1; i<=divisor; i++ ) {
          if(divisor%i==0){cout << i << " " << endl;
              c++;
              }

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
    case 15:
      int  suma;
      suma = 0;
      do {
          cout << "Ingresa numero entero ";
          cin >> entero;
          suma = suma + entero;

      } while (entero != 0);
       cout << "El resultado de la sumatoria es : " << suma << endl;

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
    case 17:
        int max, min;
        min = 0;
        max = 0;
        do {
            cout << "Ingresa numero entero ";
            cin >> entero;
            if (entero > max )max = entero;
            else if(entero < min) min = entero;

        } while (entero != 0);
         cout << "El numero mayor fue : " << max << endl;
         cout << "El numero menor fue : " << min << endl;

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
    case 19:

       cout << "Ingresa numero entero ";
       cin >> entero;
       for (int i = 2; i < entero ; i++ ) {
           if(entero % i == 0) primo = false;

       }

       if (primo == true) cout << entero <<  " es un numero primo." << endl;
       else cout << entero <<  " NO es un numero primo." << endl;

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
    case 21:
       unsigned char letra;
       cout << "ingrese letra: ";
       cin >> letra;
       if (letra >= 65 && letra <= 90) letra += 32;
       else if(letra >= 97 && letra <= 122) letra -= 32;
       cout << "Letra convertida: " << letra << endl;


      break;

//----------------------------------------------------------
    case 22:

        cout<<"Ingrese la cantidad entera de Segundos"<<endl;
        cin>>n;

        //int hh,mm,ss;
        hh=(n/3600);
        mm=((n%3600)/60);
        //ss=((n%3600)&60);
        ss=n-((hh*3600)+(mm*60));
        cout<<hh<<":"<<mm<<":"<<ss<<endl;

       break;
    //----------------------------------------------------------
    case 23:
     long n1, n2;
     long maximo;
     long i;

     cout << "Ingrese numero: ";
     cin >> n1;
     cout << "Ingrese numero: ";
     cin >> n2;

     maximo = n1;

     if ( n2 > maximo )
         maximo = n2;

     i = maximo;
     while ((i % n1 != 0) || (i % n2 != 0))
         i++;

     cout << i << endl;

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
    case 25:
     X = 0;
     cout << "Ingrese Numero: ";
     cin >> n;
     total1 = n;
     while (total1 != 0) {
         total1 = total1 / 10;
         X++;

     }
     cout << n << " tiene " << X << " digitos." << endl;

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

        if ((a+b<=c) || (a+c<=b) || (b+c<=a)) cout<<"Las longitudes ingresadas no forman un triangulo."<<endl;
        else if (a==b && a==c) cout << "Se forma un triangulo equilatero."<<endl;
        else if ((a==b && a!=c) || (a==c && a!=b) || (b==c && c!=a)) cout << "Se forma un triangulo isosceles."<<endl;
        else if ((a!=b && a!=c && b!=c)) cout << "Se forma un triangulo escaleno."<<endl;


       break;
 //----------------------------------------------------------
    case 27:
     char operador;
     cout << "Ingrese primer numero: ";
     cin >> num1;
     cout << "Ingrese operador: ";
     cin >> operador;
     cout << "Ingrese segundo numero: ";
     cin >> num2;
     if(operador == 43) cout << "La suma es: " << num1 + num2 << endl;
     else if(operador == 45) cout << "La resta es: " << num1 - num2 << endl;
     else if(operador == 42) cout << "La multiplicacion es: " << num1 * num2 << endl;
     else if(operador == 47) cout << "La division es: " << num1 / num2 << endl;

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
    case 29:
     int max1, min1, num3;
     char compara;
     max1 = 101;
     min1 = 1;


     do {
         srand(time(NULL));
         num3 = min1+rand()%(max1-min1);
         cout << "Digite si el numero es Mayor, Menor o Igual a: " << num3 << endl;
         cin >> compara;
         if (compara == 62) min1 = num3;
         else if (compara == 60) max1 = num3;

     } while (compara != 61);

     cout << "Su numero es: " << num3 << endl;



    break;
//----------------------------------------------------------

        case 30:
        cout<<"Ingrese un Numero"<<endl;
        cin>>n;
        i=1;

        //int valor;
        //bool adi = false;
        srand(time(NULL));
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
    case 31:

    {cout<< "Problema 1" << endl << "Ingrese un caracter para identificar si es vocal, consonante o ninguna: ";
    cin >> palabra;
    if ((palabra>64 && palabra<91) || (palabra>96 && palabra<123))
    {
        if (palabra == 97 || palabra ==101 || palabra == 105 || palabra == 111 || palabra == 117 || palabra == 65 || palabra == 69 || palabra == 73 || palabra == 79 || palabra == 85)
        {
            cout << palabra << " es una vocal" << endl;
        }

        else
        {
            cout<< palabra <<" es una consonante"<<endl;
        }
    }
    else

    {
        cout<<"no es una letra"<<endl;
    }


   break;
    }

//----------------------------------------------------------
            case 32:

    {
        //int b50,b20,b10,b5,b2,b1,m500,m200,m100,m50,fal;

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
        //cout<<fal<<endl;

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
    case 33:

        cout <<"ingrese un mes y luego el dia: ";
        cin>>month>>day;

        if(month<0 || month>12){

            cout<<month<<" - mes invalido";
        }
        else{

            if(month==2){
                if(day<29){
                    cout<<day<<"/"<<month<<" es una fecha valida"<<endl;
                    }
                 else if(day==29){
                    cout<<day<<"/"<<month<<" es valida en bisiesto"<<endl;
                    }
                else{
                    cout<<day<<"/"<<month<<" es una fecha invalida"<<endl;
                    }

            }
            else if(month==4 || month==6 || month==9 ||month==11){
                if (day<=30){
                    cout<<day<<"/"<<month<<" es una fecha valida"<<endl;
                }
                else{
                    cout<<day<<"/"<<month<<" es una fecha invalida"<<endl;
                }
             }
             else{
                if (day<=31){
                    cout<<day<<"/"<<month<<" es una fecha valida"<<endl;
                    }
                else{
                    cout<<day<<"/"<<month<<" es una fecha invalida"<<endl;

                }
            }
         }
    break;
        //----------------------------------------------------------
             case 34:

        cout << "Ingrese el Primer Numero"<<endl;
        cin>>A;
        cout << "Ingrese el Segundo Numero"<<endl;
        cin>>B;
        if (A/100 >=24 || A%100>=60) cout<<A<<" es un tiempo invalido."<<endl;
        else if (B/100 >=24 || B%100>=60) cout<<B<<" es un tiempo invalido."<<endl;
        else {
            hh=((A/100)+(B/100));
            mm=(A%100)+(B%100);
            if (mm>=60){
                hh += mm/60;
                 mm = (mm%60);
                }
             cout<<hh<<mm<<endl;

        }

            break;
        //----------------------------------------------------------
    case 35:

        x = 1;
        do {
        cout << "Problema 5" << endl << "Ingrese un numero entero impar para generar un rombo: ";
        cin >> num;
        }while(num%2==0);

        for (int row = 0; row >= 0; row += x){
            for (int columna = 0; columna < num; columna++) {

                if (columna >= num/2 - row && columna <= num/2 + row) cout << "*";
                else cout << " ";

            }
            if (row==3) x=-1;

            cout << endl;
        }

    break;
  //----------------------------------------------------------
     case 36:

      e=0;
      i=1;
      cout << "Ingrese el Numero de terminos";
      cin>>A;
      pot=1;
      for(short p=0;p<A;p++){


        n=p;
        while (i<=n){
          pot *= i;
          i+=1;
          }
        e += 1.0/pot;

      }
        cout <<"e es aproximadamente: "<<e<< endl;

            break;
        //----------------------------------------------------------
    case 37:

        cout << "Problema 7" << endl << "Ingrese un numero para encontrar la serie de Fibonacci menores a el: ";
           //int num;
           cin >> num;

          a = 0;
          I = 0;
          j = 1;

           while ((num > j) && (num > I))
           {
               I += j;
               j += I;
               if ((j % 2) == 0)
               {
                   a += j;
               }
               else if ((I % 2) == 0)
               {
                   a += I;
               }
           }
           if(((I % 2) == 0) && (I >= num))
           {
               a -= I;
           }
           if(((j % 2) == 0) && (j >= num)){
               a -= j;
               }

           cout << "El resultado de la suma es: " << a << endl;

    break;

        //----------------------------------------------------------
             case 38:
        //int a1,b1;

        cout << "Ingrese el Primer Numero"<<endl;
        cin>>a1;
        cout << "Ingrese el Segundo Numero"<<endl;
        cin>>b1;
        cout << "Ingrese el Tercer Numero"<<endl;
        cin>>c;
            A=0;
            B=0;
        for(unsigned short i=1;a1*i<c;i=i+1){
            A += a1*i;
            cout << a1*i<<" + ";
        }
        for(unsigned short i=1;b1*i<c;i=i+1){

            if ((b1*i)%a1!=0){
                B += b1*i;
                if ((c/(b1*i))==1){
                cout << b1*i<<" = ";
                    }
                else cout << b1*i<<" + ";
                }
            }
            cout<<A+B<<endl;

            break;
        //----------------------------------------------------------
    case 39:


       cout << "Problema 9" << endl << "Ingrese un numero para imprimir la suma de todos sus digitos elevados a si mismos: "<<endl;

       cin >> num1;
       suma1 = 0;
       mod = 0;
       x = 1;

       while(num1 > 10)
       {
           mod = num1 % 10;
           num1 /= 10;

           if (mod == 0)
           {
               suma1 += 1;
           }

           else
           {
               for(int count = 0; count < mod; count++)
               {
                   x *= mod;
               }
               suma1 += x;
               x = 1;
           }
       }
       x = 1;
       for(int j = 0; j < num1; j++)
       {
           x *= num1;
       }
       suma1 += x;
       cout << "El resultado de la suma es: " << suma1;
    break;
        //----------------------------------------------------------
         case 40:

            cout<<"Ingrese un Numero"<<endl;
            cin>>a;
            c=0;
            i=1;

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
    case 41:
        cout << "Problema 11." << endl << "Ingrese un numero para calcular el MCM de los numeros entre 1 y dicho numero: ";

           cin >> n;


           MCM = n * j;


           while(aux==1)
           {
               for (int i = n; i >= 1; i--)
               {
                   if((MCM % i) !=0)
                   {
                       MCM = n * (n + j);
                       j++;
                       break;
                   }
                   if(i == 1)
                   {
                       cout << "El minimo comun multiplo es: " << MCM << endl;
                       aux = 0;
                   }
               }
           }

    break;
        //----------------------------------------------------------
             case 42:

        cout << "Ingrese un Numero"<<endl;
        cin>>a1;

        b=0;
        i=1;
        while (i<=a1){

            n=i;
            A=0;
            cont=0;
            if(n==2 || n%2!=0){
                while (A<=n){
                    A+=1;
                    if (n%A==0){cont+=1;}
                    }
                //if (cont==2){cout<<n<<" es PRIMO"<<endl;}
                if(a1%n==0){
                    if(n>b && n<a1 && n!=1){
                    b=n;
                    }
                }

            }
            i+=1;

        }
        if (b==0){cout<<a1<<" NO tiene factor primo."<<endl;}
        else cout<<"El mayor factor primo de "<<a1<<" es: "<<b<<"."<<endl;


            break;
        //----------------------------------------------------------
    case 43:

        cout<<"ingrese un numero: ";
        cin>>num1;
        sum = 0;
        for(prime=2;prime<=num1;prime =prime+1){
            for(i=1;i<=prime;i++){
                if(prime%i==0){
                    count++;
                }
            }
                if(count<3){
                    sum+=prime;
                    //cout<<prime<<endl;
                }
                count=0;

        }
        cout<<"El resultado de la suma es: "<<sum<<endl;

    break;

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
    case 47:
        cout << "Ejercicio 17." << endl << "Ingrese un numero k para calcular el primer numero triangular con k divisores: ";
        int k;
        cin >> k;

        if (k == 1)
        {
            cout << "El numero es: " << k << " que tiene " << k << " divisores";
        }
        else
        {
            int i = 2;
            int count = 2;
            int enesimo;
            while (count < k)
            {
                enesimo = (i * (i + 1)) / 2;
                int nueve = enesimo / 2;
                count = 2;
                for (int j = 2; j <= nueve; j++)
                {
                    if ((enesimo % j) == 0)
                    {
                        count++;
                    }
                }

                i++;
            }
            cout << "El numero es: " << enesimo << " que tiene " << count << " divisores"<<endl;
        }


    break;

    }
    return 0;
}
