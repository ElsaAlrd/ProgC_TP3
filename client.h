#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>
#include <vector>

using namespace std; 

class Client{

	public:
		//Constructors
        Client();
		Client(int id, string first_name, string last_name, vector<int> purchases);
		//Guetters
		int id();
		string first_name();
		string last_name();
		vector<int> purchases();
		//Setteurs
		void updateId(int id);
		void updateFirstName(string first_name);
		void updateLastName(string last_name);
        void addPurchase(int idProduct);
        void removePurchase(int idProduct);

	private: 
		int _id;
		string _first_name;
        string _last_name;
        vector<int> _purchases;
};

#endif