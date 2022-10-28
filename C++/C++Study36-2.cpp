#include <iostream>
using namespace std;

template <typename T>
class Data{
private:
	T data_;
public:
	Data(T dt);
	T get_data();
};

template <> class Data<double>{	// double형에 대한 명시적 특수화 
private:
	double data_;
public:
	Data(double dt) { data_ = dt; }
	double get_data(){
		cout << "double형 데이터를 출력합니다." << endl;
		return data_;
	}
};

int main(){

    Data<string> str_data("C++ 수업");
	Data<double> double_data(3.14);
	
	cout << "str_data : " << str_data.get_data() << endl;	
	cout << "double_data : " << double_data.get_data() << endl;
	return 0;

}

template <typename T>
Data<T>::Data(T dt){
	data_ = dt;
}

template <typename T>
T Data<T>::get_data(){
	return data_;
}