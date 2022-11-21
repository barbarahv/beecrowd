//******Diferença

#include <iostream>
 
using namespace std;
 
int main() {
    int a, b, c, d;
    
    cin >> a >> b >> c >> d;
    
    cout << "DIFERENCA = " << (a * b) - (c * d) << endl;
}

//******Salário

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int a, hours;
    double salary;
    
    cin >> a >> hours >> salary;
    
    cout << "NUMBER = " << a << endl;
    cout << setprecision(2) << fixed;
    cout << "SALARY = U$ " << hours * salary << endl;
   
}

//*****Salário com Bônus

#include <iostream>
#include <cmath>
#include<iomanip>
 
using namespace std;
 
int main() {
 
    string name;
    double sales, salary;
    
    getline(cin, name);
    cin >> salary >> sales;
    
    double total = sales * 0.15 + salary;
    
    cout << setprecision(2) << fixed;
    cout << "TOTAL = R$ " << total << endl;
}

//*******O Maior


#include <iostream>
 
using namespace std;
 
int main() {
 
    int a, b, c;
    
    cin >> a >> b >> c;
    
    int maior = (a + b + abs(a - b)) / 2;
    int maior2 = (maior + c + abs(maior - c)) / 2;
    
    cout << maior2 << " eh o maior" << endl;
 
    
}

//******Distância Entre Dois Pontos

#include <iostream>
#include<cmath>
#include<iomanip>
 
using namespace std;
 
int main() {
 
    double x1, x2, y1 , y2;
    
    cin >> x1 >> x2;
    cin >> y1 >> y2;
    
    double distance = sqrt(pow(y1 - x1, 2) + pow(y2 - x2, 2));
    
    cout << setprecision(4) << fixed;
    cout << distance << endl;
 
}

//*****Teste de Seleção 1

#include <iostream>
 
using namespace std;
 
int main() {
 
    int a, b, c ,d;
    
    cin >> a >> b >> c >> d;
    
    if(b > c && d > a && c + d > a + b && c > 0 && d > 0 && a % 2 == 0)
    {
        cout << "Valores aceitos" << endl;
    }
    else
    {
        cout << "Valores nao aceitos" << endl;
    }
    
 
}

//******Animal


#include<iostream>
#include<string>

using namespace std;

int main()
{
    string a, b, c;
    
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    
    if (a == "vertebrado")
    {
        if (b == "ave")
        {
            if (c == "carnivoro")
            {
                cout << "aguia" << endl;
            }
            else if (c == "onivoro")
            {
                cout << "pomba" << endl;
            }
        }
        else if (b == "mamifero")
        {
            if (c == "onivoro")
            {
                cout << "homem" << endl;
            }
            else if (c == "herbivoro")
            {
                cout << "vaca" << endl;
            }
        }
    }
    else if (a == "invertebrado")
    {
        if (b == "inseto")
        {
            if (c == "hematofago")
            {
                cout << "pulga" << endl;
            }
            else if (c == "herbivoro")
            {
                cout << "lagarta" << endl;
            }
        }
        else if (b == "anelideo")
        {
            if (c == "hematofago")
            {
                cout << "sanguessuga" << endl;
            }
            else if (c == "onivoro")
            {
                cout << "minhoca" << endl;
            }
        }
    }
}

//******DDD


#include <iostream>
 
using namespace std;
 
int main() {
 
    int x;
    
    cin >> x;
    
    switch(x)
    {
        case 61:
            cout << "Brasilia" << endl;
            break;
        case 71:
            cout << "Salvador" << endl;
            break;
        case 11:
            cout << "Sao Paulo" << endl;
            break;
        case 21:
            cout << "Rio de Janeiro" << endl;
            break;
        case 32:
            cout << "Juiz de Fora" << endl;
            break;
        case 19:
            cout << "Campinas" << endl;
            break;
        case 27:
            cout << "Vitoria" << endl;
            break;
        case 31:
            cout << "Belo Horizonte" << endl;
            break;
        default:
            cout << "DDD nao cadastrado" << endl;
            break;
    }
 
    return 0;
}

//******Mês

#include <iostream>
 
using namespace std;
 
int main() {
 
    int x;
    
    cin >> x;
    
    switch(x)
    {
        case 1:
            cout << "January" << endl;
            break;
        case 2:
            cout << "February" << endl;
            break;
        case 3:
            cout << "March" << endl;
            break;
        case 4:
            cout << "April" << endl;
            break;
        case 5:
            cout << "May" << endl;
            break;
        case 6:
            cout << "June" << endl;
            break;
        case 7:
            cout << "July" << endl;
            break;
        case 8:
            cout << "August" << endl;
            break;
        case 9:
            cout << "September" << endl;
            break;
        case 10:
            cout << "October" << endl;
            break;
        case 11:
            cout << "November" << endl;
            break;
        case 12:
            cout << "December" << endl;
            break;
    }
 
}

//****Hello World!

#include <iostream>
 
using namespace std;
 
int main() {
 
    cout << "Hello World!"<<endl;
 
    return 0;
}