Analice la complejidad en tiempo (# de operaciones) y memoria (# de variables primitivas) de los siguientes
6 [códigos](https://pastecode.io/s/4mg1beas)

Solución:

###### Código 1:

```
// Suma de un arreglo
 
// Tiempo:  O(N) => N = n 
// Memoria: O(N) => N = n
 
int n;
cin >> n;
vector <int> arr(n);    //O(n)
for(int i=0; i<n; i++){   //O(n) 
    cin >> arr[i];      
}
int suma = 0;
for(int i=0; i<n; i++){   //O(n)
    suma += arr[i];
}
cout << suma << endl;
```

###### Código 2:

```
// For anidado
 
// Tiempo:  O(N) => N = n * m 
// Memoria: O(1)

int n, m; // O(1)
cin >> n >> m;
int res = 0; // O(1)
for(int i=0; i<n; i++){         // O(n)
    for(int j=0; j<m; j++){     // O(m)
        res += i*j;        
    }
}
cout << res << endl;

```

###### Código 3:

```
// For en una condicion
 
// Tiempo:  // O(N) => N = w
// Memoria:  // O(1)

int w;
cin >> w;
if(w%2 == 0){                // O(1)
    cout << "Es par" << endl;
}
else{
    for(int i=0; i<w; i++){  // O(w)
        cout << i << endl;    //O(1)
    }
}
```

###### Código 4:

```
// Esto que?

// Tiempo:  O(NlogN) => N = n 
// Memoria: O(1)

int n; // O(1)
cin >> n;  // O(1)
for(int i=0; i<n; i++){  // O(n)
    int j = 1; // O(1)
    while(j<n){  //O(logn)
        j *= 2; // O(1)
    }
}

```

###### Código 5:

```
// Indices

// Tiempo:  O(N) => N = n
// Memoria:  // O(N) => n

int n; // O(1)
cin >> n;  //O(1)
vector <int> arr(n);  // O(n)
vector <vector <int>> indices(n);  // O(n)
for(int i=0; i<n; i++){  // O(n)
    // en este problema leemos n números que están entre 0 y n-1.
    // Es decir, nos garantizan 0 <= arr[i] < n.
    cin >> arr[i];   // O(1)
    indices[arr[i]].push_back(i); // O(1)
}

for(int x=0; x<n; x++){ // O(n)
    int suma = 0;  // O(n)
    for(int j=0; j<indices[x].size(); j++){ // O(1)
        suma += indices[x][j];  // O(1)
    }
    cout << suma << endl;
}
```

###### Codigo 6:

```
// Serie armonica

// Tiempo:  
// Memoria:  O(1)

int n;  // O(1)
cin >> n;  // O(1)
int ans = 0;  // O(1)
for (int i = 1; i < n; i++) {  // O(n)          
  for (int j = 1; j < n; j += i) {    
    ans += i*j; // O(1)
  }
}
```