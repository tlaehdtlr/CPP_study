#include <iostream>
// #include <string>

class Human {
    std::string   name;
    int     age;
    
    public:
        void born(std::string _name);
        void introduce(void);
        void aging(void);

    Human() {
        name = "unknown";
        age = 0;
    }
    Human(std::string _name, int _age){
        name = _name;
        age = _age;
    }
};

void Human::born(std::string _name){
    name = _name;
    age = 0;
}

void Human::introduce(void){
    std::cout<< "I'm " << name << " and " << age << " years old" << std::endl;
}

void Human::aging(void){
    age++;
}



void print(int x) { std::cout << "int : " << x << std::endl; }
void print(char x) { std::cout << "char : " << x << std::endl; }
void print(double x) { std::cout << "double : " << x << std::endl; }

int main() {
  int a = 1;
  char b = 'c';
  double c = 3.2f;

  print(a);
  print(b);
  print(c);


    //////////////////
    // Human sim;
    // sim.born("dongsik");
    // sim.aging();
    // sim.introduce();

    Human sim("dongsik", 31);
    sim.introduce();

    Human who;
    who.introduce();

    Human who2 = Human();
    who2.introduce();


  return 0;
}