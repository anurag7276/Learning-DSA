#include<iostream>
#include<exception>

using namespace std;
/*
int main()
{
        int a,b;
        cin>>a>>b;
       
       try{
        if(b==0)
        throw "Divide by 0 is not possible ";
        int c= a/b;
        cout<<c<<endl;
       }
       catch (const char *e )
       {
        cout<<"Exception Occured:"<<e<<endl;
       }

      // output will be:-
      //    4 0
      //    Exception Occured:Divide by 0 is not possible 

    //  4  2
    //  2
}
*/


int main()
{
        try{
                int *p  = new int[100000000000000000];
                cout<<"Memory allocation is successfully\n";
                delete []p;

        }
        catch (const bad_alloc &e)
        {
                cout<<"Exception Occured:"<<e.what()<<endl;
        }
}
