#include<stdlib.h>
#include<limits.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
////////////////////////////////////////////////////
long long ans(int n){
	long long sum;
	for(i=0;i<n;i++){
		sum+=abs(a[i]-(x+i*l));
	}
	return sum;
}

int p(int x){
	if(ans(x)<ans(x+1)){
		return 1;		
	}
	else{
		return 0;
	}
}
int psearch(int f,int l){
	if(p(f)==1){
		return f;
	}
	if(p(l)==0){
		return l;
	}
	int mid=f+l/2;
	while((l-f)>1){
		if(p[mid]==1)
			 l=mid;
		 else
			 f=mid;
		 mid=(f+l)/2;
	}
	return l;
}
int main()
{
	////////////////////////////////////////////////////
	{
	freopen("input-java.txt","r",stdin);
	freopen("output-java.txt","w",stdout);
	}
	////////////////////////////////////////////////
	int t;
	cin>>t;
	scanf("%d",&t);
	
	int n,l,a,b;
	while(t--){
		cin>>n>>l>>a>>b;
		
		int i;
		int a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		
		sort(a,a+n);
		int f=a,l=b-n*l;
		
		cout<<ans(psearch(f,l))<<endl;
	}
	
	return 0;
}
