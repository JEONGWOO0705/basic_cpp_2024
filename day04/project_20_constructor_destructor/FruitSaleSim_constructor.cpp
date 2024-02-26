#include <iostream>
using namespace std;    // �̸� ���� ���� cout�� endl�� ����ϱ� ���ؼ�

class FruitSeller
{
private:                // �Ӽ�
    int APPLE_PRICE;
    int numOfApples;
    int myMoney;

public:
    FruitSeller(int price, int num, int money) {
        APPLE_PRICE = price;
        numOfApples = num;
        myMoney = money;
    }
    
    int SaleApples(int money)    // money��� ���� �Է�
    {
        int num = money / APPLE_PRICE;   // �Ǹ� ����
        numOfApples -= num;              // ���� ��� ����  /  -=: ���մ�� ������
        myMoney += money;                // �� ��, myMoney = myMoney + money;
        return num;
    }
    void ShowSalesResult()
    {
        cout << "���� ���: " << numOfApples << endl;
        cout << "�Ǹż���: " << myMoney << endl << endl;
    }
};

class FruitBuyer
{
private:
    int myMoney;
    int numOfApples;

public:
    FruitBuyer(int money) {
        myMoney = money;
        numOfApples = 0;
    }
    void BuyApples(FruitSeller& refseller, int money)        // int& num = n;
    {
        numOfApples += refseller.SaleApples(money);         // ���� �Լ� ���� seller�� �̸��� �ٸ����� ���� ��ü�� ����Ű�� �ִ�
        // seller������, ��� 2000��ġ �ּ���!!
        myMoney -= money;
    }
    void ShowBuyResult() const
    {
        cout << "���� �ܾ�: " << myMoney << endl;
        cout << "��� ����: " << numOfApples << endl;
    }
};

int main(void)
{
    FruitSeller seller(1000, 20, 0);
    FruitBuyer buyer(5000);
    buyer.BuyApples(seller, 2000);


    cout << "���� �Ǹ����� ��Ȳ" << endl;
    seller.ShowSalesResult();
    cout << "���� �������� ��Ȳ" << endl;
    buyer.ShowBuyResult();
    return 0;
}