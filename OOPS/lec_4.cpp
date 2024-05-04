#include<iostream>
using namespace std;

//  Inheritance 

/*
    # the capability of a class to derive property and characteristic
      from another class


                external code      within class      derived class
      Public:       1                  1                  1 
      
   Protected:       0                  1                   1

    private:        0                  1                   0



      syntax of  derived class =>  class child_name : access_modifier  parent_name  

          
          Base         child            result
          public        public          public
          public        protected       protected
          public        private         private
          protected     public          protected
          protected     protected       protected
          protected     private         private

      private doesnot inherit;

          strictness =>  private > protected > public
    
    */

/*
 class Human
 {
  string Religion, color;

  protected:
  string name;
  int age , weight;
 };

 class Student : public Human
 {
  private:
  int roll_num, fees;
  
  public:

  Student(string name, int age, int weight , int fees , int roll_num)
  {
    this->name = name;
    this->age = age;
    this->weight = weight;
    this->roll_num = roll_num;
    this->fees = fees;

  }

   void display()
   {
    cout<< name<<" age is "<< age << " ,weight is"<<weight <<" ,roll_num is"<<roll_num<<" ,fees is "<<fees;
   }
 };

 int main()
 {
  Student A("Anurag",18,60,00,37);
   A.display();  // Anurag age is 18 ,weight is60 ,roll_num is37 ,fees is 0

 }

*/
