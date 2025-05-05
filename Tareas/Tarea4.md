Analice la complejidad en tiempo (# de operaciones)  y memoria (# de variables primitivas) de los siguientes 6 codigos: https://pastecode.io/s/4mg1beas


Solución:

---
Código 1:
// Suma de un arreglo 

int n;
cin >> n;
vector <int> arr(n);

for(int i=0; i<n; i++){
    cin >> arr[i];
}

int suma = 0;

for(int i=0; i<n; i++){
    suma += arr[i];
}

cout << suma << endl;

---
Código 2:
// for anidado 

int n, m;
cin >> n >> m;
int res = 0;

for(int i=0; i<n; i++){

    for(int j=0; j<m; j++){
        res += i*j;
    }
}

cout << res << endl;

---
Código 3:
// for en una condición 


int w;
cin >> w;

if(w%2 == 0){
    cout << "Es par" << endl;

}
else{
    for(int i=0; i<w; i++){
        cout << i << endl;
    }
}

---
Código 4:
// ¿Esto qué?

int n;
cin >> n;

for(int i=0; i<n; i++){
    int j = 1;
    while(j<n){
        j *= 2;
    }
}

---
Código 5:
// Indices

int n;
cin >> n;
vector <int> arr(n);
vector <vector <int>> indices(n);

for(int i=0; i<n; i++){

    // en este problema leemos n números que están entre 0 y n-1.
    // Es decir, nos garantizan 0 <= arr[i] < n.

    cin >> arr[i];
    indices[arr[i]].push_back(i);

}


for(int x=0; x<n; x++){
    int suma = 0;
    for(int j=0; j<indices[x].size(); j++){
        suma += indices[x][j];
    }
    cout << suma << endl;
}

---
Codigo 6:
// Serie armonica

int n;
cin >> n;
int ans = 0;

for (int i = 1; i < n; i++) {
  for (int j = 1; j < n; j += i) {
    ans += i*j;
  }
}
