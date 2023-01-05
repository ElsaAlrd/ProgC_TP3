#ifndef STORE_H
#define STORE_H

#include <iostream>
#include <string>
#include <vector>
#include "product.h"
#include "client.h"
#include "order.h"

using namespace std; 

class Store{

	public:
		//Constructor
		Store(vector<Product> products, vector<Client> clients, vector<Order> orders);
		//Guetters
		vector<Product> products();
        vector<Client> clients();
        vector<Order> orders();
		//Setteurs
        void addProduct(int idProduct);
        void removeProduct(int idProduct);
        void addClient(int idClient);
        void removeClient(int idClient);
        void addOrder(int idOrder);
        void removeOrder(int idOrder);

	private: 
		vector<Product> _products;
        vector<Client> _clients;
        vector<Order> _orders;
};

#endif