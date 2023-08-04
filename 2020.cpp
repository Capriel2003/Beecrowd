#include <iostream>
#include <map>
using namespace std;


int main(){
    int n;
    map<int,int> tabela;
    tabela[0]=0;
    tabela[1]=1;
    tabela[2]=2;
    tabela[3]=3;
    tabela[4]=4;
    tabela[5]=5;
    tabela[6]=6;
    tabela[7]=7;
    tabela[8]=8;
    tabela[9]=9;
    tabela[10]=10;
    tabela[11]=11;
    tabela[12]=12;
    tabela[13]=13;
    tabela[14]=14;
    tabela[15]=15;
    tabela[16]=16;
    tabela[17]=17;
    tabela[18]=18;
    tabela[19]=19;
    tabela[20]=20;
    tabela[21]=21;
    tabela[22]=22;
    tabela[23]=23;
    tabela[24]=24;
    tabela[25]=25;


    while(cin>>n){
        cout << char(96+tabela[n]) << endl;

    }


    return 0;
}