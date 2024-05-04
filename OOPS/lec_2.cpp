#include<iostream>
using namespace std;

//    Constructor 
 
 /*
   construtor => It is a special function   that is invoked automatically 
   at the time of object creation

   Name of the constructor should be same as class name

   It doesn't have any return type

   It is used to initialize the value


     compiler bydefault constructor banata hai but khud se ek bhi constructor bana de 
     to phir bydefault nahi banayega


    Constructer cannot be re declared  means same no. of parameterized constructor  are not allowed 
 */

/*
class Customer
{
        string name;
        int acc_num;
        int balance;

        public:
       
     // Default Constructor
    Customer()
    {
        name = "Anurag";
    } 
  //  parameterized Constructor
    Customer (string a, int b, int c)
    {
       name = a;
       acc_num = b;
       balance = c;
    }
      // or any one is used
    Customer (string name, int acc_num, int balance)
    {
      (*this).name = name;
       this->acc_num = acc_num;
       this->balance = balance;
    }

    // Inline Constructor

   inline Customer(string a, int b): name(a), acc_num(b)
   {

   }
     

      void display ()
      {
        cout << name <<endl;
      }

      // copy constructor

      Customer(Customer &B)
      {
        name = B.name;

      }


};

int main()
{

  Customer A1, A2;        
  A1.display();   // to execute we get  =>  Anurag (default constructor)
  A2.display();   // to execute we get  =>  Anurag (default constructor)



  Customer A3("anurag" , 18 , 1000);
  A3.display();  // anurag

      // Customer A4( 18);  => error bcoz constructor nahi hai aur ab  by default nahi banega 
     
     // constructor name is same but parameter take different(null ,3) is called constructor overloading
 

   Customer A4(A3);
   A4.display();     //  =>  same as A3 PRINT


   A5 = A3;

   A5.display();
}

*/

//     Destructor

/*
   Destructor => It is an instance member function that is invoked automatically whenever 
           an object is going to be destroyed


           It is last function that is going to be called before
           an Object is destroyed 

         

*/


/*
class Customer
{
  string name;
  int *data;
  public:

  Customer()
  {
    name = " anurag";
    data = new int;
    *data = 10;

    cout<<" constructor is called\n";

  }

  // Destructor will be create only ones

  ~Customer()
  {
         delete data;   //  dynamically memory released by this line;
         cout<<" destructor is called\n";
  }
};

int main()
{
  Customer A1;
}

*/


 /*

class Customer
{
  string name;
  int *data;
  public:
   
   Customer()
   {
    name = "4";
        cout<< "constructor is" << name<< endl;
   }
  Customer(string name)
  {
    this->name = name;
    cout<< "constructor is" << name<< endl;
        
  }

  ~Customer()
  {
    cout<< "destructor is"<< name<<endl;
  }
};

int main()
{
  Customer A1("1") ,A2("2") ,A3("3");
  Customer *A4 = new Customer;
  delete A4; 
  
  // => Output will be:-
constructor is1
constructor is2
constructor is3
constructor is4
destructor is4
destructor is3
destructor is2
destructor is1
  
}
  
 */
