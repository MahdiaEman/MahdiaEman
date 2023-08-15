#include<iostream>
#include<iostream>
using namespace std;

struct menu{
	string item_name[6]={"Bun","eggs","bread","biscuits","tea","tofe"};
	float item_price[6]={ 20 , 170 , 70.5 , 35.50 , 30 , 5.5 };
};

void DisplayingMenu(menu &m);
void GettingTotalAmountOfProducts(int & bought_products_quantity);
void input(string *getting_bought_products , int bought_products_quantity);
void BillMaking(menu &m , string *bought_products , int bought_products_quantity , float & sum);
float TaxCalculation(float sum);
void DisplayFinalBill(menu &m , float & sum , string *bought_products, int bought_products_quantity , float display_tax);

int main()
{
	menu main_menu;
	DisplayingMenu(main_menu);
	cout<<endl;
	
	int item_quantity = 0;
	GettingTotalAmountOfProducts(item_quantity);
	
	string *selected_items;
	selected_items = new string [item_quantity];
	input(selected_items , item_quantity);
	
	float total_bill =0;
	BillMaking(main_menu ,selected_items , item_quantity ,total_bill  );
	
	float tax=0;
	tax = TaxCalculation(total_bill);
	
	cout<<endl;
	DisplayFinalBill(main_menu ,total_bill , selected_items , item_quantity , tax);
	
	return 0;	
}

void DisplayingMenu(menu &m)
{
	for(int i=0 ; i<6 ; i++)
	{
		cout<<m.item_name[i]<<"   "<<"$ "<<m.item_price[i]<<endl;
	}
	
}

void GettingTotalAmountOfProducts(int & bought_products)
{
	cout<<"how much items do you want to buy : ";
	cin>>bought_products;
	cout<<endl;
	
	
}

void input(string *getting_bought_products , int bought_products_quantity)
{
	for(int i=0 ; i<bought_products_quantity ; i++)
	{
		cout<<"plz entre the name of the "<<i+1<<" item : ";
		cin>>getting_bought_products[i];
		cout<<endl;
	}	
	
}
void BillMaking(menu &m , string *bought_products, int bought_products_quantity, float &sum)
{
	
	for(int i=0 ; i<bought_products_quantity ; i++)
	{
		for(int j=0 ; j<6 ; j++)
		{
			if(bought_products[i] == m.item_name[j] )//MATCHING THE LISTED PRODUCTS WITH THE BOUGHT PRODUCTS
		{
			sum = sum + m.item_price[j];
		}
		}
	}
	
	sum = sum + TaxCalculation(sum);
}

float TaxCalculation(float sum)
{
	float tax =0.0;
	tax = sum * 0.05;
	return tax;
	
	
}

void DisplayFinalBill(menu &m ,float & sum , string *bought_products, int bought_products_quantity, float display_tax)
{
	cout<<"Your Bought Products"<<endl;
	for(int i=0 ; i<bought_products_quantity ; i++)
	{
		for(int j=0 ; j<6 ; j++)
		{
			if(bought_products[i] == m.item_name[j])
			{
				cout<<bought_products[i]<<" $"<<m.item_price[j]<<endl;
			}
		}
	}
	cout<<"your tax is : "<<display_tax<<endl;
	cout<<"Your Final Bill Is : $ "<<sum<<endl;
}
