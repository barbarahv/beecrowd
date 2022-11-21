//******Gerenciar Cardapio

#include<iostream>
#include<string>
#include<iomanip>


using namespace std;

class PessoaFisica
{
    private:
        string produto;
      
    public: 
        
        void ler();
        void escrever();
   
        string getProduto()     { return produto; }
    
     
};

//******Números Pares

#include <iostream>
 
using namespace std;
 
int main() {
 
    int x;
    bool verdade= true;
    x = 2;
    while(verdade){
        if(x >=100){
            verdade = false;
        }cout << x<< endl;
        x = x+2;
    }
 
    return 0;
}

//****Senha Fixa

#include <iostream>
 
using namespace std;
 
int main() {
 
    int senha = 2002;
    int entrada;
    bool errada = true;
    while(errada){
        cin >> entrada;
        if(entrada == senha){
            errada = false;
            cout<< "Acesso Permitido"<< endl;
        }else{cout<< "Senha Invalida"<< endl;}
    }
 
    return 0;
}

//****Validação de Nota

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    
    float x, y, z;
    y = 0;
    z = 0;
    while(true){
                cin >> x;
                if(x < 0 || x > 10){
                      cout << "nota invalida\n";
                }
                else if(z == 0){
                      y = x;
                      z = 1;
                }else{
                      printf("media = %.2f\n", (y+x)/2);
                      break;
                }
    } 
    return 0;
}

//****Grenais

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int golsI, golsG, vI = 0, vG = 0, j = 0, escolha;
    while (1) {
        cin >> golsI >> golsG;
        
        if (golsI > golsG)
            vI++;
        else if (golsG > golsI)
            vG++;
        j++;
        
        cout << "Novo grenal (1-sim 2-nao)" << endl; 
        cin >> escolha;

        if (escolha==2)
            break;
    }
    
    cout << j << " grenais" << endl;
    cout << "Inter:" << vI << endl;
    cout << "Gremio:" << vG << endl;
    cout << "Empates:" << j-vI-vG << endl;
    
    if (vI > vG)
        cout << "Inter venceu mais" << endl;
    else if (vG > vI)
        cout << "Gremio venceu mais" << endl;
    else
        cout << "Nao houve vencedor" << endl;
    
    return 0;
}

//*****Tipo de Combustível

#include <iostream>

using namespace std;

int main() {
    int n, a = 0, g = 0, d = 0;
    do {
        cin >> n;
        if (n == 1) a++;
        if (n == 2) g++;
        if (n == 3) d++;
    } while (n != 4);
    
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << a << endl;
    cout << "Gasolina: " << g << endl;
    cout << "Diesel: " << d << endl;
    
    return 0;
}

//***** Fibonacci Fácil

#include <iostream>

using namespace std; 

int main() 
{
 int n;
 int fib[50];
 fib[0] = 0;
 fib[1] = 1;
 cin >> n;
 int computed = 1;
 cout << fib[0];
 for(int i = 1; i<n;i++){
  if(i>computed){
   fib[i] = fib[i-1]+fib[i-2];
  }
  cout << " " << fib[i];
 }
 cout << endl;
    return 0; 
}

//*****Fatorial Simples

#include <iostream>
using namespace std;

int main(){
    
    int op;
    int fat = 1;
    
    cin >> op;
    
    for(int i = 0; i < (op-1); i++){
            fat *= (op - i);
    }
    cout << fat << endl;
    return 0;
}

//*****Divisores I

#include <stdio.h>

int main()
{
   int N,a;
    scanf("%d",&N);
    for(a=1;a<=N;a++)
    {
        if(N%a==0)
            printf("%d\n",a);
    }
    return 0;
}

//*****Bazinga!

#include <bits/stdc++.h>

using namespace std;


int main()
{
    string s1, s2;
   
    int caso = 1;   
    int n;
   
    cin >> n;
   
    while (n--)
    {
        cin >> s1 >> s2;
        cout << "Caso #" << caso++ << ": ";
        if (s1 == s2) cout << "De novo!\n";
        else if (s1 == "tesoura" && s2 == "papel") cout << "Bazinga!\n";
        else if (s2 == "tesoura" && s1 == "papel") cout << "Raj trapaceou!\n";
        else if (s1 == "papel" && s2 == "pedra") cout << "Bazinga!\n";
        else if (s2 == "papel" && s1 == "pedra") cout << "Raj trapaceou!\n";
        else if (s1 == "pedra" && s2 == "lagarto") cout << "Bazinga!\n";
        else if (s2 == "pedra" && s1 == "lagarto") cout << "Raj trapaceou!\n";
        else if (s1 == "lagarto" && s2 == "Spock") cout << "Bazinga!\n";
        else if (s2 == "lagarto" && s1 == "Spock") cout << "Raj trapaceou!\n";
        else if (s1 == "Spock" && s2 == "tesoura") cout << "Bazinga!\n";
        else if (s2 == "Spock" && s1 == "tesoura") cout << "Raj trapaceou!\n";
        else if (s1 == "tesoura" && s2 == "lagarto") cout << "Bazinga!\n";
        else if (s2 == "tesoura" && s1 == "lagarto") cout << "Raj trapaceou!\n";
        else if (s1 == "lagarto" && s2 == "papel") cout << "Bazinga!\n";
        else if (s2 == "lagarto" && s1 == "papel") cout << "Raj trapaceou!\n";
        else if (s1 == "papel" && s2 == "Spock") cout << "Bazinga!\n";
        else if (s2 == "papel" && s1 == "Spock") cout << "Raj trapaceou!\n";
        else if (s1 == "Spock" && s2 == "pedra") cout << "Bazinga!\n";
        else if (s2 == "Spock" && s1 == "pedra") cout << "Raj trapaceou!\n";
        else if (s1 == "pedra" && s2 == "tesoura") cout << "Bazinga!\n";
        else if (s2 == "pedra" && s1 == "tesoura") cout << "Raj trapaceou!\n";
    }
}

//******Qual Triângulo

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    string ans = "" ;
    cin >> a >> b >> c ;
    if(a+c>b){
    if((a != b and b == c) or ( a == c and a != b) or ( a == b and c != b))
        ans = "Valido-Isoceles";
    else if(a == b and a == c)
        ans = "Valido-Equilatero" ;
    else if(a != b and b != c and a != c)
        ans = "Valido-Escaleno";
    }
    else{
        ans = "Invalido";
    }
    if(ans != "Invalido"){
      if(pow(a,2) == pow(b,2) + pow(c,2) or pow(b,2) == pow(a,2) + pow(c,2) or pow(c,2) == pow(a,2) + pow(b,2))
        cout << ans << endl << "Retangulo: S" <<endl ;
       else
        cout << ans << endl << "Retangulo: N" << endl;
    }
    else
        cout << ans << endl;
    return 0;
}

//******Notas da Prova

#include "stdio.h"
int main()
{
    int m = 0;
    scanf("%d", &m);

    if(m <= 100 && m >= 0)
    {
        if (m == 0)
            printf("E");

        if (m > 0 && m <= 35)
            printf("D");

        if (m > 35 && m <= 60)
            printf("C");

        if (m > 60 && m <= 85)
            printf("B");

        if (m > 85)
            printf("A");
    }
    printf("\n");

    return 0;
}

//*****Xadrez

#include <bits/stdc++.h>
using namespace std;

int main(){
    long m, n, c, i, j=0, k, v[51];
    cin>>c>>n;
    if(c%2==0 && n%2==0) cout<<"1"<<endl;
    else if (c%2==0 && n%2==1) cout<<"0"<<endl;
    else if (c%2==1 && n%2==0) cout<<"0"<<endl;
    else if (c%2==1 && n%2==1) cout<<"1"<<endl;
}


//*****Fórmula de Bhaskara

#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;


class Formula{
     private:
      double A,B,C;
      
      public:
       void setFormula(double a, double b, double c){
           A = a;
           B = b;
           C = c;
       }
      double raiz(){
          
          return pow(B,2) -4 * A*C;
      } 
      double raiz1(){
          return (-B + sqrt(raiz())) / (2*A);
      }
 
      double raiz2(){
          return (-B - sqrt(raiz())) / (2*A);
      }

};

int main() {

Formula formula;

double a, b,c;

cin >> a >> b>> c;


formula.setFormula(a,b,c);

if(a == 0 ||formula.raiz()< 0){
    cout << "Impossivel calcular" << endl;

}else{
    cout << setprecision(5) << fixed;
    cout << "R1 = " << formula.raiz1() << endl;
    cout << "R2 = " << formula.raiz2() << endl;
}


 
    return 0;
}

//***** Médias Ponderadas

#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

class Calculo{
    private: 
        
        double A, B,C;
    public:
        void setVariaveis(double a, double b, double c){
            
            A = a;
            B = b;
            C = c;
        }
        
        double formula(){
            
             return (A * 2 + B * 3 + C * 5) / 10;
        }
        
    
};


int main() {
    
    Calculo calculo;
    int n,i;
    double a,b,c;
    cin>> n;
    
    
    for(i=0; i<n ; i++){
        cin>> a>> b>> c;
        calculo.setVariaveis(a,b,c);
        cout <<setprecision(1) << fixed;
        cout << calculo.formula()<< endl;
        
    }
    
    return 0;
}

//******Crescente e Decrescente


#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class CreDecre{

    private:
        int X,Y;
    public:
        void setVariaveis(int x, int y){
            X = x;
            Y = y;
        }

        bool formula(){

            if(X > Y){
                return true;
            }else{
                return false;
            }
        }




};


int main(){
    CreDecre c;
    int x, y;
    
    
    cin >> x >> y;
    c.setVariaveis(x, y);


    while(x!=y){

        if(c.formula()){
            cout <<"Decrescente" << endl;
        }else{
            cout<< "Crescente" << endl;
        }
        cin >> x >> y;
        c.setVariaveis(x, y);
        
    }




}