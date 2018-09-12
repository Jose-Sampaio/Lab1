#include <iostream>
#include <vector>
using namespace std;

int main() {
  int m,n,soma=0,o,p,valor,tot=0;
  vector <int> lucro;
  vector <int> som;
  cin>>m>>n;
  for (int i = 0; i< m; i++) {
    cin>>valor;
    lucro.push_back(valor);
  }
  for (int i = 0; i < lucro.size(); i++) {
    tot=tot+lucro[i];
  }
  for (int i = 0; i < n; i++) {
    cin>>o>>p;
    int j=o-1;
  while (j<p) {
    soma=lucro[j]+soma;
    j++;
  }
    int b,c;
    b=tot-soma;
    c=tot-b;
    som.push_back(c);
    soma=0;
    b=0;
    c=0;
  }
  lucro.clear();
  vector<int>:: iterator it;
  for ( it = som.begin(); it != som.end(); it++) {
    cout<<*it<<endl;
  }

  return 0;
}
