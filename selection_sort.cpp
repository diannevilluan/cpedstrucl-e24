#include <iostream>

using namespace std;

int main (){
	int Z[] = { 30, 40, 20, 50, 10 };
	int x = 5;
		

	for (int i=0; i<x-1;i++)
	{
		int min= Z[i], index=i;
		for (int j=1+1; j<x; j++)
		{
			if (Z[j]<min)
			{
				min=Z[j];
				index=j;
			}
		}
		Z[index] = Z[i];
		Z[i]= min;
	}
	
	for (int i=0 ;i<x ; i++){
	cout<<Z[i]<<" ";}
	cout<<endl;
	return 0;
}
