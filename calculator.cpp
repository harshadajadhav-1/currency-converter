#include<iostream>
using namespace std;
void addition(float number1,float number2 ){
    float value = number1 + number2;
    cout<<"sum ="<<value<<endl;
}

void subtraction(float number1,float number2 ){
    float value = number1 - number2;
    cout<<"difference ="<<value<<endl;
}
void multiplication(float number1,float number2 ){
    float value = number1 * number2;
    cout<<"multiplication="<<value<<endl;
}

void division(float number1,float number2 ){
    float value = number1 / number2;
    cout<<"division ="<<value<<endl;
}

//void modulus(float number1,float number2 ){
   // float value = number1 % number2;
    //out<<" mod ="<<value<<endl;


int main(){
int choice;
    double number1 , number2;



cout<<"------------calculator--------------"<<endl;
   cout<<"1. addition "<<endl;
   cout<<"2. subtraction"<<endl;
   cout<<"3. multiplication"<<endl;
   cout<<"4. division"<<endl;
   cout<<"5. modulous "<<endl;


cout<<"enter the choice = ";
cin>>choice;
cout<<"enter the amount  =  "<<endl;

cin>>number1;
cout<<"enter the amount ="<<endl;
cin>>number2;

   switch (choice)
   {
   case 1:
    addition(number1 ,number2);
    break;
    case 2:
    subtraction(number1 ,number2);
    break;
    case 3:
    multiplication(number1 ,number2);
    break;
    case 4:
    division(number1 ,number2);
    break;
    
    default:
    cout<<"invalid choice";
    break;
   
   }
   
   
   
}


