#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <ctime>
 using namespace std;
 
 void write_arguments(int argc, char *argv[]);
 long long unsigned int fibbonaciR(int n);
 long double harmonic(int n);
 long double geometic_rand(int n);
 void select(int arg1, char arg2 );
 
 int main (int argc, char **argv) {
 	
	select(atoi(argv[1]),argv[2][0]);

    write_arguments(argc, argv);
    getchar();
 }
  void select(int arg1, char arg2)
  {
	if (arg2=='f' or arg2=='F')
	{
		for(int i=0;i<arg1;i++)
		{
				
			    cout<<fibbonaciR(i+1)<<endl;	
		}
		
	}
	else if(arg2=='h' || arg2=='H')
	{
		for(int i=0;i<arg1;i++)
		{
			cout<<harmonic(i)<<endl;	
		}
		
	}
	else if(arg2=='g' or arg2=='G')
	{
		for(int i=0;i<arg1;i++)
		{
		cout<<geometic_rand(i+1)<<endl;	
		}
		
	}	
  }
  long double geometic_rand(int n)
  {
  	srand(time(NULL));
  	long double liczba=((rand()&202) -100)/0.9;
  	double q=((rand()&3) -1)/0.9;
  	for (int i=0;i<n;++i)
	  {
	  	liczba*=q;
	  }
  	   return liczba;
  }
 
  long double harmonic(int n)
  {
  	return n<1 ? 1 : harmonic(n-1)+1.0/n  ;
  }
 
 long long unsigned int fibbonaciR(int n)
 {

 	
	return n<3 ? 1 : fibbonaciR(n-2)+fibbonaciR(n-1);	
 }
  
 void write_arguments (int argc, char *argv[]) {
    cout << "Liczba argumentow w wierszu polecen: " << argc << endl;
    for(int i=0; i<argc; ++i)
       cout << "Element numer " << i << " wiersza polecen ma wartosc: " 
 			<< argv[i] << endl;
 }