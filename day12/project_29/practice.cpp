#include<iostream>
#include<cstring>
using namespace std;

class Product {
private:

	string id;
	int price;
	string producer;
public:
	Product(string id, int price, string producer) {

		this->price = price;
		this->id = id;
		this->producer = producer;
	}

	void ShowInfo() {
		cout << "id : " << id << endl;
		cout << "price: " << price << endl;
		cout << "producer: " << producer << endl;
	}
	
};

class Book :public Product {
private:
	int ISBN;
	string author;
	string title;

public:
	Book(int ISBN, string author, string title, string id, int price, string producer) :Product(id,price,producer){
		this->ISBN = ISBN;
		this->author = author;
		this->title = title;
	}

	void ShowBook() {
		cout << "ISBN : " << ISBN << endl;
	}
};

class Handphone : public Product {
private:
	string model;
	string RAM;

public:
	Handphone(string model, string RAM, string id, int price, string producer) :Product(id, price, producer) {
		this->model = model;
		this->RAM = RAM;
	}
};

class Computer : public Product {
private:
	string model;
	string cpu;
	string RAM;
public:
	Computer(string model, string cpu, string RAM, string id, int price, string producer) :Product(id, price, producer) {
		this->model = model;
		this->cpu = cpu;
		this->RAM = RAM;
	}
};

int main(void) {
	Product* product[100];
	





	cout << "-----상품관리 프로그램---------" << endl;
	cout << "1. 상품추가   2. 상품 출력   3. 상품 검색    0. 종료" << endl;
	
	return 0;
}