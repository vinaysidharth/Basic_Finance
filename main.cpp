// #include<iostream>
// #include<string>
// using namespace std;
//
// int main() {
//
//     string name;
//     cout<<"Enter your name : ";
//     cin>>name;
//     //cout<<string(name.size(),'*')<<endl;
//
//     string greeting=" Hello ""- "+name+" -";
//     cout<<"*"<<string(greeting.size(),'*')<<"*"<<endl;
//     cout<<"*"<<string(greeting.size(),' ')<<"*"<<endl;
//     cout<<"*"<<greeting<<"*"<<endl;
//     cout<<"*"<<string(greeting.size(),' ')<<"*"<<endl;
//     cout<<"*"<<string(greeting.size(),'*')<<"*"<<endl;
//
//     //cout<<name.size();
//     return 0;
// }

//
//
// #include<iostream>
// #include<string>
// using namespace std;
// int main() {
//     string name;
//     cout<<"Enter your name :";
//     cin>>name;
//     int r=name.size()+2;//number of charecters in the name
//     //build a square with * with the charecters
//     int const pad=2;
//     int rows=(pad*2)+3;
//     //cout<<rows-(rows-1);
//     int i=1;
//     while(i<=rows) {
//         //cout<<i;
//         if(i==1 || i==rows) {
//             cout<<'*'<<string(r,'*')<<'*'<<endl;
//         }
//         else if(i=rows/2){
//             cout<<"* "<<name<<" *"<<endl;
//         }
//         else{
//             cout<<"*"<<string(r,' ')<<"*"<<endl;
//         }
//
//         i++;
//     }
//     return 0;
// }

//student result caclulator

// #include<iostream>
// #include<iomanip>
// using namespace std;
//
// int main() {
//
//     double homework;
//     double midterm;
//     double final;
//
//     int homeworks;
//     cout<<"How many homeworks do you have?";
//     cin>>homeworks;
//
//     int i=0;
//     vector<double> list;
//     double value;
//     while(i<homeworks) {
//         cout<<"Enter value : ";
//         cin>>value;
//         list.push_back(value);
//         i++;
//     }
//
//
//     double sum=0;
//     double count=0;
//     double average=0;
//     // vector<double> list={1.0,2.0,3.0,4.0,5.0};
//     for (double i:list) {
//
//         //cout<<i;
//         sum+=i;
//         count+=1;
//
//     }
//     average=sum/count;
//     cout<<"Average : "<<average;
//
//     // cout<<"Enter your homework marks : ";
//     // cin>>homework;
//     // cout<<"Enter your midterm marks : ";
//     // cin>>midterm;
//     // cout<<"Enter your final marks : ";
//     // cin>>final;
//     //
//     // double result=(0.4*midterm)+(0.4*final)+(0.2*final);
//     //
//     // std::cout<<setprecision(3)<<"Result : "<<result;
//
// }

//simple interest calculator

#include<iostream>
#include"fin_funct.h"
using namespace std;

int main()
{
   double val=simple_interest();
    cout<<"Your interest is : "<<val<<endl;
    return 0;
}
