//Floyds Triangle
#include<iostream>
using namespace std;

int main(){
    int i;
    int j;
    int k;
    int sum;

for(i=0;i<4;i++)
{

    for(k=0;k<=i;k++)
    {
        sum=sum+1;
        cout<<sum<<" ";
    }
    
  cout<<endl;
    
}
}

//Output
1 
2 3 
4 5 6 
7 8 9 10 
