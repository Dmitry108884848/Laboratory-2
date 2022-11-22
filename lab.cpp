Задача 1.1.5
#include <iostream>
using namespace std;
int main()
{
double a,b,c,w,h,s; 
cout <<"input a: "; cin >> a;
cout <<"input b: "; cin >> b;
cout <<"input c: "; cin >> c; // вывод длин и высоты стен и двери в консоль
cout <<"input w: "; cin >> w;
cout <<"input h: "; cin >> h;
s=a*c*2+b*c*2-w*h; // формула площади комнаты без площади двери
cout << "a*c*2+b*c*2-w*h = " << s << ""; // вывод результата в консоль
return 0; 
}                                                        Задача 1.2.5
#include <iostream>
#include <cmath> // подключил математическую библиотеку
using namespace std;
int main()
{
double l,r,s; 
const double pi {3.14}; // ввожу константу в виде числа pi
cout <<"insert l: "; cin >> l; // вывод длины окружности в консоль
r=l/(2*pi); // формиула для нахождения радиуса
cout << "l/(2*pi)= " << r << ""; 
s=r*r*pi*2; // формула площади круга
cout << "r*r*pi*2= " << s << ""; 
return 0;
}                                 

Задача 1.4.5
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double x,sinx;
cout << "input x:"; cin >> x;
sinx=x-(x*x*x/6); // формула из задачника
cout << "x-(x*x*x/6)= " << sinx << "";
return 0;
}

                                      Задача 3.1.5
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
setlocale (LC_ALL, "Russian"); // русская локализация
int n,i;
double sum=0; // начальная сумма равна 0 и является вещественным числом
cout <<"введите n:"; cin >> n; 
if (n>0){ // если число n больше нуля алгоритм продолжается 
for (i=1; i<=n; i++)  // алгоритм будет повторятся до чилса n, шаг цикла 1
sum+=1.0/i; 
cout <<"результат " << sum << "";
}
else
{
cout <<"число n меньше или равно 0" << ""; 
} 
return 0;
}

                                  Задача 3.2.5
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int n;
cout <<"insert n:"; cin >> n;
if (n>0)
{
    
}
else { cout <<"n=0" << "";
}
return 0;
}
Задание 6
#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
setlocale(LC_ALL, "RUSSIAN");
int s;
cout << "Введите степень : "; cin >> s; 
{
cout << pow(2, s); 
return 0;
}
}
