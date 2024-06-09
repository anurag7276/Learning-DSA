#include<iostream>
using namespace std;
//  Exception Handling

/*
  An exception is an unexpected problem that arises during the execution of a 
  program and our program terminates suddenly with some errors/issue. 
  Exception occurs during the running of the programs


  TRY => It represent a block of code that may through a exception placed 
  inside the try block
 or                    or
 the try keyword represents a block of code that may throw an 
 exception placed inside the try block . If an exception occurs , try 
 block throw that exception


  CATCH=> It represent a block of code that is executed when a particular exception
  is thrown from the try block
  or                or   
  The catch statement represent a block of code that is executed 
  when a particular exception is thrown from the try block
  the code to handle the exception is written inside the catch block.


  An exception in C++ can be thrown using the throw keyword.
  when a particular encounters a throw statement , then it immediately
  terminates the current function and starts finding a matching 
  catch block to handle the thrown exception. 

  Throw=> An exception in C++ can be thrown using the throw keyword

*/

class   Customer 
{
  string name;
  int balance, acc_num;

  public:
  Customer(string name, int balance, int acc_num)
  {
    this->name = name;
    this->balance = balance;
    this->acc_num = acc_num;
  }
// deposit 
void deposit (int amount)
{
  if (amount>0)
  {
    balance+=amount;
    cout<<amount<<" rs is credited successfully\n";
  }

  else{
       throw "amount should be greater than 0\n";
  }
}
// withdraw
void withdraw(int amount)
{
  if (amount>0 && amount<=balance)
  {
    balance-=amount;
    cout<<amount <<" rs is debited successfully\n";
  }

  else if(amount<0)
  {
     throw "amount should be greater than 0\n";
  }
  else 
  {
      throw "Your balance is low\n";
  }
}

};

int main()
{
  Customer C1("Anurag",5000,10);

  try{
  C1.deposit(100);
  C1.withdraw(6000);
   }
   catch(const char *e){
    cout<<"Exception Ocurred: "<<e<<endl;
   }
   catch(const runtime_error &e){
    cout<<"Exception Ocurred: "<<e.what()<<endl;
   }
   catch(const bad_alloc &e){
    cout<<"Exception Ocurred: "<<e.what()<<endl;
   }


}
