#include <iostream>
#include <stack>
using namespace std;

 int main() {
stack <char> pares;
stack <char> aux;
char pe;
int n,cont=0;
cin>>n;
for (int i = 0; i < n; i++) {
  cin>>pe;
  pares.push(pe);
}
if (pares.top()=='E') {
  cout<<"nao"<<endl;
}
else { while(!pares.empty()) {
aux.push(pares.top());
pares.pop();
if (aux.top()=='D' && pares.top()=='E') {
  aux.pop();
}
else if (aux.empty() && pares.top()=='E') {
  cont=cont+1;
}
}
}
if (cont>0) {
  cout<<"nao"<<endl;
}
else
 cout<<"sim"<<endl;
   return 0;
 }
