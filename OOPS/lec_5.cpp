#include<iostream>
using namespace std;

//    Types of Inheritance 

// single Inheritance

/*

class Human
{
        protected:
        string name;
        int age ;

        public:

        Human(string name, int age)
        {
                this->name = name;
                this->age = age;
        }

        void display()
        {
                cout<< name << " " <<age<< " \n" ;

        }

        void work()
        {
                cout<< " I am working \n" ;
        }


};

 class Student : public Human
 {
        int roll_num , fees;

        public:
        Student(string name, int age, int roll_num, int fees): Human(name , age)
        {
                this->roll_num = roll_num;
                this->fees = fees;

        }

        void display()
        {
         cout<< name<<" age is "<< age  <<" ,roll_num is"<<roll_num<<" ,fees is "<<fees;
        }

        // yaha fn na mile to parent ke pass jata for example display() na hota to parent wala display use me aata
 };

 int main()
 {
        Student A1 ("Anurag", 18,10,00);
        A1.display();  // Anurag age is 18 ,roll_num is10 ,fees is 0


 }

*/

// Multilevel Inheritance

/*

class Person
{
        protected:
        string name;

        public:
        void intoduce()
        {
                cout<<"hello my name is :"<<name<<endl;
        }
};

class Employee: public Person
{
        protected:
        int salary;
         
         public:
         void monthly_salary()
         {
                cout<<"My monthly salary is:"<< salary<< endl;
         }
};

class Manager : public Employee
{
        public:
        string department;

        Manager (string name, int salary, string department)
        {
                this->name = name;
                this->salary = salary;
                this->department = department;
        };

        void work()
        {
                cout<<"I am leading the department "<<department<<endl;
        }

};

int main()
{
        Manager A1("Anurag",200,"cse");
        A1.intoduce();  // hello my name is :Anurag
        A1.monthly_salary();  //  My monthly salary is:200

        A1.work();  //  I am leading the department cse

}
*/

// Multiple Inheritance


/*
class Engineer
{
        public:
        string specilization;

        void work()
        {
                cout<< "I have specilization in "<< specilization<< endl;
        }
};

class Youtuber
{
        public :
        int subscribers;

        void contentcreator()
        {
                cout<< "I have a subscriber base of "<<subscribers<<endl;
        }
};

class CodeTeacher : public Engineer , public Youtuber
{
        public:
        string name;

        CodeTeacher(string name, string specilization, int subscribers)
        {
                this->name = name;
                this->specilization = specilization;
                this->subscribers = subscribers;
        };

        void showcase()
        {
                cout<< "My name is "<< name<<endl;
                work();
                contentcreator();
        };
};

int main()
{
        CodeTeacher A1("Anurag", "cse",9999);
        A1.showcase();
      // My name is Anurag
      // I have specilization in cse
     // I have a subscriber base of 9999
};
*/

// Hierarchical Inheritance

/*

class Human
{
        protected:
        string name;
        int age ;

        public:

        Human()
        {

        }

        Human(string name, int age)
        {
                this->name = name;
                this->age = age;
        }

        void display()
        {
                cout<< name << " " <<age<< " \n" ;

        }

        void work()
        {
                cout<< " I am working \n" ;
        }


};

 class Student : public Human
 {
        int roll_num , fees;

        public:
        Student(string name, int age, int roll_num, int fees): Human(name , age)
        {
                this->roll_num = roll_num;
                this->fees = fees;

        }

        void display()
        {
         cout<< name<<" age is "<< age  <<" ,roll_num is"<<roll_num<<" ,fees is "<<fees;
        }

        // yaha fn na mile to parent ke pass jata for example display() na hota to parent wala display use me aata
 };

 class Teacher : public Human
 {
        int salary;
        public:
        Teacher(int salary, string name, int age)
        {
                this->salary = salary;
                this->name = name;
                this->age = age;
    
        }
       void display()
       {
        cout<<name<<" "<<salary<<" "<<age<<" "<< endl;
       }

 };   

 int main()
 {
        Student A1 ("Anurag", 18,10,00);
        A1.display();  
        Teacher A2(99," mohit",23);
        A2.display();

     //   Anurag age is 18 ,roll_num is10 ,fees is 0 mohit 99 23 

 }

*/


// Hybrid Inheritance

/*

// student , boy, girl, male, female 

class Male
{
        public:
        void Maleprint()
        {
                cout<<" I am male\n";
        }

};
class FeMale
{
          public:
        void FeMaleprint()
        {
                cout<<" I am female\n";
        }

};
class Student
{
        public:
        void print()
        {
                cout<<" I am student\n";
        }

};

class Boy : public Student ,public Male
{
        public:
        void Boyprint()
        {
                cout<<" I am boy\n";
        }
        
};
class Girl : public Student , public FeMale
{
        public:
        void Girlprint()
        {
                cout<<" I am Girl\n";
        }
        
};



int main()
{
        Girl G1;
        Boy B1;
        G1.Girlprint();
        G1.print();
        B1.Maleprint();
        B1.print();
 
//        I am Girl
//        I am student
//        I am male
//        I am student       

}
*/

// Multipath Inheritance


/*
class Human
{
        public:
        string name;
        void display()
        {
                cout<< "My name is "<< name<<" " << endl;
        }

};
class Engineer: public  virtual Human
{
        void money()
        {
                cout<<"  Hello Money\n";
        } 

        public:
        string specilization;

        void work()
        {
                cout<< "I have specilization in "<< specilization<< endl;
        }
};

class Youtuber: public virtual  Human
{
        public :
        int subscribers;

        void contentcreator()
        {
                cout<< "I have a subscriber base of "<<subscribers<<endl;
        }
};

class CodeTeacher :  public Youtuber ,  public Engineer
{
        public:
       int salary;
       CodeTeacher()
       {

       }
       // 2 name aur display present hai youtuber wala aur engineer wala => thats why use virtual 

        CodeTeacher(string name, string specilization, int subscribers, int salary)
        {
                this->name = name;
                this->specilization = specilization;
                this->subscribers = subscribers;
                this->salary = salary;
        };

      
};

int main()
{
        CodeTeacher A1("Anurag", "cse",9999 , 99);
        A1.display();  // My name is Anurag 
   
};

*/

