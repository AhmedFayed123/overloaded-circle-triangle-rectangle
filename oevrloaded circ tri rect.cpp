#include<iostream>
using namespace std;
int trianglearea(float b,float h)

{
	float area1 ;
	area1 =1.0/2.0 * b * h;
	return area1;
}
int circlearea (double r)
{
	double area2;
	area2= 3.14159 * r*r;
	return area2 ;
}
int rectarea (double x, double y)
{
	
	double area3;
	area3=x*y;
	return area3;
}

int main()
{
double base, height,m,n,rad;
cout<<" enter base of triangle : ";
cin>>base;
cout<<" enter height of triangle : ";
cin>>height;
cout<<"area of triangle = "<<trianglearea(base,height)<<endl;

cout<<" enter radius to get the area of circle : ";
cin>>rad;
cout<<"radius = "<<circlearea ( rad)<<endl;

cout<<" enter 1st num :";
cin>>m;
cout<<"enter 2st num : ";
cin>>n;
cout<<"area or rectangle : "<<rectarea(m,n)<<endl;
}




