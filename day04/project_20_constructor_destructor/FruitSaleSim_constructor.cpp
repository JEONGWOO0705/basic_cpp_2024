#include <iostream>
using namespace std;    // 이름 공간 설정 cout와 endl을 사용하기 위해서

class FruitSeller
{
private:                // 속성
    int APPLE_PRICE;
    int numOfApples;
    int myMoney;

public:
    FruitSeller(int price, int num, int money) {
        APPLE_PRICE = price;
        numOfApples = num;
        myMoney = money;
    }
    
    int SaleApples(int money)    // money라는 값을 입력
    {
        int num = money / APPLE_PRICE;   // 판매 갯수
        numOfApples -= num;              // 남은 사과 갯수  /  -=: 복합대비 연산자
        myMoney += money;                // 번 돈, myMoney = myMoney + money;
        return num;
    }
    void ShowSalesResult()
    {
        cout << "남은 사과: " << numOfApples << endl;
        cout << "판매수익: " << myMoney << endl << endl;
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
        numOfApples += refseller.SaleApples(money);         // 메인 함수 안의 seller와 이름은 다르지만 같은 객체를 가르키고 있다
        // seller아저씨, 사과 2000원치 주세요!!
        myMoney -= money;
    }
    void ShowBuyResult() const
    {
        cout << "현재 잔액: " << myMoney << endl;
        cout << "사과 개수: " << numOfApples << endl;
    }
};

int main(void)
{
    FruitSeller seller(1000, 20, 0);
    FruitBuyer buyer(5000);
    buyer.BuyApples(seller, 2000);


    cout << "과일 판매자의 현황" << endl;
    seller.ShowSalesResult();
    cout << "과일 구매자의 현황" << endl;
    buyer.ShowBuyResult();
    return 0;
}