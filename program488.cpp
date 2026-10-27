#include<iostream>
#include<vector>
using namespace std;

/*
    SOLID : 
    S -> Single Responsibility Principle
         A class have only one reason To change
         A class Should do only one thing

        
*/

class Product
{
    public : 
        string name;
        double price;

        Product(string name , double price)
        {
            this->name = name;
            this->price = price;
        }
};


class ShoppingCart
{
    private : 
        vector<Product*> product;

        public : 
            void addProduct(Product *p)
            {
                product.push_back(p);
            }

        const vector<Product *> &getProduct()
        {
            return product;
        }

        // 1. Calculate Tota; price in cart

        double calculateTotal()
        {
            double total = 0;
            for(auto p : product)
            {
                total += p->price;
            }

            return total;
        }

        // 2 Violating SRP - Print invoice (should be in a separate Class)

        void printInvoice()
        {
            cout<<"Shooping Cart Inovice";

            for(auto & p : product)
            {
                cout<< p->name <<" - $ "<<p->price<<endl;
            }

            cout<<"Total : $ "<<calculateTotal()<<endl;
        }


        // 3. Violating to SRP -- SAve to databse should be in a diifeent class
        void saveToDatabase()
        {
            cout<<"Saving shopping cart to sdatabase...."<<endl;
        }

};

int main()
{

    ShoppingCart  * cart = new ShoppingCart();

    cart->addProduct(new Product("Laptop" , 1500));
    cart->addProduct(new Product("Mousw" , 50));

    cart->printInvoice();
    cart->saveToDatabase();
    
    return 0;
}
