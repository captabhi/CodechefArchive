#include<iostream>
#define mod 1000000007
#include<cmath>

using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,i;
		float s,y;
		cin>>n>>s>>y;
		 float arrvel[n];
		float timetocrosschef=y/s;
	//	cout<<"Time to  cross chef="<<timetocrosschef<<endl;
		for(i=0;i<n;i++)
		{
			cin>>arrvel[i];
		}
		unsigned int arrdir[n];
		for(i=0;i<n;i++)
		{
			cin>>arrdir[i];
		}
		 float arrpos[n];
		for(i=0;i<n;i++)
		{
			cin>>arrpos[i];
		}
		
		
		 float arrlencar[n];
		for(i=0;i<n;i++)
		{
			cin>>arrlencar[i];
		}
		float timetoarr[n];
		int crossed[n]={0};
			
		for(i=0;i<n;i++)
		{
			
			timetoarr[i]=abs(arrpos[i])/arrvel[i];
			
		}
		for(i=0;i<n;i++)
		{
			if(arrdir[i]==1&&arrpos[i]>0)
			{
				crossed[i]=1;
			}
			else if(arrdir[i]==0&&arrpos[i]<0)
			crossed[i]=1;
		
			///////////Adding car length
		//	cout<<endl;
			if(arrpos[i]<0)
			{
			//	printf("%f\n",arrpos[i]);
				arrpos[i]-=arrlencar[i];
			//	printf("%f\n",arrpos[i]);
			}
			else
			{
			//	printf("%f\n",arrpos[i]);
				arrpos[i]+=arrlencar[i];
			//	printf("%f\n",arrpos[i]);
				
			}
			
		}
		for(i=0;i<n;i++)
		{
			if(arrpos[i]<0)
			{
				arrpos[i]*=(-1);
			}
			
			
		}
		/*cout<<"Crossed  ";
		for(i=0;i<n;i++)
		{
			cout<<crossed[i]<<" ";
			
		}
		cout<<endl;
		cout<<"Distance to travel  ";
		for(i=0;i<n;i++)
		{
			cout<<arrpos[i]<<" ";
			
		}
		cout<<endl;
		
		*/
		 float time[n]={0};
		 //float timetoarr[n];
		for(i=0;i<n;i++)
		{
			time[i]=abs(arrpos[i])/arrvel[i];
		//	timetoarr[i]=abs()
			
		}
	/*	cout<<"Time Taken to Complete journey for each lane ";
		for(i=0;i<n;i++)
		{
			cout<<time[i]<<" ";
			
		}
		cout<<endl;
		cout<<"Time Taken to arrive ";
		for(i=0;i<n;i++)
		{
			cout<<timetoarr[i]<<" ";
			
		}
		cout<<endl;
		*/ 
		 float timetaken=0;

		for(i=0;i<n;i++)
		{
			
			if(time[i]>timetaken&&crossed[i]==0)
			{
				if(timetoarr[i]-timetaken-timetocrosschef>0.0001)
				{
					timetaken+=timetocrosschef;
					//cout<<"Chef can cross without arrival of car\n";
				}
				else
				{
					timetaken=time[i];
					timetaken+=timetocrosschef;
					//cout<<"chef has to wait for car"<<time[i]<<endl;
				}
			}else
			{
				timetaken+=timetocrosschef;
			//	cout<<"Car will never cross\n";
			}
			
			
		}
		
	//	setprecision(3);
		printf("%f\n",timetaken);
		
	}
	
}
