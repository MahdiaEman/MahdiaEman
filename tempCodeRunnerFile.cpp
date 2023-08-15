#include<iostream>
using namespace std;

class rational
{
	private:
		int n;
		int d;
	public:
		void input();
		void display(); 
		void by();
		rational add(rational r);

        //constructor with default parameter
        rational(int a=5 ,int b=6)
        {
            n=a;
            d=b;
        }
        
        //copy constructor
        rational(rational&object)
        {
            n=object.n;
            d=object.d;
        }
        
        //true or fase
        bool compare()
        {
            bool r1=true;
            bool r2=false;
            if (r1 == r2)
            {
                cout << "true";  
            }    
            else
            {
                cout << "false";
            }  

            cout<<endl;   
             return 0;
        }
};

void rational::input()
{
    cout<<endl;
	cout<<"Enter neumerator : ";
	cin>>n;
	cout<<endl;
	cout<<"Entre denominator : ";
	cin>>d;
	cout<<endl;
}

void rational::by()
{
	for(int i=1 ; i<50 ; i++)
	{
		if(n % i == 0 && d %i == 0)
		{
			d = d/i;
			n = n /i;
		}
	}
}

rational rational::add(rational r)
{
	rational sum;
	sum.n =(n*r.d)+(d*r.n);
	sum. d = (d*r.d);
	return sum;
}

void rational::display()
{
    cout<<"The sum of Rational Numbers is : "<<endl;
	cout<<n<<endl;
    cout<<"--"<<endl;
    cout<<d<<endl;
    cout<<endl;
}

int main()
{
	rational r1,r2;


	r1.input();
	r1.by();

	r2.input();
	r2.by();

	rational r3;
	r3 =r1.add(r2);
	r3.by();
	r3.display();	
    
    r1.compare();
	return 0;
}