#include<iostream>
using namespace std;

// 01 pattern 

/*


        * 
      * *
    * * *
  * * * *
* * * * *
int main()
{
        int row,col;

        for(row = 1 ; row<=5 ; row++)
        {
                for(col=1; col<=5-row; col++)
                {
                    cout<<"  ";     // 2 space (one print one for space)
                }

                for(col=1; col<=row; col++)
                {
                        cout<<"* ";   // also print one space
                }

                cout<< endl;
        }
}

*/

// 02 pattern

/*

    *
   * *
  * * *
 * * * *
* * * * *

int main()
{
        int row,col;

        for(row = 1 ; row<=5 ; row++)
        {
                for(col=1; col<=5-row; col++)
                {
                    cout<<" ";
                }

                for(col=1; col<=row; col++)
                {
                        cout<<"* ";
                }

                cout<< endl;
        }
}

*/

// 03 pattern


/*

        1 
      2 2
    3 3 3
  4 4 4 4
5 5 5 5 5

int main()
{
        int row,col;

        for(row = 1 ; row<=5 ; row++)
        {
                for(col=1; col<=5-row; col++)
                {
                    cout<<"  ";
                }

                for(col=1; col<=row; col++)
                {
                        cout<<row<<" ";
                }

                cout<< endl;
        }
}

*/

// 04 pattern


/*

        1 
      2 1 
    3 2 1 
  4 3 2 1 
5 4 3 2 1 

int main()
{
        int row,col;

        for(row = 1 ; row<=5 ; row++)
        {
                for(col=1; col<=5-row; col++)
                {
                    cout<<"  ";
                }

                for(col=row; col>=1; col--)
                {
                        cout<<col<<" ";
                }

                cout<< endl;
        }
}

*/

// 05 pattern 


/*

        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 

int main()
{
        int row,col;

        for(row = 1 ; row<=5 ; row++)
        {
                for(col=1; col<=5-row; col++)
                {
                    cout<<"  ";
                }

                for(col=1; col<=2*row-1; col++)
                {
                        cout<<"* ";
                }

                cout<< endl;
        }
}

  
*/


// 06 pattern

/*

        1 
      1 2 1 
    1 2 3 2 1 
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1 

int main()
{
        int row,col;

        for(row = 1 ; row<=5 ; row++)
        {
                for(col=1; col<=5-row; col++)
                {
                    cout<<"  ";
                }

                for(col=1; col<=row; col++)
                {
                        cout<<col<<" ";
                }
                for(col=row-1; col>=1; col--)
                {
                        cout<<col<<" ";
                }

                cout<< endl;
        }
}

*/

// 07 pattern 

/*

* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 

int main()
{
        int row,col;

        for(row = 5 ; row>=1 ; row--)
        {
                for(col=1; col<=5-row; col++)    //(9-(2*row-1)) / 2  => 5-row
                {
                    cout<<"  ";
                }

                for(col=1; col<=2*row-1; col++)
                {
                        cout<<"* ";
                }

                cout<< endl;
        }
}

*/

// 08 pattern 

/*

* * * * * * * * * * 
* * * *     * * * * 
* * *         * * *
* *             * *
*                 *
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *

int main()
{
        int row,col;

        for(row = 5 ; row>=1 ; row--)
        {      
                // print *
                for(col=1; col<=row; col++)   
                {
                    cout<<"* ";
                }

                for(col=1; col<=2*5- 2*row; col++)
                {     //  print space
                        cout<<"  ";
                }
                // print *
                for(col=1; col<=row; col++)   
                {
                    cout<<"* ";
                }

                cout<< endl;
        }




        for(row = 1 ; row<=5 ; row++)
        {      
                // print *
                for(col=1; col<=row; col++)   
                {
                    cout<<"* ";
                }

                for(col=1; col<=2*5- 2*row; col++)
                {     //  print space
                        cout<<"  ";
                }
                // print *
                for(col=1; col<=row; col++)   
                {
                    cout<<"* ";
                }

                cout<< endl;
        }
}

*/

// 09 pattern 


/*

*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 

int main()
{  int row,col;

         for(row = 1 ; row<=5 ; row++)
        {      
                // print *
                for(col=1; col<=row; col++)   
                {
                    cout<<"* ";
                }

                for(col=1; col<=2*5- 2*row; col++)
                {     //  print space
                        cout<<"  ";
                }
                // print *
                for(col=1; col<=row; col++)   
                {
                    cout<<"* ";
                }

                cout<< endl;
        }





         for(row = 5-1 ; row>=1; row--)
        {      
                // print *
                for(col=1; col<=row; col++)   
                {
                    cout<<"* ";
                }

                for(col=1; col<=2*5- 2*row; col++)
                {     //  print space
                        cout<<"  ";
                }
                // print *
                for(col=1; col<=row; col++)   
                {
                    cout<<"* ";
                }

                cout<< endl;
        }
}


*/

// 10 pattern


/*

    * 
   * * 
  * * * 
 * * * * 
* * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 


int main()
{
        int row,col;

        for(row = 1 ; row<=5 ; row++)
        {
                for(col=1; col<=5-row; col++)
                {
                    cout<<" ";
                }

                for(col=1; col<=row; col++)
                {
                        cout<<"* ";
                }

                cout<< endl;
        }



        for(row = 5 ; row>=1 ; row--)
        {
                for(col=1; col<=5-row; col++)
                {
                    cout<<" ";
                }

                for(col=1; col<=row; col++)
                {
                        cout<<"* ";
                }

                cout<< endl;
        }
}

*/

