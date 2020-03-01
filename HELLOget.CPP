
#include <iostream>
#include <cmath>
#include <climits>


//using namespace std;

// int main(){}

int main()
{
  std::cout << "HelloW!\n";
  //cout << (36%17*2 == 'B'-'A' <= 9/2);

/*
  std::cout << "Press ANY KEY\n";
  _getwch();   /// !!!!
*/

  // std::cout << std::endl << 20 << ' ' << 020 << ' ' << 0x20 << '\15' << ' ' << '\12' << '\101' << '\344' << '\41' << '\200' << '\300' << '\441' << '\132' << '\n';
  // std::cout << sqrt('Q') << ' ' << char(81) << sqrt(true) << char(10) << log10('d') << log(false);
  // std::cout << char(10) << std::scientific << pow('A',0.5);
/*
  int i = -2; unsigned u = 1;
  std::cout << i + u << '\n';
  std::cout << -2 + u << '\n';
  std::cout << -2 + ULONG_LONG_MAX << '\n';
  std::cout << -2 + (unsigned long long)1 << '\n';
*/
/*
unsigned int u = 2147483648 + 65536;
unsigned short int us = u;
std::cout << u << ' ' << us;
*/
/*
char c = '1';
bool s = true;
std::cout << c+s << ' ' << sizeof (c+s) << ' ' << sizeof c+s << ' ' << sizeof s+c << '\n';

int i=-1; unsigned u = 0;
std::cout << i+u;
*/
/*
long long ill = LONG_LONG_MAX; double d = 0.1;
std::cout << std::fixed;
unsigned int ui = UINT_MAX;
  std::cout << ill << ' ' << ill + d << '\n';
  std::cout << ui << ' ' << ui + d << '\n';
  //std::cout << -2 + u << '\n';
  //std::cout << -2 + ULONG_LONG_MAX << '\n';
*/
/*
int i=1;
std::cout << (i+1.0)/3 << ' ' << '\n';
char c = 'B'-'a';
std::cout << c << '\n';
*/
std::cout << std::fixed;
std::cout << fabs(-1.5) << ' ' << abs(-1.5) << ' ' <<
     fabs(-2147483648) << ' ' << abs(-2147483648) <<
     ' ' << pow(2,5) << '\n' <<
     2*atan(1e308) << '\n';
/*
int s=0;
for(int i,j;i<5; ++i, --j) {
  if(s==0)
   {  i=1; j=5; s=1; }
   std::cout << i << ' ' << j << '\n';
}
*/
/*
for(unsigned long long i=0, p=1, f=1; i<21 ; )
{
  ++i, f*=i, p*=8;
  std::cout << i << ' ' << f << ' ' << p << '\n';
}
*/

double v; int p, k;
  std::cout << "Enter fraction, P, and digits number>";
  std::cin >> v >> p >> k;
 //поточна цифра
   if ( (0 <= v) && (v < 1) && (p>1) && (k > 0) )
     for( int d ; k > 0 ; k--){
       v *= p; d = int(v); v -= d;
       std::cout << d;
     }


/*
  std::cout << "\nPress Enter";
  std::cin.get();
*/
 // return 0;
/*
system("pause");
*/
}

//int main(){}

