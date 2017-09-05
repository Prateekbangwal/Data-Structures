//involves two steps
//1)sorting the arrays that are to merged 
//2)Adding sorted elements of  both the arrays to a new array


#include<iostream>
using namespace std;
const int MAX1=3;
const int MAX2=4;
class array
{
	private:
		int *arr;
		int size;
		
	public:
		void create(int sz);
		void sort();
		void display();
		void merge(array &a,array &b);
			
};
void array::create(int sz)
{
	size=sz;
	arr=new int[size];
	int n;
	for(int i=0;i<size;i++)
	{
		cout<<"\nEnter the element no."<<(i+1)<<"";
		cin>>n;
		arr[i]=n;
	}
}
void array::sort()
{
	int temp;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				
			}
		}
	}
}


void array::display()
{
	for(int i=0;i<size;i++)
	{
		cout<<" "<<arr[i];
	}
}
void array::merge(array&a,array&b)
{
	int i,k,j;
	size=a.size+b.size;
	
	arr=new int [size];
	for(k=0,i=0,j=0;i<size;i++)
	{
		if(a.arr[k]<b.arr[i])
		{
			arr[i]=a.arr[k];
			k++;
                       if(k>a.size)
			{
				for(i++;j<b.size;j++,i++)
				{
					arr[i]=b.arr[j];
				}
			}
			else
			{      j++;
				arr[i]=b.arr[j];
				
				if(j>=b.size)
				{
					for(i++;k<a.size;k++,i++)
					{
						arr[i]=a.arr[k];
					}
				}
			}
		}
	}
}
int main()
{
	array a;
	cout<<"\n Enter elements for first array\n";
	a.create (MAX1);
	
	array b;
	cout<<"\n Enter elements for second array\n";
	b.create(MAX2);
	a.sort();
	b.sort();
	
	cout<<"\n First array:\n";
	a.display();
	
	cout<<"\n Second array:\n";
	b.display();
	
	cout<<"\n\n After merging:\n:";
	array c;
	c.merge(a,b);
	c.display();
	
	return 0;
	}
