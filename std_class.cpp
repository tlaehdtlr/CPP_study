#include <iostream>

class Animal {
 private:
  int food;
  int weight;

 public:
 int temp;
  void set_animal(int _food, int _weight) {
    food = _food;
    weight = _weight;
    temp = 123;
  }
  void increase_food(int inc) {
    food += inc;
    weight += (inc / 3);
  }
  void view_stat() {
    std::cout << "이 동물의 food   : " << food << std::endl;
    std::cout << "이 동물의 weight : " << weight << std::endl;
  }
};  // 세미콜론 잊지 말자!

int main() {
  Animal animal;
  animal.set_animal(100, 50);
  animal.increase_food(30);

  animal.view_stat();

  std::cout<<animal.temp<<std::endl;
  animal.temp -= 11;
  std::cout<<animal.temp<<std::endl;
  return 0;
}