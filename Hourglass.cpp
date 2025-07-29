#include<iostream>
using namespace std;

int main(){
    int i;
    int j;
    int k;
    int m;
    int l;
    int n;
    
for(i=0;i<4;i++)
{
    for(k=0;k<=i;k++){
        cout<<" ";
    }
    for(j=0;j<5-i;j++){
        cout<<" *";
    }
    
    for(m=0;m<=i+1;m++){
        cout<<" ";
    }
    
  cout<<endl;
}

for(m=0;m<6;m++)
{
    for(n=0;n<5-m;n++){
        cout<<" ";
    }

    for(l=0;l<=m;l++)
    {
        
        cout<<" *";
    }
    
  cout<<endl;
}
}
//Output
  * * * * *  
   * * * *   
    * * *    
     * *     
      *
     * *
    * * *
   * * * *
  * * * * *
 * * * * * *
