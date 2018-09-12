#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct candidato{
  int id;
  float nota;
};
bool cmp (candidato a,candidato b){
  return a.nota>b.nota;
}
int main() {
  int m,n;
  candidato a;
  vector<candidato> pessoa;
  cin>>n>>m;
  for (int i = 0; i < n; i++) {
    cin>>a.nota>>a.id;
    pessoa.push_back(a);
  }
  stable_sort(pessoa.begin(),pessoa.end(),cmp);
  for (int i = 0; i < m; i++) {
    cout<<pessoa[i].id<<endl;
  }
  return 0;
}
