#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double sum=0;
	int a;
	cin>>a;

	for(int i=0;i<a;i++){

		sum=0;
	    for(double j=0;j<a;j++)
	        sum += pow(-1,j)*(1/(j+1));
	   
        
    }
    printf("%.3lf\n", sum);
}
