//Star 32
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{  int n;
   cout<<"enter the number of rows "<<endl;
   cin>>n;
   
   for(int i=1;i<=n;i++)
   {  for(int j=1;j<=n;j++)
       {  
           if(i==j||j==n-i+1)
           cout<<"*";
           else
           cout<<" ";
           
       
	   }
	   cout<<endl;
   }
   getch();
   return 0;
}
