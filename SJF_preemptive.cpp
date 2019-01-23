#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
	int p;
	cout<<"Enter the number of processes-"<<endl;
	cin>>p;
	int BT[p],CT[p],TAT[p],WT[p];
	for(int i=0;i<p;i++)
	{
		cout<<"Enter the burst time for P"<<i+1<<"=";
		cin>>BT[i];
	}
	//sorting
	sort(BT,BT+p);
	//Completion Time (CT)
	CT[0]=BT[0];
	for(int i=1;i<p;i++)
	{
		CT[i]=CT[i-1]+BT[i];
	}
	//Here,Turn Around Time (TAT)=CT because Arrival Time (AT) is not given and is considered zero for all processes
	for(int i=0;i<p;i++)
	{
		TAT[i]=CT[i];
	}
	//Waiting Time (WT)
	for(int i=0;i<p;i++)
	{
		WT[i]=CT[i]-BT[i];
	}
	//Output
	for(int i=0;i<p;i++)
	{
		cout<<"Completion time="<<CT[i]<<endl;
	}
	for(int i=0;i<p;i++)
	{
		cout<<"Turn Around time="<<TAT[i]<<endl;
	}
	for(int i=0;i<p;i++)
	{
		cout<<"Waiting Time="<<WT[i]<<endl;
	}
}
