#include <iostream>

using namespace std;

int main()
{

    unsigned short num;
    int N;
    int num1, num2;

    cout << "Ingrese el numero del problema a ejecutar: ";
    cin >> num;

    // switch es un condicional que ejecuta lo que hay entre : y break;
    switch (num) {

      case 2:
        cout << "Ingrese un numero: ";      //Solo imprime
        cin >> N;                           //Solo recibe datos
        if (N%2==0) cout << "Es par ";
        else cout << "Es impar ";

      break;

      case 3:

          cout << "Ingrese un primer numero: ";
          cin >> num1;
          cout << "Ingrese un segundo  numero: ";
          cin >> num2;
          if (num1 > num2) cout << "El numero mayor es: " << num1;
          else cout << "El numero mayor es: " << num2;
          cout <<  endl;

      break;

      case 4:
        cout << "Ingrese un primer numero: ";
        cin >> num1;
        cout << "Ingrese un segundo  numero: ";
        cin >> num2;
        if (num1 > num2) cout << "El numero menor es: " << num2;
        else cout << "El numero menor es: " << num1;
        cout <<  endl;

      break;

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

      case 10:
        cout << "Ingrese un numero: ";
        cin >> N;

        for (unsigned short i=1;N*i<=100 ;i=i+1 ) {
            cout << N*i << endl;
        }

       break;

      case 11:
        int numero;
        cout << "Ingrese un numero: "; cin >> numero;

        for (int i=1;i<=10 ;i++ ) {
            cout << numero << "X" << i << "=" << numero*i << endl;

        }

      break;

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

      case 15:




      break;



       case 24:
         cout << "Ingrese la dimension del lado del cuadrado: ";
         cin >> N;
         for (unsigned short fil=0;fil<N ;fil=fil+1 ) {
             for (unsigned short col=0; col<N ; col=col+1 ) {
                 if(fil == 0 || col == 0 ||fil == N-1 || col == N-1 ) cout << "+"; // El signo || es un or en phyton
                 else cout <<  " ";

             }
             cout <<  endl;

         }

        break;





      }

    return 0;
}
