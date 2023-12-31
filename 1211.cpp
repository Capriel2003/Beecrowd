#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n, total, igual;
    while (cin >> n) {
        vector<string> num(n);
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }

        total = 0;
        for (int i = 1; i < n; i++) {
            igual = 0;
            while (igual < num[i-1].size() && igual < num[i].size() && num[i-1][igual] == num[i][igual]) {
                igual++;
            }
            total += igual;
        }

        cout << total << endl;
    }

    return 0;
}


/*
#include <stdio.h>
#include <cstring>
#include <stdlib.h>

struct numeros{
    char num[201];
};
              
int ordem(const void *a, const void *b)
{
    struct numeros *ia = (struct numeros *)a; 
    struct numeros *ib = (struct numeros *)b;
    return strcmp(ia->num, ib->num);
}  
              
int main(){
    int n, i, j;
    int cont;
    struct numeros comp;
    
    while(scanf("%d%*c",&n) != EOF){
        struct numeros array[n];
        cont = 0;
        for(i = 0; i < n; i++){
            scanf("%[^\n]%*c",&array[i].num);
        }
        qsort(array,n,sizeof(numeros),ordem);
        comp = array[0];
        for(i = 1; i < n; i++){
            for(j = 0; j < strlen(array[i].num); j++){
                  if(comp.num[0] != array[i].num[0]){
                             comp = array[i];
                             break;
                  }else if(comp.num[j] == array[i].num[j]) cont++;
                  else{
                    comp = array[i];
                    break;
                  }
            }
        }
        printf("%d\n",cont);
    }
    return 0;
}
*/