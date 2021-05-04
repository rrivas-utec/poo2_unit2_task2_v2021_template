# Task #1: Tarea  
**course:** Programación Orientada a Objetos 2 
**unit:** Unidad 2 
**cmake project:** poo2_unit2_task2_v2021
## Instructions
Subir a gradescope los siguientes archivos: 
- `p1.h` `p1.cpp`
- `p2.h` `p2.cpp`
- `p3.h` `p3.cpp`
- `p4.h` `p4.cpp`

## Question #1 - python input (4 points)

Crear la función template **`input`** que simula el funcionamiento de la función de python **`input`**.
  
**Use Case:**  
```cpp
    // Por default el template retorna un std::string
    auto text = input();
    auto entero = input<int>("Ingrese un numero: ");
    auto real = input<double>("Ingrese un numero: ");
    std::cout << "El texto es: " << text << endl;
    std::cout << "El entero es: " << entero << endl;
    std::cout << "El real es: " << real << endl;
```

## Question #2 - print  (4 points)

Crear la función template **`print`** que permita imprimir el contenido de un contenedor, incluyendo un delimitador, un objeto del tipo **`std::ostream`** que recibirá el contenido del contenedor.
  
**Use Case:**  
```cpp
    // Vector
    std::vector<int> vec = {10, 20, 30, 40, 50, 60};
    // Imprimir en consola
    print(begin(vec), end(vec), std::cout, "-");
    // Grabarlos en un archivo
    std::ofstream file("out.txt");
    print(begin(vec), end(vec), file, "|");
    // Imprimir la mitad de valores
    auto last_it = next(begin(vec), vec.size() / 2);
    print(begin(vec), last_it, std::cout, "-");
    
```

## Question #3 - sumarizar (4 points)

Crear la función template **`sumarizar`** que permita sumar el contenido de un contenedor con valores numéricos, que incluya un parámetro que defina un valor inicial.
  
**Use Case:**  
```cpp
    // Contenedor 
    std::list<double> lst = {10.5, 20.4, 30.2, 40.5, 50.9, 60.5};
    cout << "Total: " << sumarizar(begin(lst), end(lst), 0) << endl;
    // Calcular la mitad de valores inferior
    auto last_it = next(begin(lst), size(lst) / 2);
    cout << "Sumatoria de la mitad: " << sumarizar(begin(lst), last_it, 0) << endl;
```

## Question #4 - puntero inteligente (8 points)
Crear la clase template **`smart_ptr`** que simule un puntero inteligente (la memoria es liberada automáticamente) y la función template **`make_smart_ptr`** que simule el operador **`new`**. Sobrecargar el operador de-referencia `*`, el operador arrow `->`.


**Use Case #1:**
```cpp
    smart_ptr<int> sp1; // puntero inteligente no inicializado
    sp1 = make_smart_ptr<int>(10);
    
    cout << *sp1 << endl;   // Imprimiendo el contenido

    // puntero inteligente no inicializado
    smart_ptr<string> sp2 = make_smart_ptr<string>("Hola"); 
    cout << *sp2 << endl;
```

**Use Case #2:**
```cpp
    class point {
        int x;
        int y;
    public:
        point(int x, int y): x{x}, y{y} {}
        point() = default;
        
        friend ostream& operator<< (ostream& os, const point& p) {
            os << "{" << p.x <<", " << p.y << "}" << endl;
            return os;
        }

        int get_x() { return x; }
        int get_y() { return y; }
    };

    smart_ptr<point> sp1; // puntero inteligente no inicializado
    sp1 = make_smart_ptr<point>(20, 30);
    
    cout << *sp1 << endl;   // Imprimiendo el contenido

    smart_ptr<point> sp2 = make_smart_ptr<point>(10, 40); // puntero inteligente no inicializado
    cout << sp2->get_x() << endl;
    cout << sp2->get_y() << endl;
```

