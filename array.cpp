#include<iostream>
using namespace std;
const int MAX=5;
class array{
private:
    int arr[MAX];
public:
    void insert(int pos,int num);
    void del(int pos);
    void reverse();
    void display();
    void search(int num);
};
void array::insert(int pos,int num)
{

    for(int i=MAX-1;i>=pos;i--)
    {

        arr[i]=arr[i-1];
          arr[i]=num;
    }


}
void array::del(int pos)
{

    for(int i=pos;i<MAX;i++)
    {

        arr[i-1]=arr[i];
        arr[i-1]=0;
    }

}
void array::reverse()
{
    for(int i =0;i<MAX/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[MAX-1-i];
        arr[MAX-1-i]=temp;

    }
}
void array::search(int num)
{
    for(int i=0;i<MAX;i++)
    {
        if(arr[i]==num)
        {

            cout<<"\n\nThe element"<<num<<"is present at"<<(i+1)<<"th position\n\n";
        }
          if(i==MAX)
    {
        cout<<"\n\nThe element"<<num<< "is not present in the array";
    }
    }


}
void array::display()
{

    cout<<endl;
    for(int i=0;i<MAX;i++)
    {

        cout<<" "<<arr[i];
    }
}
int main()
{

    array a;
    a.insert(0,21);
    a.insert(1,21);
    a.insert(2,31);
    a.insert(3,41);
    a.insert(4,51);

    cout<<"\n Elements of array:";
    a.display();
    a.del(4);
    a.del(2);
    cout<<"\n\nAfter Deletion:";
    a.display();
    a.search(51);
    return 0;
}


