#include<iostream>
using namespace std;

	int gcd(int a, int b)
{
		if(a<0||b<0)
		{
			cout<<"invalid";
		}
	
	    else
	    {
	    int temp=0;
	
	       while(b!=0)
	      {
		    temp=a;
		    a=b;
		    b=temp%b;
	      }
	        return a;
        }
}


	int gcd_recur(int a, int b)
{
		if(a<0||b<0)
		{
			cout<<"invalid";
		}
		else if(a==b)
		{
			return a;
		}
		else if (a>b)
		{
			return gcd_recur(a-b, b);
		}
		else
		{
			return gcd_recur(a, b-a);
		}
}

int pow(int a, int b)
{
    int temp=1;
    if(b==0)
	{
		cout<<0;
	}else
	{
	for(int i=0; i<b; i++)
	  {
		temp=temp*a;
		
	  }
	return temp;
    }
}

int pow_recur(int a, int b)
{
	if(b!=0)
	return(a*pow_recur(a, b-1));
	else
	return 1;
}

int fac(int a)
{
	int y=1;
    for(int i=1; i<=a; i++)
	{
    	y=y*i;
    	
	}
	return y;
	
}

int fac_recur(int a)
{
	if(a!=1)
	return a*fac_recur(a-1);
	else
	return 1;
	
}

int fib(int n)
{
	int x=0, y=1, i, z=0;
    
   
    for(i=0;i<n;i++)
	{
	
	
    cout<<x<<" ";
    
    z= x+y;
    x=y;
    y=z;
}
}

int fib_recur(int a)
{
	if((a==1)||(a==0))
	return a;
	
	else{
		return(fib_recur(a-1)+fib_recur(a-2));
	}

}


int main()
{
	int x,y,a,i;
	
	cout<<"GCD"<<endl;
    cout<<"enter num1: ";
	cin>>x;
	cout<<"enter num2: ";
	cin>>y;
	cout<<"gcd of two numbers: "<<gcd(x,y)<<endl;
	cout<<"gcd of two numbers using recursion: "<<gcd_recur(x,y)<<endl;
	
	cout<<"RAISED TO POWER"<<endl;
	cout<<"enter num1: ";
	cin>>x;
	cout<<"enter num2: ";
	cin>>y;
	cout<<x<<" raised to power "<<y<<" is: "<<pow(x,y)<<endl;
	cout<<"using recursive method : "<<pow_recur(x,y)<<endl;
	
	cout<<"FACTORIAL"<<endl;
	cout<<"enter the num: ";
	cin>>a;
	cout<<"factorial is: "<<fac(a)<<endl;
	cout<<"factorial using recursion: "<<fac_recur(a)<<endl;
	
	cout<<"FIBONACCI SERIES"<<endl;
	cout<<"enter the num"<<endl;
	cin>>a;
	cout<<"the fibonacci series: "<<endl;
	fib(a);
	cout<<"\nthe fibonacci series using recursion: "<<endl;
	while(i<a){
	cout<<" "<<fib_recur(i)<<" ";
	i++;
    }
	
    return 0;
	

}

	
