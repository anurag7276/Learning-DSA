#include<iostream>
using namespace std;


//    Static Data Member 
/*
  # They are attribute of classes or class member  

  # It is declared using static keyword

  # Only one copy of that member is created for the entire
  class and is shared by all the Object 

  # It is initialized before any object of this class is created

*/

/*

class Customer
{
        string name;
        int acc_num , balance ;
        static int total_customer;
        public:

        Customer(string name , int acc_num , int balance)
        {
                this->name = name;
                this->acc_num = acc_num;
                this->balance = balance;
                total_customer++;

        }

        static void acceStatic()  // => static member function   ye sirf static wale ko hi acces kar skta hai  pivate ko nahi
        {
                cout << total_customer<<endl;
        }

        void display()
        {
                cout<<name<<" "<< acc_num << " "<<balance<< " "<<total_customer<<endl;
        }
        void display_total()
        {
                cout<< total_customer<< endl;
        }

};  

int Customer :: total_customer = 0;    // => scope resolution operator( ::)

int main()
{
  Customer A1("anurag" , 1 , 1000);
  Customer A2("singh" , 2 , 1000);
    //A1.display();  // tc=>2
    //A2.display();  // tc=>2

   //  Customer::total_customer = 5; to use directly then variable must in public section
   // A1.display_total();   //  5

   Customer:: acceStatic();  //  2

}
*/

//   Encapsulation

/*
   # Wrapping up of data and information(variable,fn) in a single unit 
     while controlling access to them


     encapsulation me variable ko private hi rakhate hai fn ki help se acces(modification ) kar skte hai
*/
                        
// Abstraction

/*
   # Displaying only essential information and hiding the details


   jo kaam de wo complete ho jaye kaise ho raha usse nshi matlab 
*/

