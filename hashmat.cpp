
#include<iostream>
#include<cmath>
using namespace std;
int ipt[3];
int main(){
int i, a, b;
for (i=0; i<3; i++)
{cin >> a >> b;
ipt[i]=abs(a-b);}
cout << endl << ipt[0] << endl << ipt[1] << endl << ipt[2]; 
return 0;
}
