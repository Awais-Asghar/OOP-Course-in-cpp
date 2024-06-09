#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{ 
    vector<int> a;      //zero length integer vector
    vector<char> b(4);  //4-element character vector
    vector<char> c(b);//4-element character vector from vec2
    vector<int> d(6,3); //6-element vector of 3s
    int element, size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        a.push_back(element);
    }
    display(a);
    vector<int> :: iterator Awais = a.begin();
//    vec1.insert(iter,5,69);
    a.insert(Awais+1,5,69);
    display(a);
    return 0;
}
