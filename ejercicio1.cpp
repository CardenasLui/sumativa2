#include <bits/stdc++.h>
using namespace std;

class Animal{
private:
    string especie;

public:
    int edad;
    string nombre;
    string sonido;

    Animal();
    Animal(string espe, int ed, string nom, string son);
    string getEspecie();
    void setEspecie(string espe);
    void presentarse();
};


int main(){
Animal a1;
        a1.setEspecie("Perro");
        a1.edad = 5;
        a1.nombre = "Firulais";
        a1.sonido = "Guau";
    
        Animal a2("Gato", 3, "Michi", "Miau");
    
        vector<Animal> animales;
        animales.push_back(a1);
        animales.push_back(a2);
    
        for (int i = 0; i < animales.size(); i++)
        {
            animales[i].presentarse();
        }

return 0;
}

Animal::Animal()
{
    especie = "Desconocida";
    edad = 0;
    nombre = "Desconocido";
    sonido = "Desconocido";
}

Animal::Animal(string espe, int ed, string nom, string son)
{
    especie = espe;
    edad = ed;
    nombre = nom;
    sonido = son;
}

string Animal::getEspecie()
{
    return especie;
}

void Animal::setEspecie(string espe)
{
    especie = espe;
}

void Animal::presentarse()
{
    cout << "Hola, soy un " << especie << " de " << edad << " años y me llamo " << nombre << ". Hago " << sonido << endl;
}
