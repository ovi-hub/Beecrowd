# C++ By Ovi [](https://www.youtube.com/watch?v=sG24Nx9501g)

## Basics

### Hello, Ovi!
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
```

### Data Types
| Data Type   | Size       | Description              |
|-------------|------------|--------------------------|
| `int`       | 4 bytes    | Integer values           |
| `float`     | 4 bytes    | Floating-point values    |
| `double`    | 8 bytes    | Double precision float   |
| `char`      | 1 byte     | Single character         |
| `bool`      | 1 byte     | Boolean values (true/false) |
| `string`    | Varies     | Sequence of characters   |

### Variables
```cpp
int age = 25;
float height = 5.9;
char grade = 'A';
bool isAlive = true;
string name = "Shekh";
```

### Input/Output
```cpp
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old." << endl;
    return 0;
}
```

---

## Control Flow

### If-Else
```cpp
if (condition) {
    // code
} else if (condition) {
    // code
} else {
    // code
}
```

### Loops
#### For Loop
```cpp
for (int i = 0; i < 10; i++) {
    cout << i << endl;
}
```

#### While Loop
```cpp
int i = 0;
while (i < 10) {
    cout << i << endl;
    i++;
}
```

#### Do-While Loop
```cpp
int i = 0;
do {
    cout << i << endl;
    i++;
} while (i < 10);
```

---

## Functions

### Function Declaration
```cpp
returnType functionName(parameters) {
    // code
    return value;
}
```

### Example
```cpp
int add(int a, int b) {
    return a + b;
}

int main() {
    cout << add(5, 3) << endl;
    return 0;
}
```

---

## Object-Oriented Programming (OOP)

### Classes and Objects
```cpp
class Car {
public:
    string brand;
    int year;

    void display() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car car1;
    car1.brand = "Toyota";
    car1.year = 2020;
    car1.display();
    return 0;
}
```

### Inheritance
```cpp
class Vehicle {
public:
    string brand;

    void honk() {
        cout << "Beep beep!" << endl;
    }
};

class Car : public Vehicle {
public:
    int year;
};

int main() {
    Car car1;
    car1.brand = "Toyota";
    car1.year = 2020;
    car1.honk();
    return 0;
}
```

### Polymorphism
```cpp
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Animal* a = new Dog();
    a->sound();
    delete a;
    return 0;
}
```

---

## Advanced Topics

### Pointers
```cpp
int a = 10;
int* ptr = &a;
cout << "Address: " << ptr << endl;
cout << "Value: " << *ptr << endl;
```

### Templates
```cpp
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add(5, 3) << endl;
    cout << add(5.5, 3.3) << endl;
    return 0;
}
```

### File Handling
```cpp
#include <fstream>
using namespace std;

int main() {
    ofstream outfile("example.txt");
    outfile << "Hello, File!" << endl;
    outfile.close();

    ifstream infile("example.txt");
    string line;
    while (getline(infile, line)) {
        cout << line << endl;
    }
    infile.close();

    return 0;
}
```

---

## Useful STL Containers

### Vector
```cpp
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    v.push_back(4);
    for (int i : v) {
        cout << i << " ";
    }
    return 0;
}
```

### Map
```cpp
#include <map>
using namespace std;

int main() {
    map<string, int> ageMap;
    ageMap["Ovi"] = 25;
    ageMap["Shekh"] = 30;

    for (auto& pair : ageMap) {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}
```

---

## Best Practices
- Use meaningful variable and function names.
- Comment your code for better understanding.
- Avoid memory leaks by freeing dynamic memory.
- Use `const` for variables that don’t change.
- Leverage the Standard Template Library (STL) for common operations.

---

*Happy Coding!*
