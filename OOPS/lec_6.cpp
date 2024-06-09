#include<iostream>
using namespace std;

// Polymorphism (many form)

/*
                                Polymorphism  
          1) Compile time                     2) Run time
                  
      a) function overloading                 Virtual function
      b) Operator overloading
 
   
   // function name same but parameter different is called function overloading

   // Oerator same ho but work differently kare to use operator overloading kahte hai 
   for ex (+ => add{number} , concatenation{string})

   operator bi function ki jaise use ho skte hai
   syntax=> userdefined_datatype operator + (userdefined_datatype  &c)  c assign value of c2 
   =>copy constructor ki wajah se referene(&) use hua

   complex C3 = C1 + C2  => c1 call kar raha c2 work as argument
   C3.display() => c3 call kar raha hai
  */       

/*
 class Area
 {
        public:
    int calculateArea(int r)  // circle
    {
        return 3.14*r*r;
    }
    int calculateArea(int l, int b)  // rectangular
    {
        return l*b;
    }

 };

 int main()
 {
        Area A1,A2; // function name same but parameter different is called function overloading
        cout<<A1.calculateArea(4,4)<<endl; // 16
        cout<<A1.calculateArea(4)<<endl;   // 50
        cout<<A2.calculateArea(6)<<endl;   // 113
 }
 */

/*
class Complex
{
        int real, img;
        public:

        Complex()
        {

        }
        Complex(int real, int img)
        {
                this->real = real ;
                this->img = img;

        }
        void display()
        {
                 cout<< real<<" +i"<<img<<endl;
        }

        Complex operator +( Complex &C)
        {
                Complex ans;
                ans.real = real + C.real;
                ans.img = img + C.img;

        return ans;

        }

};

int main()
{
 Complex C1(3,4);
 Complex C2(4,6);

 Complex C3 = C1 + C2;
 C3.display();  // 7 +i10
}
*/

/*
class Animal
{
   // virtual void speak()=0  => pure virtual fn or abstract class but iski condition hai ki =>
   // animal class ka direct object create nahi kar skte 

        public:
         virtual void  speak()
        {
                cout<< "huhu\n";
        }

};
class Dog: public Animal
{
        public:
        void speak()
        {
                cout<< "bark\n";
        }

};

int main()
{
        // Animal *p;
        // p = new Dog();
        // p->speak();  = huhu [without use virtual ] virtual le bina ye compile time per fix hota 
        // ki kon fn call hoga aur p me dog ka address to run time me aati hai

         Animal *p;
        p = new Dog();
        p->speak(); // bark
}
*/
