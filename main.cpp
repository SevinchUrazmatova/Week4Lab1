#include <iostream>
using namespace std;

//problem 1
void checkNum(int n){
    cout<<"Enter the integer:";
    cin>>n;
    if (n>=0 ){
        cout<<"Positive"<<endl;
    } else{
        cout<<"Negative"<<endl;
    }
}

//problem 2
void NumCheck(int n){
    cout<<"Enter the integer:";
    cin>>n;
    if (n>=0 and n%2==0){
        cout<<"The number is positive and even.";
    }
    else if(n<0 and n%2==0){
        cout<<"The number is negative and even.";
    }
    else if(n>=0 and n%2==1){
        cout<<"The number is positive and odd";
    }
    else{
        cout<<"The number is negative and odd.";
    }
}

//problem 3
void check_largest(int a, int b, int c){
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    if (a>b and a>c){
        cout<<a<<endl;
    }
    else if (b>a and b>c){
        cout<<b<<endl;
    }
    else if (c>a and c>b){
        cout<<c<<endl;
    }
}

//problem 4
void is_divisible(int x, int y){
    cout<<"Enter the integers:";
    cin>>x>>y;
    if (x%y==0){
        cout<<x<<" is divisible by "<<y;
    }
    else{
        cout<<x<<" is not divisible "<<y;
    }
}

//problem 5
void check_leap_year(int x){
    cout<<"Enter the year:";
    cin>>x;
    if (x%4==0 && x%100==0 && x%400!=0) {
        cout << x << " is not a leap year.";
    }else if (x%4==0){
        cout<<x<<" is a leap year";

    }
}

//problem 6
void solve_equation(double a, double b, double c){
    cout<<"Enter the coefficients:";
    cin>>a>>b>>c;
    if (a==0){
        cout<<" Coefficient 'a' cannot be equal to zero in quadratic equation"<<endl;
    }
    double discriminant = b * b - 4 * a * c;
    if (discriminant>0){
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b + sqrt(discriminant)) / (2 * a);
        cout<<"x1="<<x1<<endl;
        cout<<"x2="<<x2<<endl;
    }
    else if(discriminant==0){
        double x=(-b) / (2 * a);
        cout<<"x="<<x<<endl;
    }
    else{
        cout<<"the equation does not have roots";
    }

}

//problem 7
void is_triangle(double a, double b, double c){
    cout<<"Enter the values: ";
    cin>>a>>b>>c;

}


int main() {
    int n;
//    int a,b,c;
//    int x,y;
    int x;
    double a, b,c;
//    checkNum(n);
//    NumCheck(n);
//    check_largest( a, b, c);
//    is_divisible(x,y);
//    check_leap_year(x);
    solve_equation(a,b,c);
    return 0;

}



