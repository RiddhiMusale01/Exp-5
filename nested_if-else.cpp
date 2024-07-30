//Riddhi Musale
//Prn:23070123108
//Exp 5  Nested if else statement 
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
if(a>b) {
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