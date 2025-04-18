#include <iostream>
//  #include "Cars .cpp"      we can use a class like that also
using namespace std;
/*
class Cars{
    private:
    char name;
    public: //access modifires(public,private,protected)
 //properties
int value;
//default constructor
Cars(){
    cout<<"this do not have any parameters"<<endl;
}
// parameterized constructor
 Cars(int value){
    cout<<"Constructor called"<<endl;
   // value = value;  this line will return the value parameter of constructor
   this->value=value;
   cout<<"address stored in this parameter:"<<this<<endl;
 }
 Cars(int value,char name){
    this->value=value;
    this->name=name;
 }
 void print(){
    cout<<"value is:"<<this->value<<endl;
    cout<<"name is:"<<this->name<<endl;
 }
 //creation of copy constructor
 Cars(Cars & b){
    this->value=value;
    this->name=name;
 }
 
 //use of getter and setter for accessing private class 
 char getName(){
    return name;
}
int getValue(){
    return value;
}
void setName(char n) {
    name=n;
}
void setValue(int v){
    value=v;
}

//Destructor
~Cars(){
 cout<<"destructor is called"<<endl;
}
//static keyword
static int level;
//static function
static int random(){
    return level;
}
};
int Cars :: level=9; //static keyword initialise
*/
//ENCAPSULATION
/*
class Student{
private:
string name;
int age;
int height;
public:
int getAge(){
    return this->age;
}
};
*/

//INHERITANCE
/*
class Human{
 public:
 int age;
 int weight;
 int height;
 public:
 int getAge(){
    return this->age;
 }
  int setWeight(int w){
    this->weight=w;
  }
};
class Male:public Human{
    public:
  string color; 
  void sleep(){
    cout<<"Aadmi so rha h"<<endl;
  }
};
//MULTI LEVEL INHERITANCE
class Aayush:public Male{
  
};

//MULTIPLE INHERITANCE
class Animal{
 public:
 int age;
 int height;
 public:
 void bark(){
  cout<<"Barking"<<endl;
 }
};
class Human{
public:
string color;
public:
void speak(){
  cout<<"Speaking"<<endl;
}
};
class Person :public Animal,public Human{

};
//HIERARCHICAL INHERITANCE
class B: public Animal{
  public:
  void func(){
  cout<<"inherited 1"<<endl;}
};
class C :public Animal{
  public:
  void f2(){
  cout<<"inherited 2"<<endl;}
};

//POLYMORPHISM (function overloading)
class A{
  public:
  void sayHello(){
    cout<<"hello garvita"<<endl;
  }
  int sayHello(string name){
    cout<<"hello "<<name<<endl;
    return 1;
  }
};

  //operator overloading
  class B{
      public:
      int a;
      int b;
  public:
  int add(){
    return a+b;
  }
  void operator+(B &obj){
    int value1=this->a;
    int value2=obj.a;
    cout<<"output "<<value2-value1<<endl;
  }
  };
  */
 //RUN TIME POLYMORPHISM (FUNCTION OVERRIDING)
 class Animal{
 public:
 void speak(){
  cout<<"speaking"<<endl;
 }
 };
 class Dog:public Animal{
  public :
  void speak(){
    cout<<"barking"<<endl;
  }
 };



int main (){
    /*
//creation of obj
Cars c1;
cout<<"size of object created is :"<<sizeof(c1)<<endl;
//if no properties specified in class then also size of obj created is 1

c1.value=54;
cout<<"value is:"<<c1.value<<endl;
//private class accessing 
//cout<<"name is"<<c1.name<<endl;(error bcz private class)
cout<<"name is:"<<c1.getName()<<endl;
c1.setValue(20);
cout<<"name after setting is:"<<c1.getValue()<<endl;

//static allocation
Cars c;
c.setValue(20);
c.setName('A');
cout<<"value is :"<<c.value<<endl;
cout<<"name is:"<<c.getName()<<endl;

//dynamic allocation
Cars *b=new Cars;
b->setValue(30);
b->setName('S');
cout<<"value is "<<(*b).value<<endl;
cout<<"name is:"<<b->getName()<<endl;
//can also be written as below
cout<<"name is:"<<(*b).getName()<<endl;

// constructor (when we make manual constructor then the default constructor formed by the device is destroyed )
cout<<"hello"<<endl;
Cars c;
Cars *q=new Cars;

//parameterised constructor(we will use this parameter which indicates the address to the current obj)
Cars c(40);
cout<<"address of object:"<<&c<<endl;
c.getValue();

//copy constructor
  Cars c(50,'A');
  c.print();

 Cars R(c);
 c.print();
 
  
//shallow copy , in this we access the same address by 2 different names , this we make use of default constructor
//deep copy , in this we form a entire new array , so both the addresses r diff, in this we make use manually defined copy constructor

//copy assignment operator (in this basically one object assign its values to another obj)
// eg: c1=c2;

//Destructor (memory deallocation:it deletes the memory allocated by the constructor)
//static allocation (in this a simple constructor is called and a destructor is called automatically)

Cars c; 

//dynamic (in this alos a simple constructor is called but we have to call the destructor manually)
Cars *v=new Cars;
delete v; // manual destructor call

//static keyword (it is basically a property in class that do not require an obj to get accessed)
// also this property is independent of the class properties
cout<<Cars::level<<endl;

//static function
cout<<Cars::random()<<endl;

//ENCAPSULATION
Student first;
cout<<"Sab Changa!!"<<endl;
*/

//INHERITANCE
/*
Male obj1;
cout<<obj1.age<<endl;
cout<<obj1.weight<<endl;
cout<<obj1.height<<endl;
cout<<obj1.color<<endl;
obj1.setWeight(45);
cout<<obj1.weight<<endl;
obj1.sleep();
above example can be considered as a single inheritance

//MULTI LEVEL INHERITANCE
  Aayush a;
 a.sleep();
 
//MULTIPLE INHERITANCE
Person p;
p.speak();
p.bark();

//HIERARCHICAL INHERITANCE
Animal a;
a.bark();
B b;
b.bark();
b.func();
C c;
    c.bark();
    c.f2();
//HYBRID INHERITANCE(combination of more than 1 type of inheritance)

//POLYMORPHISM(function overloading)
A obj;
obj.sayHello("mita");

//OPERATOR OVERLOADING
B obj1,obj2;
obj1.a=10;
obj2.a=7;
obj1+obj2; //operator overloading
*/
//RUN TIME POLYMORPHISM (FUNCTION OVERRIDING)
Dog obj;
obj.speak();
return 0;
}




