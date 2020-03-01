#include <iostream>
#include <cmath>
#include <cstdlib>
//#include <values.h>

using namespace std;
int main()
{
cout.setf(ios::scientific);
cout.setf(ios::showpoint);
cout.precision(20);

cout << pow(1e8, 1.0/3) << endl;

// for (int k=9; k < 16 ; k++)
//  unsigned long long int zzzz = 1.999999999;
//  wchar_t xx = 0xff81;
//  long double d=2.e0, x1=1, x2;
  double a = 1, b=-3, c=4, d=b*b-4*a*c;
//  int n=0;
//  while (x1>0){x2=x1; x1*=d; cout << ++n << ' ';}
//  printf("%.20lg", x2) ; cout << ' ' << n <<endl;
//  cout << (zzzz xor 1) << ' ' << '\10' << '\xfe' <<  ' ' << (long double)1.1e+310 << ' ' << '\uFF80' << '\x81';
 short k = 333;
// cin >> k;

//int cin = 222;
//cout << "a\101\0zzz\n" << '"' << cin;
//cout << "\a\e\f\r\t\v\x42\n" << ' ' ;
/*
int a=44, aa, aaa; double b=1.2e-2;
aa = (aaa = a);
cout << "a=" << a << "';\n>>" << "b=" << b << '\n';
cout.setf(ios::scientific);
cout << "a=" << aa << ' ' << "b=" << b << '\n';
// cout << ( k-floor(k) < ceil(k)-k ? floor(k) : ceil(k) ) << endl;
*/
//cout << (-b-sqrt(d))/(2*a) << ';'<< (-b+sqrt(d))/(2*a) << '\n';
//cout << sqrt(b*b-4*a*c) << ' ' << pow(abs(-2),1.023995e3) << endl;
//cout << (0.0 || 1) << ' ' << sizeof (b*b-4*a*c>0) << endl;
while(cin>>k)
  cout << k << "\n";
cout << "<<" << k << ">>";
//  if(k==0) break;
cout << ((cin>>k) ? "ok" : "j");
//cout << k*10 << (k=6) << endl;
system("pause");
return 0;
}

// int main(){}

