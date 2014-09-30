#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

int main(){
	stack<double> da_stack;
	while(true){
		string in;
		cin >> in;
		if(in == "+"){
			double a = da_stack.top();
			da_stack.pop();
			double b = da_stack.top();
			da_stack.pop();
			da_stack.push(a + b);
		}
		else if(in == "-"){
			double a = da_stack.top();
			da_stack.pop();
			double b = da_stack.top();
			da_stack.pop();
			da_stack.push(a - b);

		}
		else if(in == "*"){
			double a = da_stack.top();
			da_stack.pop();
			double b = da_stack.top();
			da_stack.pop();
			da_stack.push(a * b);

		}
		else if(in == "/"){
			double a = da_stack.top();
			da_stack.pop();
			double b = da_stack.top();
			da_stack.pop();
			da_stack.push(a / b);

		}
		else if(in == "="){
			if(da_stack.size() != 1){
				cout << "Bad expression" << endl;
			}
			else{
				cout << da_stack.top() << endl;
				da_stack.pop();				
			}
		}
		else{
			double d;
			stringstream ss(in);
    		ss >> d;

	        da_stack.push(d);
		}
	}
}