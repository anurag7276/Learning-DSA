#include<iostream>
using namespace std;
    //    OBJECT ORIENTED PROGRAMMING
/*

  OOP =>  IT is an approach Or a progaming pattern where the programs are strutured
       aroud Object rather than Fuction and Logic


*/

/*
  class Student
   {
        public:       // by default private hota hai (kuchh nahi means private)

        string name;
        int age , roll_number;
        string grade;
   };

int main()
{
        Student S1;

        S1.name = "Anurag ";
        S1.age = 18;

        cout<<S1.age;   // 18

}
*/

  //        CLASS
/*
 
    class => It is user defined data type , ex.=Student in above code

   Blueprint for creating objects 

*/
 
 /*
  class Student
   {
      // private are accessable within the class

        string name;
        int age , roll_number;
        string grade;

        public:
        // function getter and setter 

        void setname(string s)
        {   
                if(s.size()==0)
                {
                        cout<< "invalid name;";
                        return;
                        
                }
                name = s;
        }
        void setgrade(string s)
        {
                grade = s;
        }

        void getname()
        {
                cout<< name<< endl;
        }

        string get_grade (int pin)
        {
                if(pin==123)
                return grade;

                return " ";
        }
   };

int main()
{
        Student S1;
  S1.setname("Anurag");
  S1.setgrade("A");
  S1.getname();   // Anurag

  cout<< S1.get_grade(123);     //   A 
  cout<< S1.get_grade(12);      //  " "

}
  */


   //   OBJECT

/*
    => It is an entity that has a state and behavior

    Anything that exist in physical world

    It is an instance of a class 

 */

//   Padding concept 
/*
  1 byte => multiple of 1
  2 byte => multiple of 2
  4 byte => multiple of 4
  8 byte => multiple of 8


 examle=>  char a, char b , int c
            0 1 2 3 4 5  6 7 
            a b x x c x  x x     => 8 byte


 examle=>  char a(1), int c(4) , char b(1)
             0 1 2 3 4 5  6 7 8 9 10 11 12 13 14 
             a x x x c x  x x b x  x  x            => 12 byte( 9 byte nahi hogi bcoz max size in this ex=4 is divisor of ans and 9 is not divisble by 4 but nearest no is 12 so size will be => 12 )
           
*/
 
 /*

class a 
{
        char c;
        char d ;
        int b;

};
class b 
{
        char c;
        int b;
        char d ;

};
 
 int main()
 {
        a obj ;
        b obj1;
        cout<< sizeof(obj)<<" ";   // => 8
        cout<< sizeof(obj1)<<" ";   // => 12
 }

*/



//    Static vs Dynamic memory allocation

/*
  
  int *p = new int
     *p = 10;   simlarly      p is created in heap and store 10

     Student *S = new Student
      (*S).name = "Anurag"
      or 
      S->name ="Anurag"

*/
       
/*
