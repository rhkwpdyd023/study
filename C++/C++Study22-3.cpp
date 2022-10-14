#include <iostream>
using namespace std;

struct Book
{
    /* data */
    string title;
    string author;
    int price;
};

void Display(const Book&);

int main(){

    Book web_book = {"HTML과 CSS", "홍길동", 28000};
	Display(web_book);
	return 0;

}

void Display(const Book& bk){

    cout << "책의 제목은 " << bk.title << "이고, ";
    cout << "저자는 " << bk.author << "이며, ";
    cout << "가격은 " << bk.price << "원입니다.";
}