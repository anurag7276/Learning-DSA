#include<iostream>
using namespace std;

//  01 pattern 

/*

* * * * * 
* * * * *
* * * * *
* * * * *
* * * * *

int main()
{
        int row,col;

        for(row=1;row<=5;row++)
        {
                for( col=1;col<=5;col++)            
                {
                        cout<<"* " ;
                
                }

                cout<<endl;
        }
}
*/

// 02 pattern

/*
1 1 1 1 1 
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5

int main()
{
        int row ,col;
        
        for(row=1 ; row<=5 ; row++)
        {
                for (col=1 ; col<=5 ; col++)
                {
                  cout<<row<<" ";
                }
                 
                 cout<<endl;

        }
}
*/


// 03 pattern

/*
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 

int main()
{
        int row , col;

        for(row=1; row<=5 ;row++)
        {
           for(col=1;col<=5;col++)
           {
                cout<<col<<" ";

           }

           cout<<endl;
        }
}
*/

// 04 pattern

/*
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 

int main()
{
  int row, col;
 

  for(row=1; row<=5 ;row++)
  {

    for(col=5 ; col>=1 ; col--)
    {
      cout<<col<<" " ;
    }
    cout<<endl;
  }
}
*/

// 05 pattern

/*
a a a a a 
b b b b b 
c c c c c 
d d d d d 
e e e e e 

int main()
{
        int row, col;
  char name='a';

        for(row=1; row<=5 ; row++)
        {     
                //  char name = 'a' +(row-1)
                for(col=1; col<=5 ;col++)
                {
                  cout<<name<<" ";
                  

                }
                name++;
                
                cout<<endl;
                

        }

}

*/


// 06 pattern
 
/*

a b c d e 
a b c d e 
a b c d e 
a b c d e 
a b c d e 


int main()
{
        int row,col;

        for(row = 0; row<5; row++)          =>  for(char col='a' ; col<=e ; col++){ cout<< col<" " ; }
        {
                        char name = 'a';
                for(col=0; col<5; col++)
                {
                        
                        cout<<name<<" ";
                        name++;

                }
                cout<<endl;
        }
}

*/

