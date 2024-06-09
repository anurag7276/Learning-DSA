#include<iostream>
#include<fstream>
using namespace std;

/*
int main()
{
        ifstream fin;
        // file ko open karo
        fin.open("zoom.txt");
        //fr read karo
        char c;
      //  fin>>c;  => space ko as a charecter nahi leta that's why use just below line code
       c= fin.get();
        while(! fin.eof())
        {
            cout<<c;
            c= fin.get();
        };
        fin.close();

}
*/

/*
int main()
{
        vector<int>arr[5];
        cout<<"enter the input";
        for(int i=0; i<5; i++)     
         cin>> arr[i];

         //file ko open karo
         ofstream fout;
            fout.open("zero.txt");
            fout<<"Original data\n";


            for(int i=0; i<5 ; i++)
            {
                fout<<arr[i]<<" ";
            };

            fout<<"\n Sorted data \n";
            sort(arr.begin(), arr.end());

               for(int i=0; i<5 ; i++)
            {
                fout<<arr[i]<<" ";
            };

        fout.close();




        //output will be:- in new created file 
        // Original data 
        // 123 78 4 118 13
        // sorted data 
        // 4 13 78 118 123


}
*/

int main()
{
        ofstream fout ;
        fout.open("z1.txt");
        fout<<"Hello India\n";
        fout<<"Hello Anurag\n";
        fout<<"Hello Bhai\n";
       fout.close();

       ifstream fin;
       fin.open("z1.txt");

       string line ;
        while(getline(fin , line))
        {
                cout<< line<<endl;
        }

        fin.close();

          // Hello India
          // Hello Anurag
          // Hello Bhai
}




int main()
{
        // File ko open karna
        ofstream fout;
        fout.open("zoom.txt"); // create kar dega phir open kar dega
        // Write kar skta hu
        fout<<"hello India";

        fout.close();  // Resource release kar paunga 
        // fr read karo

       
}


