#include <iostream>
using namespace std;


float markAverage(float marks [] )
{
float average=0;
float sum=0;

//number of marks
int arraysize = 7;

for(int i=0; i<arraysize; i++)
{
sum+=marks[i];
}

average = sum/arraysize;

return average;
}

int main()
{
float marks [7];
cout<<"Please enter the 7 marks "<<endl;

for(int i=0; i<7; i++)
{
    cin>>marks[i];
}

cout<<"The average mark is "<<markAverage(marks)<<endl;

return 0;
}