//Menu driven program to find product of 2 complex numbers,conjugate or modulus according to user's choice.
#include <iostream>
#include <math.h>
using namespace std;
class Complex
{
private:
	float real,img;
public:
	void getReal(){                                                //Function to accept real part.
		cin>>real;
	}
	void getImg(){                                                 //Function to accept imaginary part.
		cin>>img;
	}
	void display(){                                                //Function to display a complex number.
		if(img>=0)
	  		cout<<real<<"+"<<img<<"i\n";
	 	else 
	  		cout<<real<<img<<"i\n"; 
	}
	void mult(Complex c1, Complex c2){                             //Function to find product of 2 complex numbers.
		real=(c1.real*c2.real)+(c1.img*c2.img)*(-1);
	 	img=(c1.real*c2.img)+c1.img*c2.real;
	}
	void conjugate(Complex c1){                                    //Function to find conjugate of a complex number.
		real=c1.real;
		img=-c1.img;
	}
	float modulus(Complex c1){                                     //Function to find modulus.
		real=pow(real,2);
		img=pow(img,2);
		return(sqrt(real+img));
	}
};
int main()
{   
	Complex c1,c2,c3;
	int ch;
	float mod;
	cout<<"What function you want to perform on the complex number :\n1.Multiplication of 2 complex numbers\n2.Conjugate of complex number\n3.Modulus of complex number\n  ";
	cin>>ch;
	system("clear");
	switch(ch){
      case 1 :  cout<<"Your choice is multiplication of 2 complex number\n";
                cout<<"Enter the real part of first complex number :  ";
	            c1.getReal();
	            cout<<"Enter the imaginary part of first complex number :  ";
	            c1.getImg();
	            cout<<"Enter the real part of second complex number :  ";
	            c2.getReal();
	            cout<<"Enter the imaginary part of second complex number :  ";
	            c2.getImg();
	            c3.mult(c1,c2);
	            cout<<"The product is : ";
	            c3.display();
	            break;

	  case 2 :  cout<<"Your choice is conjugate of complex number\n";
	            cout<<"Enter the real part of complex number :  ";
	            c1.getReal();
	            cout<<"Enter the imaginary part of complex number :  ";
	            c1.getImg();
	            c1.conjugate(c1);
	            cout<<"\nThe conjugate is:";
                c1.display();
                break;
      case 3 :  cout<<"Your choice is modulus of a complex number\n";
                cout<<"Enter the real part of complex number :  ";
	            c1.getReal();
	            cout<<"Enter the imaginary part of complex number :  ";
	            c1.getImg();
	            mod=c1.modulus(c1);
                cout<<"Modulus of complex number is : "<<mod<<"\n";
                break;
      default : cout<<"Wrong input";         
	}
	return 0;
}