# Experiment 5
AIM:To study and implement decision making statements.

THEORY:

In C++, decision-making statements are used to control the flow of execution based on conditions. They allow you to make decisions in your code and execute different code blocks depending on whether certain conditions are true or false.

1.if Statement:

Executes a block of code if a specified condition is true.

2.if-else Statement:

Executes one block of code if a condition is true, and another block of code if the condition is false.

3.Nested if Statements:

Allows for more complex decision-making by placing one if statement inside another.

4.switch Statement:

Provides a way to handle multiple possible values of a variable. Each case represents a different value to check against.


if else:
```
#include <iostream>
using namespace std;
int main(){
    int a=34,b=44;
    if(a>b){
        cout<<"a is greater than b";

    }
    else if(a<b){
        cout<<"b is greater than a ";

    }
    else{
        cout<<"both are equal";

    }
    return 0;
}
```
o/p:
![image](https://github.com/user-attachments/assets/a98c7aa9-4edc-4cd5-af62-77602c692421)

Nested if else
```
#include <iostream>
using namespace std;
int main() {
int a,b,c;
cout<<"Enter first no.: ";
cin>>a;
cout<<"Enter second no.: ";
cin>>b;
cout<<"Enter third: ";
cin>>c;
if(a>b) 
{
if(a>c) {

cout<<a<<" is the greatest number"<<endl;
}
else{ 
cout<<c<<" is the greatest number"<<endl;
}
}
else if(b>a) {
if(b>c) {
cout<<b<<" is the greatest number"<<endl;
}
else {
cout<<c<<" is the greatest number"<<endl;
}
}
else {
cout<<"All three numbers are equal";
}

return 0;
}
```
o/p:

![image](https://github.com/user-attachments/assets/2ba17975-b872-4b1f-a4b7-2807e07f690d)

break
```
#include <iostream>
using namespace std;
int main(){
    int choice;
cout<<"1.Monday"<<endl<<"2.Tuesday"<<endl<<"3.Wednesday"<<endl<<"4.Thursday"<<endl<<"5.Friday"<<endl<<"6.Saturday"<<endl<<"7.Sunday"<<endl;

cout<<"Enter your choice: ";
cin>>choice;
switch(choice) {
case 1:
cout<<"Monday";
break;
case 2:
cout<<"Tuesday";
break;
case 3:
cout<<"Wednesday";
break;
case 4:
cout<<"Thursday";
break;
case 5:
cout<<"Friday";
break;
case 6:
cout<<"Saturday";
break;
case 7:
cout<<"Sunday";
break;
default:
cout<<"Days of the week";
}
return 0;
}
```
o/p:
![image](https://github.com/user-attachments/assets/a8142e16-4808-4585-9607-c62ff5c95f0a)


default 
```
#include <iostream>
using namespace std;
int main(){
    int choice;
cout<<"1.Monday"<<endl<<"2.Tuesday"<<endl<<"3.Wednesday"<<endl<<"4.Thursday"<<endl<<"5.Friday"<<endl<<"6.Saturday"<<endl<<"7.Sunday"<<endl;

cout<<"Enter your choice: ";
cin>>choice;
switch(choice) {
case 1:
cout<<"Monday";
break;
case 2:
cout<<"Tuesday";
break;
case 3:
cout<<"Wednesday";
break;
case 4:
cout<<"Thursday";
break;
case 5:
cout<<"Friday";
break;
case 6:
cout<<"Saturday";
break;
case 7:
cout<<"Sunday";
break;
default:
cout<<"Days of the week";
}
return 0;
}
```
o/p:
![image](https://github.com/user-attachments/assets/f616c5bc-16eb-45f6-9ad3-34df1b395e54)


break_calculator:
```
#include<iostream>
using namespace std;

int main()
{
    char oper;
    cout<<"enter an operator(+,-,*,/): \n";
    cin >> oper; 

    float a,b;
    cout<<"enter two numbers: ";
    cin>>a>>b;

    switch(oper)
    {
        case '+':
        cout<<a<<"+"<<b<<"="<<a+b<<endl;
        break;

        case '-':
        cout<<a<<"-"<<b<<"="<<a-b<<endl;
        break;

        case '*':
        cout<<a<<"*"<<b<<"="<<a*b<<endl;
        break;

        case '/':
        cout<<a<<"/"<<b<<"="<<a/b<<endl;
        break;
    }


    return 0;
}
```
o/p:

![image](https://github.com/user-attachments/assets/100308ff-e5d4-415e-a42e-71a91751784b)



